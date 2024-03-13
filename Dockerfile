FROM debian:bullseye

RUN apt-get update && \
    apt-get install -y iputils-ping sudo make gcc && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/*

WORKDIR /app