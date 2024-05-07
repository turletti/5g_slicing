#!/bin/bash

rm -rf /tmp/oai/slicing-with-nssf	
mkdir -p /tmp/oai/slicing-with-nssf	
chmod 777 /tmp/oai/slicing-with-nssf	
docker-compose -f docker-compose-slicing-basic-nrf-rfsim.yaml up -d mysql
# warning, if you enable tshark tracing, disk space will saturate quickly...
#nohup sudo tshark -i demo-oai -f '(not host 192.168.70.145 and not host 192.168.70.154) or (host 192.168.70.145 and icmp)' -w /tmp/oai/slicing-with-nssf/slicing-with-nssf.pcap > /tmp/oai/slicing-with-nssf/slicing-with-nssf.log 2>&1 &	
#../ci-scripts/checkTsharkCapture.py --log_file /tmp/oai/slicing-with-nssf/slicing-with-nssf.log --timeout 30	
docker-compose -f docker-compose-slicing-basic-nrf-rfsim.yaml up -d	
#sudo chmod 666 /tmp/oai/slicing-with-nssf/slicing-with-nssf.*	
../ci-scripts/checkContainerStatus.py --container_name mysql --timeout 120	
../ci-scripts/checkContainerStatus.py --container_name oai-upf-slice12 --timeout 30	
docker-compose -f docker-compose-slicing-basic-nrf-rfsim.yaml ps -a	
docker-compose -f docker-compose-slicing-rfsim.yaml up -d oai-gnb oai-nr-ue1	
../ci-scripts/checkContainerStatus.py --container_name rfsim5g-oai-nr-ue1 --timeout 30	
../ci-scripts/checkUePduSession.py --container_name rfsim5g-oai-nr-ue1	
docker-compose -f docker-compose-slicing-rfsim.yaml up -d oai-gnb oai-nr-ue2
../ci-scripts/checkContainerStatus.py --container_name rfsim5g-oai-nr-ue2 --timeout 30	
../ci-scripts/checkUePduSession.py --container_name rfsim5g-oai-nr-ue2
docker-compose -f docker-compose-slicing-rfsim.yaml up -d oai-gnb oai-nr-ue3
../ci-scripts/checkContainerStatus.py --container_name rfsim5g-oai-nr-ue3 --timeout 30	
../ci-scripts/checkUePduSession.py --container_name rfsim5g-oai-nr-ue3
docker-compose -f docker-compose-slicing-rfsim.yaml up -d oai-gnb oai-nr-ue4
../ci-scripts/checkContainerStatus.py --container_name rfsim5g-oai-nr-ue4 --timeout 30	
../ci-scripts/checkUePduSession.py --container_name rfsim5g-oai-nr-ue4
docker-compose -f docker-compose-slicing-rfsim.yaml ps -a	
docker logs oai-amf 2>&1 | grep --color=never info | tail -20
echo "wait 10s before pinging EXT-DN from UEs"; sleep 10
echo "UE 1, slice 1:"; docker exec rfsim5g-oai-nr-ue1 ping -I oaitun_ue1 -c 1 192.168.70.145
echo "UE 2, slice 2:"; docker exec rfsim5g-oai-nr-ue2 ping -I oaitun_ue1 -c 1 192.168.70.145
echo "UE 3, slice 3:"; docker exec rfsim5g-oai-nr-ue3 ping -I oaitun_ue1 -c 1 192.168.70.145
echo "UE 4, slice 4:"; docker exec rfsim5g-oai-nr-ue4 ping -I oaitun_ue1 -c 1 192.168.70.145
