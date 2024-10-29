#! /usr/bin/bash

# gcc -o native_printer native_printer.o -lgutenprint -lpappl -lcups
# gcc -c native_printer.c  -o native_printer.o 
# gcc -o native_printer native_printer.o -lgutenprint -lpappl -lcups


gcc -c i18n.c -o i18n.o
gcc -c native_printer.c -o native_printer.o
gcc -o native_printer native_printer.o i18n.o -lgutenprint -lpappl -lcups3
