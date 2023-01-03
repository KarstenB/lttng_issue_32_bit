#!/bin/bash
clang -m32 -g -O0 -c *.c -I.
clang++ -m32 -g -O0 -std=c++20 -llttng-ust -ldl test_package.cc *.o -o run_test -L/usr/lib/i386-linux-gnu -L/usr/local/lib32 -Wl,-rpath,/usr/lib/i386-linux-gnu,-rpath,/usr/local/lib32
