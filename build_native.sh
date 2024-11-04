#! /usr/bin/bash

# gcc -o native_printer native_printer.o -lgutenprint -lpappl -lcups
# gcc -c native_printer.c  -o native_printer.o 
# gcc -o native_printer native_printer.o -lgutenprint -lpappl -lcups


gcc -c i18n.c -o i18n.o
gcc -c native_printer.c -o native_printer.o
gcc -o native_printer native_printer.o i18n.o -lgutenprint -lpappl -lcups3 -lm -lavahi-common -lavahi-client -lcrypto -ljpeg -lpng16 -lusb-1.0 -lpam -ldbus-1 -lz -lssl  -lsystemd  -llzma -lzstd 

# gcc -o native_printer native_printer.c  -lpappl -lgutenprint -lcups3 -lavahi-common -lavahi-client -lcrypto -ljpeg -lpng16 -lusb-1.0 -lpam -ldbus-1 -lz -lssl -ludev -laudit -lsystemd -lcap -lcap-ng -lgcrypt -llz4 -llzma -lzstd -lgpg-error

# gcc -o native_printer native_printer.c \
#     -lpappl -lgutenprint\
#     -I/usr/local/include \
#     -I/usr/local/include/libcups3 \
#     -I/usr/include/dbus-1.0 \
#     -I/usr/include/cups \
#     -I/usr/lib/aarch64-linux-gnu/dbus-1.0/include \
#     -I/usr/include/libpng16 \
#     -I/usr/include/libusb-1.0 \
#     -D_REENTRANT \
#     -D_FORTIFY_SOURCE=2 -D__USE_MISC -D_TIME_BITS=64 -D_FILE_OFFSET_BITS=64 \
#     -fPIC -g -Os -Wall -Wunused -Wno-char-subscripts -Wno-format-truncation -Wno-format-y2k -Wno-switch -Wno-unused-result \
#     -L/usr/local/lib -lgutenprint -lpappl -lcups3 -lm \
#     -fPIE -pie
