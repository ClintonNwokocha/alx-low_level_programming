#!/bin/bash

gcc -c *.c -fpic
rm main.o
gcc *.o -shared -o liball.so
