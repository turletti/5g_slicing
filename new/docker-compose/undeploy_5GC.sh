#!/bin/bash

# Undeploy 5G Core
echo "undeploying 5G Core..."
docker-compose -f docker-compose-slicing-basic-nrf.yaml down -t 0
sleep 5
echo "undeployment completed."
