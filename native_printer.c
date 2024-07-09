// #include <gutenprint/gutenprint.h>
// #include <gutenprint/util.h>
#include <cups/raster.h>
#include <gutenprint/string-list.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>
#include <libgen.h>
#include <strings.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <gutenprint/gutenprint-module.h>
#include <pappl/pappl.h>

// extern const char *ppdext;
// extern const char *cups_modeldir;
// extern const char *gpext;
// extern int cups_ppd_ps_level;
// extern int localize_numbers;
// extern int use_base_version;
// #define VERSION "5.3.4-2023-12-06T01-00-2ef8ba24"
/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

// Code for the header file definitions over here...
/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* CUPS data directory. */
#define CUPS_DATADIR "/usr/share/cups"

/* */
#define CUPS_MODELDIR "/usr/share/cups/model/gutenprint/5.3/"

/* */
#define CUPS_PPD_NICKNAME_STRING " - CUPS+Gutenprint v"

/* CUPS PPD PostScript level */
#define CUPS_PPD_PS_LEVEL 3

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#define ENABLE_NLS 1

/* Shared libraries are built. */
#define ENABLE_SHARED "yes"

/* Static libraries are built. */
#define ENABLE_STATIC "yes"

/* */
#define GUTENPRINT_BASE_VERSION "5.3.4"

/* */
#define GUTENPRINT_RELEASE_VERSION "5.3"

/* Define to 1 if you have the MacOS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the MacOS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define if the GNU dcgettext() function is already present or preinstalled.
 */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if GCC special attributes are supported */
#define HAVE_GCC_ATTRIBUTES 1

#if !defined(HAVE_GCC_ATTRIBUTES) && !defined(__attribute__)
/* This should really be a C99 anonymous variadic macro. */
#define __attribute__(attr)
#endif

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the `getopt_long' function. */
#define HAVE_GETOPT_LONG 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define to 1 if you have the `getuid' function. */
#define HAVE_GETUID 1

/* Define if GNU ld is present. */
/* #undef HAVE_GNU_LD */

/* Define if you have the iconv() function. */
#define HAVE_ICONV 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Is libreadline present? */
#define HAVE_LIBREADLINE 0

/* Define if libz is present. */
#define HAVE_LIBZ /**/

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the <ltdl.h> header file. */
#define HAVE_LTDL_H 1

/* Define if maintainer-mode is to be used. */
/* #undef HAVE_MAINTAINER_MODE */

/* Define to 1 if you have the `nanosleep' function. */
#define HAVE_NANOSLEEP 1

/* Define to 1 if you have the `poll' function. */
#define HAVE_POLL 1

/* Define if libreadline header is present. */
/* #undef HAVE_READLINE_READLINE_H */

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <time.h> header file. */
#define HAVE_TIME_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `usleep' function. */
#define HAVE_USLEEP 1

/* Define to 1 if you have the `waitpid' function. */
#define HAVE_WAITPID 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Printers to test in minimal run */
#define MINIMAL_PRINTERS_TO_TEST escp2 - r1800 escp2 - 3880 pcl - g_4 pcl - g_5c pcl - 500 mitsubishi - p95d shinko - chcs2145 kodak - 1400 canon - cp910 mitsubishi - 9800d bjc - s200 bjc - PIXMA - Pro9000mk2 datamax_oneil_I4212e lexmark - z43

/* Build a modular libgutenprint */
/* #undef MODULE */

/* The operating system to build for */
#define OSTYPE "linux"

/* Name of package */
#define PACKAGE "gutenprint"

/* */
#define PACKAGE_BIN_DIR "/usr/local/bin"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "gimp-print-devel@lists.sourceforge.net"

/* */
#define PACKAGE_DATA_DIR "/usr/local/share/gutenprint"

/* */
#define PACKAGE_LIB_DIR "/usr/local/lib/gutenprint"

/* */
#define PACKAGE_LOCALE_DIR "/usr/local/share/locale"

/* Define to the full name of this package. */
#define PACKAGE_NAME "gutenprint"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "gutenprint 5.3.4-2023-12-06T01-00-2ef8ba24"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "gutenprint"

/* Define to the home page for this package. */
#define PACKAGE_URL "https://gimp-print.sourceforge.net"

/* Define to the version of this package. */
#define PACKAGE_VERSION "5.3.4-2023-12-06T01-00-2ef8ba24"

/* */
#define PKGMODULEDIR "/usr/local/lib/gutenprint/5.3/modules"

