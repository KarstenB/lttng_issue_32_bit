#!/bin/bash
set -e

>&2 echo "Compiling 64 bit urcu"
cd $(mktemp -d) &&
wget https://lttng.org/files/urcu/userspace-rcu-latest-0.13.tar.bz2 &&
tar -xf userspace-rcu-latest-0.13.tar.bz2 &&
cd userspace-rcu-0.13.* &&
./configure --libdir=/usr/lib/x86_64-linux-gnu &&
make &&
make install &&
ldconfig

>&2 echo "Compiling 64 bit UST"
cd $(mktemp -d) &&
wget https://lttng.org/files/lttng-ust/lttng-ust-latest-2.13.tar.bz2 &&
tar -xf lttng-ust-latest-2.13.tar.bz2 &&
cd lttng-ust-2.13.* &&
./configure --libdir=/usr/lib/x86_64-linux-gnu --with-sdt &&
make &&
make install &&
ldconfig

>&2 echo "Compiling 32 bit urcu"
cd $(mktemp -d) &&
wget https://lttng.org/files/urcu/userspace-rcu-latest-0.13.tar.bz2 &&
tar -xf userspace-rcu-latest-0.13.tar.bz2 &&
cd userspace-rcu-0.13.* &&
./configure --libdir=/usr/lib/i386-linux-gnu CFLAGS=-m32 &&
make &&
make install &&
ldconfig

>&2 echo "Compiling 32 bit UST"
cd $(mktemp -d) &&
wget https://lttng.org/files/lttng-ust/lttng-ust-latest-2.13.tar.bz2 &&
tar -xf lttng-ust-latest-2.13.tar.bz2 &&
cd lttng-ust-2.13.* &&
./configure --libdir=/usr/lib/i386-linux-gnu \
            CFLAGS=-m32 CXXFLAGS=-m32 \
            LDFLAGS='-L/usr/lib/i386-linux-gnu -L/usr/lib32' --with-sdt &&
make &&
make install &&
ldconfig

>&2 echo "Compiling 32 bit consumerd"
cd $(mktemp -d) &&
wget https://lttng.org/files/lttng-tools/lttng-tools-latest-2.13.tar.bz2 &&
tar -xf lttng-tools-latest-2.13.tar.bz2 &&
cd lttng-tools-2.13.* &&
./configure --libdir=/usr/lib/i386-linux-gnu CFLAGS=-m32 CXXFLAGS=-m32 \
            LDFLAGS='-L/usr/lib/i386-linux-gnu -L/usr/lib32' \
            --disable-bin-lttng --disable-bin-lttng-crash \
            --disable-bin-lttng-relayd --disable-bin-lttng-sessiond &&
make &&
cd src/bin/lttng-consumerd &&
make install &&
ldconfig

>&2 echo "Compiling 64 bit lttng tools"
cd $(mktemp -d) &&
wget https://lttng.org/files/lttng-tools/lttng-tools-latest-2.13.tar.bz2 &&
tar -xf lttng-tools-latest-2.13.tar.bz2 &&
cd lttng-tools-2.13.* &&
./configure --libdir=/usr/lib/x86_64-linux-gnu \
            --with-consumerd64-libdir=/usr/lib/x86_64-linux-gnu \
            --with-consumerd64-bin=/usr/lib/x86_64-linux-gnu/lttng/libexec/lttng-consumerd \
            --with-consumerd32-libdir=/usr/lib/i386-linux-gnu \
            --with-consumerd32-bin=/usr/lib/i386-linux-gnu/lttng/libexec/lttng-consumerd &&
make &&
make install &&
ldconfig

rm -rf /tmp/*