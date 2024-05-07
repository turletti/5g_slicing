#!/bin/bash

docker-compose -f docker-compose-slicing-rfsim.yaml stop -t 2	
docker-compose -f docker-compose-slicing-basic-nrf-rfsim.yaml stop -t 2	
docker logs oai-amf > /tmp/oai/slicing-with-nssf/amf.log 2>&1	
docker logs oai-ausf > /tmp/oai/slicing-with-nssf/ausf.log 2>&1	
docker logs oai-nssf > /tmp/oai/slicing-with-nssf/nssf.log 2>&1	
docker logs oai-udm > /tmp/oai/slicing-with-nssf/udm.log 2>&1	
docker logs oai-udr > /tmp/oai/slicing-with-nssf/udr.log 2>&1	
docker logs oai-nrf-slice12 > /tmp/oai/slicing-with-nssf/nrf-slice12.log 2>&1	
docker logs oai-smf-slice12 > /tmp/oai/slicing-with-nssf/smf-slice12.log 2>&1	
docker logs oai-upf-slice12 > /tmp/oai/slicing-with-nssf/upf-slice12.log 2>&1	
docker logs oai-ext-dn > /tmp/oai/slicing-with-nssf/ext-dn.log 2>&1	
docker logs rfsim5g-oai-gnb > /tmp/oai/slicing-with-nssf/rfsim5g-oai-gnb.log 2>&1	
docker logs rfsim5g-oai-nr-ue1 > /tmp/oai/slicing-with-nssf/rfsim5g-oai-nr-ue1.log 2>&1	
docker logs rfsim5g-oai-nr-ue2 > /tmp/oai/slicing-with-nssf/rfsim5g-oai-nr-ue2.log 2>&1	
docker logs rfsim5g-oai-nr-ue3 > /tmp/oai/slicing-with-nssf/rfsim5g-oai-nr-ue3.log 2>&1	
docker logs rfsim5g-oai-nr-ue4 > /tmp/oai/slicing-with-nssf/rfsim5g-oai-nr-ue4.log 2>&1	
docker-compose -f docker-compose-slicing-rfsim.yaml down -t 0	 
docker-compose -f docker-compose-slicing-basic-nrf-rfsim.yaml down -t 0
