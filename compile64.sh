#!/bin/bash
clang  -g -O0 -c *.c -I.
clang++ -g -O0 -std=c++20 -llttng-ust -ldl test_package.cc *.o -o run_test
