#!/bin/bash
docker rm /my-debian-container
docker build -t my-debian .
docker run -it --name my-debian-container -v "$(pwd)":/app my-debian
                          