/* */
#define PKGXMLDATADIR "/usr/local/share/gutenprint/5.3/xml"

/* Package release date. */
#define RELEASE_DATE "06 Dec 2023"

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Use libdl/dlopen as module loader */
#define USE_DLOPEN "1"

/* Use GNU libltdl as module loader */
/* #undef USE_LTDL */

/* Version number of package */
#define VERSION "5.3.4-2023-12-06T01-00-2ef8ba24"

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
/* #undef YYTEXT_POINTER */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

// pappl_pr_driver_t *guten_print_drivers;
// static funct()
// {

// }

int main(int argc, char *argv[])
{
   stp_init();
   // stp_printer_t * printer;

   const char *scheme;     /* URI scheme */
   int i;                  /* Looping var */
   const stp_printer_t *p; /* Pointer to printer driver */

   // below is the logic to print the models ...

   int verbose = 0;

   int count_of_printer = 0;
   count_of_printer = stp_printer_model_count();

   // pappl_pr_driver_t guten_print_drivers[count_of_printer];
   pappl_pr_driver_t *guten_print_drivers = (pappl_pr_driver_t *)malloc(count_of_printer * sizeof(pappl_pr_driver_t));
   int null_count = 0;
   for (i = 0; i < stp_printer_model_count(); i++)
   {
      p = stp_get_printer_by_index(i);
      if (p)
      {
         guten_print_drivers[i].name = stp_printer_get_driver(p);
         guten_print_drivers[i].description = stp_printer_get_long_name(p);
         guten_print_drivers[i].device_id = NULL;
         guten_print_drivers[i].extension = NULL;
      }
   }

   // driver call back khudse likhde...
   // so from the make and model we have created the driver object...
   // map the same in the

   char *model = "bjc-PIXUS-iP3100";

   const stp_printer_t *printer = stp_get_printer_by_driver(model);
   stp_vars_t *v;
   const stp_vars_t *printvars;
   printvars = stp_printer_get_defaults(printer);
   v = stp_vars_create_copy(printvars);

   stp_parameter_list_t paramlist;
   paramlist = stp_get_parameter_list(v);
   size_t param_count = stp_parameter_list_count(paramlist);

   // below code is for standard common options...

   stp_parameter_t desc;
   int num_opts = 0;
   const stp_param_string_t *opt;
   // stp_describe_parameter(v, "MediaType", &desc);
   // if (desc.p_type == STP_PARAMETER_TYPE_STRING_LIST && desc.is_active &&
   //     stp_string_list_count(desc.bounds.str) > 0)
   // {
   //    num_opts = stp_string_list_count(desc.bounds.str);
   //    // gpprintf(fp, "*%s.Translation MediaType/%s: \"\"\n", lang, _("Media Type"));

   //    for (i = 0; i < num_opts; i++)
   //    {
   //       opt = stp_string_list_param(desc.bounds.str, i);
   //       printf("Values Supported ---> %s\n", opt->name);
   //       //  gpprintf(fp, "*%s.MediaType %s/%s: \"\"\n", lang, opt->name, stp_i18n_lookup(po, opt->text));
   //    }
   // }

   // printf("the default vavlue --> %s\n", desc.deflt.str);
   // stp_parameter_description_destroy(&desc);

   // seeing all the options and  values in the current printer models..
   int l;
   for (l = 0; l < param_count; l++)
   {
      const stp_parameter_t *lparam =
          stp_parameter_list_param(paramlist, l);
      printf("the parameter name is ----> %s\n", lparam->name);
      stp_describe_parameter(v, lparam->name, &desc);

      if (desc.p_type == STP_PARAMETER_TYPE_STRING_LIST && desc.is_active &&
          stp_string_list_count(desc.bounds.str) > 0)
      {

               printf("the default value --> %s\n", desc.deflt.str);
         num_opts = stp_string_list_count(desc.bounds.str);


         for (i = 0; i < num_opts; i++)
         {
            opt = stp_string_list_param(desc.bounds.str, i);
            printf("Values Supported ---> %s\n", opt->name);
         }
      }
      else{
         printf("it's something different \n");
      }
      printf("%s\n", " ");
      stp_parameter_description_destroy(&desc);
   }
   
   //  papplMainloop(argc, argv, VERSION, "Copyright &copy Ankit Pal Singh",
   //      count_of_printer,
   //      guten_print_drivers, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
}

// creating the driver callback over here..

