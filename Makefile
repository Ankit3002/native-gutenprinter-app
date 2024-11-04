#
# Makefile for LPrint, a Label Printer Application
#
# Copyright © 2019-2024 by Michael R Sweet
#
# Licensed under Apache License v2.0.  See the file "LICENSE" for more
# information.
#

# Be silent...
.SILENT:


# Version number...
LPRINT_VERSION	=	1.3.2


# Languages we have localized messages for...
LANGUAGES	=	de en es fr it


# Programs and options...
AR		=	/usr/bin/ar
ARFLAGS		=	cr
ASAN_OPTIONS	=	leak_check_at_exit=false
CC		=	gcc
CFLAGS		=	-I.. -fPIC  -I/usr/local/include -I/usr/local/include/libcups3 -I/usr/include/dbus-1.0 -I/usr/lib/aarch64-linux-gnu/dbus-1.0/include -D_REENTRANT -I/usr/include/libpng16 -I/usr/include/libusb-1.0  -I/usr/local/include  -I/usr/include/p11-kit-1 -D_REENTRANT  $(CPPFLAGS) $(OPTIM) $(WARNINGS)
CPPFLAGS	=	 -D_FORTIFY_SOURCE=2 -D__USE_MISC -D_TIME_BITS=64 -D_FILE_OFFSET_BITS=64
CSFLAGS		=	-s "$${CODESIGN_IDENTITY:=-}" --timestamp -o runtime
INSTALL		=	/home/ank/Documents/lprint/install-sh
LDFLAGS		=	-fPIE -pie  $(OPTIM)
LIBS		=	 -L/usr/local/lib -lpappl -lcups3  -L/usr/local/lib -lgutenprint  -lcups  -lm
MKDIR		=	/usr/bin/mkdir -p
OPTIM		=	-g -Os
RANLIB		=	ranlib
RM		=	/usr/bin/rm -f
RMDIR		=	@RMDIR@
SHELL		=	/bin/sh
WARNINGS	=	-Wall -Wunused -Wno-char-subscripts -Wno-format-truncation -Wno-format-y2k -Wno-switch -Wno-unused-result


# Directories...
bindir		=	/usr/local/bin
datadir		=	${datarootdir}
datarootdir	=	${prefix}/share
exec_prefix	=	/usr/local
includedir	=	${prefix}/include
infodir		=	${datarootdir}/info
libdir		=	${exec_prefix}/lib
libexecdir	=	${exec_prefix}/libexec
localstatedir	=	${prefix}/var
mandir		=	${datarootdir}/man
oldincludedir	=	/usr/include
prefix		=	/usr/local
privateinclude	=	@privateinclude@
sbindir		=	${exec_prefix}/sbin
sharedstatedir	=	${prefix}/com
srcdir		=	.
sysconfdir	=	${prefix}/etc
top_srcdir	=	.
unitdir		=	$(prefix)/lib/systemd/system

BUILDROOT	=	$(DSTROOT)$(RPM_BUILD_ROOT)$(DESTDIR)


# Build commands...
.c.o:
	echo Compiling $<...
	$(CC) $(CFLAGS) -c -o $@ $<


# Targets...
MAN1		=	\
			man/lprint-add.1 \
			man/lprint-cancel.1 \
			man/lprint-default.1 \
			man/lprint-delete.1 \
			man/lprint-devices.1 \
			man/lprint-drivers.1 \
			man/lprint-jobs.1 \
			man/lprint-modify.1 \
			man/lprint-options.1 \
			man/lprint-printers.1 \
			man/lprint-server.1 \
			man/lprint-shutdown.1 \
			man/lprint-status.1 \
			man/lprint-submit.1 \
			man/lprint.1
MAN5		=	\
			man/lprint.conf.5

OBJS		=	\
			lprint.o \
			i18n.o \
			lprint-brother.o \
			lprint-common.o \
			lprint-cpcl.o \
			lprint-dymo.o \
			lprint-epl2.o \
			lprint-sii.o \
			lprint-testpage.o \
			lprint-tspl.o \
			lprint-zpl.o
TARGETS		=	\
			lprint


TESTOBJS	=	\
			lprint-common.o \
			testdither.o
TESTTARGETS	=	\
			testdither


# Make everything...
all:	$(TARGETS)


# Clean everything...
clean:
	$(RM) $(TARGETS) $(OBJS) $(TESTTARGETS) $(TESTOBJS)


# Clean everything and generated files
distclean:	clean
	$(RM) -r autom4te.cache
	$(RM) config.h config.log config.status
	$(RM) Makefile


