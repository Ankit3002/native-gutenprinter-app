#! /usr/bin/bash

gcc -o native_printer native_printer.o -lgutenprint -lpappl
gcc -c native_printer.c -o native_printer.o
gcc -o native_printer native_printer.o -lgutenprint -lpappl
