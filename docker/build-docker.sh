#!/usr/bin/env bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
cd $DIR/..

DOCKER_IMAGE=${DOCKER_IMAGE:-hilux/hiluxd-develop}
DOCKER_TAG=${DOCKER_TAG:-latest}

BUILD_DIR=${BUILD_DIR:-.}

rm docker/bin/*
mkdir docker/bin
cp $BUILD_DIR/src/hiluxd docker/bin/
cp $BUILD_DIR/src/hilux-cli docker/bin/
cp $BUILD_DIR/src/hilux-tx docker/bin/
strip docker/bin/hiluxd
strip docker/bin/hilux-cli
strip docker/bin/hilux-tx

docker build --pull -t $DOCKER_IMAGE:$DOCKER_TAG -f docker/Dockerfile docker
