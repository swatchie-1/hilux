FROM debian:stretch
LABEL maintainer="Hilux Developers <dev@hilux.org>"
LABEL description="Dockerised Hilux, built from Travis"

RUN apt-get update && apt-get -y upgrade && apt-get clean && rm -fr /var/cache/apt/*

COPY bin/* /usr/bin/
