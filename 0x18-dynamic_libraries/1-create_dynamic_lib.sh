#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -c shared -o liball.so