# Install everything...
install:	all
	echo "Installing lprint to $(BUILDROOT)$(bindir)..."
	$(INSTALL) -d -m 755 $(BUILDROOT)$(bindir)
	$(INSTALL) -c -m 755 lprint $(BUILDROOT)$(bindir)
	echo "Installing man pages to $(BUILDROOT)$(mandir)..."
	$(INSTALL) -d -m 755 $(BUILDROOT)$(mandir)/man1
	for file in $(MAN1); do \
	    $(INSTALL) -c -m 644 $$file $(BUILDROOT)$(mandir)/man1; \
	done
	$(INSTALL) -d -m 755 $(BUILDROOT)$(mandir)/man5
	for file in $(MAN5); do \
	    $(INSTALL) -c -m 644 $$file $(BUILDROOT)$(mandir)/man5; \
	done
	if test `uname` = Darwin; then \
	    echo "Installing launchd service to $(BUILDROOT)/Library/LaunchDaemons..."; \
	    $(INSTALL) -d -m 755 $(BUILDROOT)/Library/LaunchDaemons; \
	    $(INSTALL) -c -m 644 org.msweet.lprint.plist $(BUILDROOT)/Library/LaunchDaemons; \
	elif test "x$(unitdir)" != x; then \
	    echo "Installing systemd service to $(BUILDROOT)$(unitdir)..."; \
	    $(INSTALL) -d -m 755 $(BUILDROOT)$(unitdir); \
	    $(INSTALL) -c -m 644 lprint.service $(BUILDROOT)$(unitdir); \
	fi


# Test everything...
test:	$(TARGETS) $(TESTTARGETS)


# LPrint program...
lprint:	$(OBJS)
	echo Linking $@...
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LIBS)
	if test `uname` = Darwin; then \
	    echo "Code-signing $@..."; \
	    codesign $(CSFLAGS) -i org.msweet.lprint $@; \
	fi


# Dither test program...
testdither: $(TESTOBJS)
	echo Linking $@...
	$(CC) $(LDFLAGS) -o $@ $(TESTOBJS) $(LIBS)
	if test `uname` = Darwin; then \
	    echo "Code-signing $@..."; \
	    codesign $(CSFLAGS) -i org.msweet.testdither $@; \
	fi


# Generate resource headers from the corresponding files in the resource
# directory...
resheaders:
	for file in lprint lprint-large lprint-small; do \
	    echo "Generating $$file-png.h from $$file.png..."; \
	    pappl-makeresheader static-resources/$$file.png >static-resources/$$file-png.h; \
	done
	echo "Generating lprint-css.h from lprint.css..."
	pappl-makeresheader static-resources/lprint.css >static-resources/lprint-css.h
	for lang in $(LANGUAGES); do \
	    echo "Generating lprint-$$lang-strings.h from lprint-$$lang.strings..."; \
	    pappl-makeresheader static-resources/lprint-$$lang.strings >static-resources/lprint-$$lang-strings.h; \
	done


# Dependencies...
$(OBJS) $(TESTOBJS):	config.h lprint.h Makefile
lprint.o:	\
		lprint-brother.h \
		lprint-cpcl.h \
		i18n.h \
		lprint-dymo.h \
		lprint-epl2.h \
		lprint-sii.h \
		lprint-tspl.h \
		lprint-zpl.h \
		static-resources/lprint-css.h \
		static-resources/lprint-png.h \
		static-resources/lprint-large-png.h \
		static-resources/lprint-small-png.h \
		static-resources/lprint-de-strings.h \
		static-resources/lprint-en-strings.h \
		static-resources/lprint-es-strings.h \
		static-resources/lprint-fr-strings.h \
		static-resources/lprint-it-strings.h


# Notarize the lprint executable and make the macOS package...
#
# Set the APPLEID, CODESIGN_IDENTITY, PKGSIGN_IDENTITY, and TEAMID environment
# variables from the Apple developer pages.
macos:
	echo "Creating archive for notarization..."
	rm -f lprint.zip
	zip -v9 lprint.zip lprint
	echo Notarizing application
	xcrun notarytool submit lprint.zip \
	    --apple-id "$${APPLEID}" \
	    --keychain-profile "AC_$${TEAMID}" \
	    --team-id "$${TEAMID}" \
	    --wait
	rm -f lprint.zip
	echo "Creating the macOS package..."
	rm -rf /private/tmp/lprint-$(LPRINT_VERSION)
	make BUILDROOT="/private/tmp/lprint-$(LPRINT_VERSION)" install
	pkgbuild --root /private/tmp/lprint-$(LPRINT_VERSION) \
	    --identifier org.msweet.lprint \
	    --version $(LPRINT_VERSION) \
	    --scripts macos-scripts \
	    --min-os-version 11.0 \
	    --sign "$${PKGSIGN_IDENTITY}" --timestamp \
	    lprint-$(LPRINT_VERSION)-macos.pkg