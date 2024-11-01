#! /usr/bin/bash

# gcc -o native_printer native_printer.o -lgutenprint -lpappl -lcups
# gcc -c native_printer.c  -o native_printer.o 
# gcc -o native_printer native_printer.o -lgutenprint -lpappl -lcups


gcc -c i18n.c -o i18n.o
gcc -c native_printer.c -o native_printer.o
gcc -o native_printer native_printer.o i18n.o -lgutenprint -lpappl -lcups3 -lm -lavahi-common -lavahi-client -lcrypto -ljpeg -lpng16 -lusb-1.0 -lpam -ldbus-1 -lz -lssl  -lsystemd  -llzma -lzstd 

# gcc -o native_printer native_printer.c  -lpappl -lgutenprint -lcups3 -lavahi-common -lavahi-client -lcrypto -ljpeg -lpng16 -lusb-1.0 -lpam -ldbus-1 -lz -lssl -ludev -laudit -lsystemd -lcap -lcap-ng -lgcrypt -llz4 -llzma -lzstd -lgpg-error
