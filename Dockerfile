FROM debian:latest
RUN dpkg --add-architecture i386 && apt-get update -y && apt-get -y install wget build-essential autoconf libtool pkg-config g++-multilib linux-libc-dev:i386 clang babeltrace procps
RUN mkdir /code
WORKDIR /code
ADD install_deps.sh /code/
RUN chmod +x *.sh && ./install_deps.sh
ADD compile_lttng.sh /code/
RUN chmod +x *.sh && ./compile_lttng.sh
ADD *.sh /code/
ADD *.c /code/
ADD *.h /code/
ADD *.hpp /code/
ADD *.cc /code/
RUN chmod +x *.sh 
ENTRYPOINT /bin/bash