static bool
driver_cb(
   pappl_system_t *sytem,
   const char *driver_name,
   const char *device_uri,
   const char *device_id,
   pappl_pr_driver_data_t * data,
   ipp_t  ** attrs,
   void   *cbdata
)
{

   bool ret = false;
   int i;

   // iterate over all the supported models and create the driver data structure...
   // system will automaticallly poll the options from there...

   int count_of_printer = 0;
   count_of_printer = stp_printer_model_count();
   stp_printer_t *p;

   // pappl_pr_driver_t guten_print_drivers[count_of_printer];
   pappl_pr_driver_t *guten_print_drivers = (pappl_pr_driver_t *)malloc(count_of_printer * sizeof(pappl_pr_driver_t));
   int null_count = 0;
    for (i = 0; i < stp_printer_model_count(); i++)
    {
        p = stp_get_printer_by_index(i);
        if (p)
        {
         guten_print_drivers[i].name = stp_printer_get_driver(p);
         guten_print_drivers[i].description = stp_printer_get_long_name(p);
         guten_print_drivers[i].device_id = NULL;
         guten_print_drivers[i].extension = NULL;
        }
    }

   for(i=0;i < (int) (sizeof(guten_print_drivers)/ sizeof(guten_print_drivers[0])) ; i++)
   {
      if(!strcmp(driver_name, guten_print_drivers[i].name))
      {
         papplCopyString(data->make_and_model, guten_print_drivers[i].description, sizeof(data->make_and_model));
         break;
      }
   }

   // so from the make and model we have created the driver object...
   // map the same in the

   //   char *model = "bjc-PIXUS-iP3100/";
   //    const char * prefix = CUPS_MODELDIR;
   //    const char * language = NULL;
   //    int which_ppds = 2;
   //    int use_compression = 0;

      p = stp_get_printer_by_driver(driver_name);

      stp_vars_t * v;
      const stp_vars_t * printvars;
      printvars = stp_printer_get_defaults(p);
      v = stp_vars_create_copy(printvars);

               stp_parameter_list_t paramlist;
               paramlist = stp_get_parameter_list(v);
               size_t param_count = stp_parameter_list_count(paramlist);

      printf("the count of hte parameter list --> %ld\n" , param_count);

      for(int l = 0; l < param_count; l++)
{
   const stp_parameter_t *lparam = stp_parameter_list_param(paramlist, l);

   printf("the name of the option that i have is --> %s\n", lparam->name);
}

}

// // //$ gcc -c stpimage.c
// // //$ gcc -o stpimage -lgutenprint stpimage.o

// // // for compiling the binary file created ...

// // // gcc -o native_printer native_printer.o -lgutenprint -lcups -lz -lm -lgssapi_krb5 -lavahi-common -lavahi-client -lgnutls -lkrb5 -lk5crypto -lcom_err -lkrb5support -ldbus-1 -lp11-kit -lidn2  -ltasn1 -lnettle -lhogweed -lgmp  -lresolv -lsystemd -lffi   -llzma -lzstd
// // // gcc -c native_printer.c -o native_printer.o
// // // gcc -o native_printer native_printer.o -lgutenprint

// // //-lcups -lz -lm -lgssapi_krb5 -lavahi-common -lavahi-client -lgnutls -lkrb5 -lk5crypto -lcom_err -lkrb5support -ldbus-1 -lp11-kit -lidn2  -ltasn1 -lnettle -lhogweed -lgmp  -lresolv -lsystemd -lffi   -llzma -lzstd

//     // below is the logic to print the ppd stuff ... like using list ..

// //   printf("Ankti lenth --_> %d\n", stp_printer_model_count());
// //   for (i = 0; i < stp_printer_model_count(); i++)
// //     if ((printer = stp_get_printer_by_index(i)) != NULL)
// //     {
// //       const char *device_id;
// //       if (!strcmp(stp_printer_get_family(printer), "ps") ||
// // 	  !strcmp(stp_printer_get_family(printer), "raw"))
// //         continue;

// //       device_id = stp_printer_get_device_id(printer);
// //       printf("\"%s://%s/expert\" "
// //              "%s "
// // 	     "\"%s\" "
// //              "\"%s" CUPS_PPD_NICKNAME_STRING VERSION "\" "
// // 	     "\"%s\"\n",
// //              scheme, stp_printer_get_driver(printer),
// // 	     "en",
// // 	     stp_printer_get_manufacturer(printer),
// // 	     stp_printer_get_long_name(printer),
// // 	     device_id ? device_id : "");
// //     }