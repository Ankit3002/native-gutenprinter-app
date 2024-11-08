## Gutenprint-Printer-App - A Native Gutenprint Printer Application
====================================

Gutenprint-Printer-App is a native Printer Application for Gutenprint, providing high-quality printing support for a wide range of inkjet, dye-sublimation, and monochrome PCL laser printers. This application is built on PAPPL, optimized for compatibility with upcoming CUPS versions that no longer support PPD-based drivers.

Features:
A single executable manages spooling, status monitoring, and server functionality.
Supports multiple printers with IP Everywhere™ compatibility, allowing driverless printing for clients on Android™, Chrome OS™, iOS®, Linux®, macOS®, and Windows® 10/11.
Flexible access to printer-specific options via an enhanced web-based admin interface.
Each printer supports options such as color modes, print quality settings, paper types and sizes, and media adjustments.
Direct printing support for popular file formats, with seamless recovery from interruptions like power loss or connection issues.
For more information, see the file DOCUMENTATION.md and the man pages in the "man" directory.

Note: For issues or feature requests, please use the GitHub issue tracker at:
[https://github.com/Ankit3002/gutenprint-printer-app/issues](https://github.com/Ankit3002/native-gutenprinter-app/issues)

Requirements
Gutenprint-Printer-App requires:

A POSIX-compliant "make" program (both GNU and BSD make are known to work),
A C99 compiler (Clang and GCC are both compatible),
PAPPL 1.2 or later,
CUPS 2.4 or later, or libcups 3.0 or later,
gutenprint library.

### Supported Printers
Gutenprint-Printer-App supports various models from:

Epson and Canon inkjet printers,
Dye-sublimation printers,
Monochrome PCL laser printers.
More printer support may be added as testing and development continue. For requests on additional printer models, please reach out via the GitHub issue tracker.

Standards
Using PAPPL, Gutenprint-Printer-App implements PWG 5100.14-2020: IPP Everywhere™, ensuring compatibility with driverless printing. It also includes functionality for PWG 5100.22-2019: IPP System Service v1.0 to manage print queues and default printer settings.

Legal Information
Gutenprint-Printer-App is developed by contributors to the OpenPrinting Project and is licensed under the Apache License Version 2.0. Refer to the files LICENSE and NOTICE for additional information.

This Printer Application is based on Gutenprint and utilizes libgutenprint for direct access to printer support and capability information, ensuring efficiency and high-quality printing.

