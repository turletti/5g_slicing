#!/bin/bash

echo "rfsim scenario, checking containers health..."
echo "5G Core:"
docker-compose -f docker-compose-slicing-basic-nrf-rfsim.yaml ps -a
echo "RAN:"
docker-compose -f docker-compose-slicing-rfsim.yaml ps -a


