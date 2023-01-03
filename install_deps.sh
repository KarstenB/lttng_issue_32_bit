#!/bin/bash
set -e

>&2 echo "Installing dependencies"
apt-get -y install libpopt-dev libpopt-dev:i386 libnuma-dev libnuma-dev:i386 liburcu-dev:i386 uuid-dev:i386 libc6-dev:i386 linux-libc-dev:i386 libcrypt-dev:i386 libnsl-dev:i386 libtirpc-dev:i386 systemtap-sdt-dev:i386 libxml2-dev:i386 libxml2-dev
cp /usr/include/i386-linux-gnu/sys/sdt-config.h /tmp/sdt-config.h
cp /usr/include/i386-linux-gnu/sys/sdt.h /tmp/sdt.h
apt-get -y install systemtap-sdt-dev 
cp /tmp/sdt.h /usr/include/i386-linux-gnu/sys/sdt.h 
cp /tmp/sdt-config.h /usr/include/i386-linux-gnu/sys/sdt-config.h
cp /tmp/sdt.h /usr/include/i386-linux-gnu/sys/sdt.h