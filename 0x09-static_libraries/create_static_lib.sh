#!/bin/bash

gcc -c *.c main.h
ar -rcs liball.a *.o
