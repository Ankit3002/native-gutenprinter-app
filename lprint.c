// #include <gutenprint/gutenprint.h>
// #include <gutenprint/util.h>
#include <cups/raster.h>
#include <cups/ipp.h>
#include <cups/http.h>
#include <cups/array.h>
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
#include <sys/times.h>
#include "i18n.h"
#include <ppd/ppd.h>

/* Solaris with gcc has problems because gcc's limits.h doesn't #define */
/* this */
#ifndef CHAR_BIT
#define CHAR_BIT 8
#endif


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

static bool driver_cb(pappl_system_t *sytem, const char *driver_name,
                      const char *device_uri, const char *device_id,
                      pappl_pr_driver_data_t *data, ipp_t **attrs, void *cbdata);





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

   return  papplMainloop(argc, argv, VERSION, "Copyright &copy Ankit Pal Singh",
        count_of_printer,
        guten_print_drivers, NULL, driver_cb, NULL, NULL, NULL, NULL, NULL);
}

// creating the driver callback over here..

const char *special_options[] =
{
  "PageSize",
  "MediaType",
  "InputSlot",
  "Resolution",
  "OutputOrder",
  "Quality",
  "Duplex",
  NULL
};



static int				/* O - 1 if non-grouped, 0 otherwise */
is_special_option(const char *name)	/* I - Option name */
{
  int i = 0;
  while (special_options[i])
    {
      if (strcmp(name, special_options[i]) == 0)
	return 1;
      i++;
    }
  return 0;
}


static const char * const pcl_hp_laserjet_media[] =
{       // Supported media sizes for HP Laserjet printers
  "na_ledger_11x17in",
  "na_legal_8.5x14in",
  "na_letter_8.5x11in",
  "na_executive_7x10in",
  "iso_a3_297x420mm",
  "iso_a4_210x297mm",
  "iso_a5_148x210mm",
  "jis_b5_182x257mm",
  "iso_b5_176x250mm",
  "na_number-10_4.125x9.5in",
  "iso_c5_162x229mm",
  "iso_dl_110x220mm",
  "na_monarch_3.875x7.5in"
};

#define CUPS_HEADER_T cups_page_header2_t
static int suppress_verbose_messages = 0;
static int print_messages_as_errors = 0;
static int suppress_messages = 0;
static const char *Image_get_appname(stp_image_t *image);
static volatile stp_image_status_t Image_status = STP_IMAGE_STATUS_OK;
static const stp_string_list_t *po = NULL;
static double total_bytes_printed = 0;



/*
 * 'Image_get_appname()' - Get the application we are running.
 */

static const char *				/* O - Application name */
Image_get_appname(stp_image_t *image)		/* I - Image */
{
  (void)image;

  return ("CUPS driver based on Gutenprint");
}

typedef struct
{
  cups_raster_t		*ras;		/* Raster stream to read from */
  int			page;		/* Current page number */
  int			row;		/* Current row number */
  int			left;
  int			right;
  int			bottom;
  int			top;
  int			width;
  int			height;
  int			left_trim;
  int			right_trim;
  int			top_trim;
  int			bottom_trim;
  int			adjusted_width;
  int			adjusted_height;
  stp_dimension_t	d_left;
  stp_dimension_t	d_right;
  stp_dimension_t	d_bottom;
  stp_dimension_t	d_top;
  stp_dimension_t	d_width;
  stp_dimension_t	d_height;
  stp_dimension_t	d_left_trim;
  stp_dimension_t	d_right_trim;
  stp_dimension_t	d_bottom_trim;
  stp_dimension_t	d_top_trim;
  int			last_percent;
  int			shrink_to_fit;
  CUPS_HEADER_T		header;		/* Page header from file */
} cups_image_t;


/*
 * 'Image_get_row()' - Get one row of the image.
 */

static void
throwaway_data(int amount, cups_image_t *cups)
{
  unsigned char trash[4096];	/* Throwaway */
  int block_count = amount / 4096;
  int leftover = amount % 4096;
  while (block_count > 0)
    {
      cupsRasterReadPixels(cups->ras, trash, 4096);
      block_count--;
    }
  if (leftover)
    cupsRasterReadPixels(cups->ras, trash, leftover);
}

static stp_vars_t *
initialize_page(cups_image_t *cups, const stp_vars_t *default_settings,
		const char *page_size_name)
{
  stp_dimension_t tmp_left, tmp_right, tmp_top, tmp_bottom;
  stp_vars_t *v = stp_vars_create_copy(default_settings);

  if (! suppress_messages)
    fprintf(stderr, "DEBUG: Gutenprint: Initialize page\n");

  if (cups->header.cupsBitsPerColor == 16)
    set_string_parameter(v, "ChannelBitDepth", "16");
  else
    set_string_parameter(v, "ChannelBitDepth", "8");
  switch (cups->header.cupsColorSpace)
    {
    case CUPS_CSPACE_W :
      /* DyeSub photo printers don't support black & white ink! */
      if (printer_supports_bw(v))
	set_string_parameter(v, "PrintingMode", "BW");
      set_string_parameter(v, "InputImageType", "Whitescale");
      break;
    case CUPS_CSPACE_K :
      /* DyeSub photo printers don't support black & white ink! */
      if (printer_supports_bw(v))
	set_string_parameter(v, "PrintingMode", "BW");
      set_string_parameter(v, "InputImageType", "Grayscale");
      break;
    case CUPS_CSPACE_RGB :
      set_string_parameter(v, "PrintingMode", "Color");
      set_string_parameter(v, "InputImageType", "RGB");
      break;
    case CUPS_CSPACE_CMY :
      set_string_parameter(v, "PrintingMode", "Color");
      set_string_parameter(v, "InputImageType", "CMY");
      break;
    case CUPS_CSPACE_CMYK :
      set_string_parameter(v, "PrintingMode", "Color");
      set_string_parameter(v, "InputImageType", "CMYK");
      break;
    case CUPS_CSPACE_KCMY :
      set_string_parameter(v, "PrintingMode", "Color");
      set_string_parameter(v, "InputImageType", "KCMY");
      break;
    default :
      stp_i18n_printf(po, _("ERROR: Gutenprint detected a bad colorspace "
                            "(%d)!\n"), cups->header.cupsColorSpace);
      break;
    }

  set_special_parameter(v, "Resolution", cups->header.cupsCompression - 1);

  set_special_parameter(v, "Quality", cups->header.cupsRowFeed - 1);

  if (strlen(cups->header.MediaClass) > 0)
    set_string_parameter(v, "InputSlot", cups->header.MediaClass);

  if (strlen(cups->header.MediaType) > 0)
    set_string_parameter(v, "MediaType", cups->header.MediaType);

  if (! suppress_messages)
    fprintf(stderr, "DEBUG: Gutenprint:   PageSize = %dx%d\n", cups->header.PageSize[0],
	    cups->header.PageSize[1]);

  if (page_size_name)
    {
      if (strcmp(page_size_name, "Custom") == 0)
      {
        if (!suppress_messages)
          fprintf(stderr, "DEBUG: Gutenprint:   Using custom page size for (%d, %d)\n",
            cups->header.PageSize[1], cups->header.PageSize[0]);
        stp_set_page_width(v, cups->header.PageSize[0]);
        stp_set_page_height(v, cups->header.PageSize[1]);
      }
      else if (stp_describe_papersize(v, page_size_name))
      {
        stp_dimension_t width, height;
        if (!suppress_messages)
          fprintf(stderr, "DEBUG: Gutenprint:   Using page size %s with (%d, %d)\n",
            page_size_name, cups->header.PageSize[1], cups->header.PageSize[0]);
        set_string_parameter(v, "PageSize", page_size_name);
        stp_get_media_size(v, &width, &height);

        // printf("the value of page size name --> %s, width --> %s, height --> %s\n", page_size_name, width, height);



        if (width > 0)
          stp_set_page_width(v, width);
        else
          stp_set_page_width(v, cups->header.PageSize[0]);
        if (height > 0)
          stp_set_page_height(v, height);
        else
          stp_set_page_height(v, cups->header.PageSize[1]);
      }
      else
	{
	  if (!suppress_messages)
	    fprintf(stderr, "DEBUG: Gutenprint:   Can't find page size %s with (%d, %d), using custom page size\n",
		    page_size_name, cups->header.PageSize[1], cups->header.PageSize[0]);
	  stp_set_page_width(v, cups->header.PageSize[0]);
	  stp_set_page_height(v, cups->header.PageSize[1]);
	}
    }
  else
    {
      if (! suppress_messages)
	fprintf(stderr, "DEBUG: Gutenprint:   No named media size for (%d, %d)\n",
		cups->header.PageSize[1], cups->header.PageSize[0]);
      stp_set_page_width(v, cups->header.PageSize[0]);
      stp_set_page_height(v, cups->header.PageSize[1]);
    }

 /*
  * Duplex
  * Note that the names MUST match those in the printer driver(s)
  */

  if (cups->header.Duplex != 0)
    {
      if (cups->header.Tumble != 0)
        set_string_parameter(v, "Duplex", "DuplexTumble");
      else
        set_string_parameter(v, "Duplex", "DuplexNoTumble");
    }

  cups->shrink_to_fit =
    (stp_check_int_parameter(v, "CUPSShrinkPage", STP_PARAMETER_ACTIVE) ?
     stp_get_int_parameter(v, "CUPSShrinkPage") : 0);

  set_string_parameter(v, "JobMode", "Job");
  validate_options(v, cups);
  stp_get_media_size(v, &(cups->d_width), &(cups->d_height));
  stp_get_maximum_imageable_area(v, &tmp_left, &tmp_right,
				 &tmp_bottom, &tmp_top);
  stp_get_imageable_area(v, &(cups->d_left), &(cups->d_right),
			 &(cups->d_bottom), &(cups->d_top));
  if (! suppress_messages)
    {
      fprintf(stderr, "DEBUG: Gutenprint:   limits w %.3f l %.3f r %.3f  h %.3f t %.3f b %.3f\n",
	      cups->d_width, cups->d_left, cups->d_right, cups->d_height, cups->d_top, cups->d_bottom);
      fprintf(stderr, "DEBUG: Gutenprint:   max limits l %.3f r %.3f t %.3f b %.3f\n",
	      tmp_left, tmp_right, tmp_top, tmp_bottom);
    }

  if (tmp_left < 0)
    tmp_left = 0;
  if (tmp_top < 0)
    tmp_top = 0;
  if (tmp_right > tmp_left + cups->d_width)
    tmp_right = cups->d_width;
  if (tmp_bottom > tmp_top + cups->d_height)
    tmp_bottom = cups->d_height;
  if (tmp_left < cups->d_left)
    {
      if (cups->shrink_to_fit != 1)
	{
	  cups->d_left_trim = cups->d_left - tmp_left;
	  tmp_left = cups->d_left;
	}
      else
	cups->d_left_trim = 0;
      if (! suppress_messages)
	fprintf(stderr, "DEBUG: Gutenprint:   left margin %.3f\n", cups->d_left_trim);
    }
  else
    {
      cups->d_left_trim = 0;
      if (! suppress_messages)
	fprintf(stderr, "DEBUG: Gutenprint:   Adjusting left margin from %.3f to %.3f\n",
		cups->d_left, tmp_left);
      cups->d_left = tmp_left;
    }
  if (tmp_right > cups->d_right)
    {
      if (cups->shrink_to_fit != 1)
	{
	  cups->d_right_trim = tmp_right - cups->d_right;
	  tmp_right = cups->d_right;
	}
      else
	cups->d_right_trim = 0;
      if (! suppress_messages)
	fprintf(stderr, "DEBUG: Gutenprint:   right margin %.3f\n", cups->d_right_trim);
    }
  else
    {
      cups->d_right_trim = 0;
      if (! suppress_messages)
	fprintf(stderr, "DEBUG: Gutenprint:   Adjusting right margin from %.3f to %.3f\n",
		cups->d_right, tmp_right);
      cups->d_right = tmp_right;
    }
  if (tmp_top < cups->d_top)
    {
      if (cups->shrink_to_fit != 1)
	{
	  cups->d_top_trim = cups->d_top - tmp_top;
	  tmp_top = cups->d_top;
	}
      else
	cups->d_top_trim = 0;
      if (! suppress_messages)
	fprintf(stderr, "DEBUG: Gutenprint:   top margin %.3f\n", cups->d_top_trim);
    }
  else
    {
      cups->d_top_trim = 0;
      if (! suppress_messages)
	fprintf(stderr, "DEBUG: Gutenprint:   Adjusting top margin from %.3f to %.3f\n",
		cups->d_top, tmp_top);
      cups->d_top = tmp_top;
    }
  if (tmp_bottom > cups->d_bottom)
    {
      if (cups->shrink_to_fit != 1)
	{
	  cups->d_bottom_trim = tmp_bottom - cups->d_bottom;
	  tmp_bottom = cups->d_bottom;
	}
      else
	cups->d_bottom_trim = 0;
      if (! suppress_messages)
	fprintf(stderr, "DEBUG: Gutenprint:   bottom margin %.3f\n", cups->d_bottom_trim);
    }
  else
    {
      cups->d_bottom_trim = 0;
      if (! suppress_messages)
	fprintf(stderr, "DEBUG: Gutenprint:   Adjusting bottom margin from %.3f to %.3f\n",
		cups->d_bottom, tmp_bottom);
      cups->d_bottom = tmp_bottom;
    }

  if (cups->shrink_to_fit == 2)
    {
      stp_dimension_t t_left, t_right, t_bottom, t_top;
      stp_get_imageable_area(v, &(t_left), &(t_right), &(t_bottom), &(t_top));
      stp_set_width(v, t_right - t_left);
      stp_set_height(v, t_bottom - t_top);
      stp_set_left(v, t_left);
      stp_set_top(v, t_top);
    }
  else
    {
      stp_set_width(v, cups->d_right - cups->d_left);
      stp_set_height(v, cups->d_bottom - cups->d_top);
      stp_set_left(v, cups->d_left);
      stp_set_top(v, cups->d_top);
    }

  cups->d_right = cups->d_width - cups->d_right;
  if (cups->shrink_to_fit == 1)
    cups->d_width = tmp_right - tmp_left;
  else
    cups->d_width = cups->d_width - cups->d_left - cups->d_right;
  cups->width = cups->header.HWResolution[0] * cups->d_width / 72;
  cups->left = cups->header.HWResolution[0] * cups->d_left / 72;
  cups->right = cups->header.HWResolution[0] * cups->d_right / 72;
  cups->left_trim = cups->header.HWResolution[0] * cups->d_left_trim / 72;
  cups->right_trim = cups->header.HWResolution[0] * cups->d_right_trim / 72;
  cups->adjusted_width = cups->width;
  if (cups->adjusted_width > cups->header.cupsWidth)
    cups->adjusted_width = cups->header.cupsWidth;

  cups->d_bottom = cups->d_height - cups->d_bottom;
  if (cups->shrink_to_fit == 1)
    cups->d_height = tmp_bottom - tmp_top;
  else
    cups->d_height = cups->d_height - cups->d_top - cups->d_bottom;
  cups->height = cups->header.HWResolution[1] * cups->d_height / 72;
  cups->top = cups->header.HWResolution[1] * cups->d_top / 72;
  cups->bottom = cups->header.HWResolution[1] * cups->d_bottom / 72;
  cups->top_trim = cups->header.HWResolution[1] * cups->d_top_trim / 72;
  cups->bottom_trim = cups->header.HWResolution[1] * cups->d_bottom_trim / 72;
  cups->adjusted_height = cups->height;
  if (cups->adjusted_height > cups->header.cupsHeight)
    cups->adjusted_height = cups->header.cupsHeight;
  if (! suppress_messages)
    {
      fprintf(stderr, "DEBUG: Gutenprint:   CUPS settings w %d l %d r %d  h %d t %d b %d\n",
	      cups->width, cups->left, cups->right,
	      cups->height, cups->top, cups->bottom);
      fprintf(stderr, "DEBUG: Gutenprint:        adjusted w %d h %d\n",
	      cups->adjusted_width, cups->adjusted_height);

    }

  if (! suppress_messages)
    fprintf(stderr, "DEBUG: Gutenprint: End initialize page\n");
  return v;
}

void
set_string_parameter(stp_vars_t *v, const char *name, const char *val)
{
  if (! suppress_messages)
    fprintf(stderr, "DEBUG: Gutenprint:   Set special string %s to %s\n", name, val);
  stp_set_string_parameter(v, name, val);
}

static int count = 0;
static stp_image_status_t
Image_get_row(stp_image_t   *image,	/* I - Image */
	      unsigned char *data,	/* O - Row */
	      size_t	    byte_limit,	/* I - how many bytes in data */
	      int           row)	/* I - Row number (unused) */
{

  cups_image_t	*cups;			/* CUPS image */
  int		i;			/* Looping var */
  int 		bytes_per_line;
  int		margin;
  stp_image_status_t tmp_image_status = Image_status;
  unsigned char *orig = data;           /* Temporary pointer */
  static int warned = 0;                /* Error warning printed? */
  int new_percent;
  int left_margin, right_margin;

  if ((cups = (cups_image_t *)(image->rep)) == NULL)
    {
      stp_i18n_printf(po, _("ERROR: Gutenprint image is not initialized!  "
                            "Please report this bug to "
			    "gimp-print-devel@lists.sourceforge.net\n"));
      return STP_IMAGE_STATUS_ABORT;
    }
  bytes_per_line =
    ((cups->adjusted_width * cups->header.cupsBitsPerPixel) + CHAR_BIT - 1) /
    CHAR_BIT;

  left_margin = ((cups->left_trim * cups->header.cupsBitsPerPixel) + CHAR_BIT - 1) /
    CHAR_BIT;
  right_margin = ((cups->right_trim * cups->header.cupsBitsPerPixel) + CHAR_BIT - 1) /
    CHAR_BIT;
  margin = cups->header.cupsBytesPerLine - left_margin - bytes_per_line -
    right_margin;

  if (cups->row < cups->header.cupsHeight)
  {
    if (! suppress_messages && ! suppress_verbose_messages)
      fprintf(stderr, "DEBUG2: Gutenprint: Reading %d %d\n",
	      bytes_per_line, cups->row);
    while (cups->row <= row && cups->row < cups->header.cupsHeight)
      {
	if (left_margin > 0)
	  {
	    if (! suppress_messages && ! suppress_verbose_messages)
	      fprintf(stderr, "DEBUG2: Gutenprint: Tossing left %d (%d)\n",
		      left_margin, cups->left_trim);
	    throwaway_data(left_margin, cups);
	  }
	cupsRasterReadPixels(cups->ras, data, bytes_per_line);
	cups->row ++;
	if (margin + right_margin > 0)
	  {
	    if (! suppress_messages && ! suppress_verbose_messages)
	      fprintf(stderr, "DEBUG2: Gutenprint: Tossing right %d (%d) + %d\n",
		      right_margin, cups->right_trim, margin);
	    throwaway_data(margin + right_margin, cups);
	  }
      }
  }
  else
    {
      switch (cups->header.cupsColorSpace)
	{
	case CUPS_CSPACE_K:
	case CUPS_CSPACE_CMYK:
	case CUPS_CSPACE_KCMY:
	case CUPS_CSPACE_CMY:
	  memset(data, 0, bytes_per_line);
	  break;
	case CUPS_CSPACE_RGB:
	case CUPS_CSPACE_W:
	  memset(data, ((1 << CHAR_BIT) - 1), bytes_per_line);
	  break;
	default:
	  stp_i18n_printf(po, _("ERROR: Gutenprint detected a bad colorspace "
	                        "(%d)!\n"), cups->header.cupsColorSpace);
	  return STP_IMAGE_STATUS_ABORT;
	}
    }

  /*
   * This exists to print non-ADSC input which has messed up the job
   * input, such as that generated by psnup.  The output is barely
   * legible, but it's better than the garbage output otherwise.
   */
  data = orig;
  if (cups->header.cupsBitsPerPixel == 1)
    {
      if (warned == 0)
	{
	  fputs(_("WARNING: Gutenprint detected a bad color depth (1).  "
		  "Output quality is degraded.  Are you using psnup or "
		  "non-ADSC PostScript?\n"), stderr);
	  warned = 1;
	}
      for (i = cups->adjusted_width - 1; i >= 0; i--)
	{
	  if ( (data[i/8] >> (7 - i%8)) &0x1)
	    data[i]=255;
	  else
	    data[i]=0;
	}
    }

  new_percent = (int) (100.0 * cups->row / cups->header.cupsHeight);
  if (new_percent > cups->last_percent)
    {
      if (! suppress_verbose_messages)
	{
	  stp_i18n_printf(po, _("INFO: Printing page %d, %d%%\n"),
			  cups->page + 1, new_percent);
	  fprintf(stderr, "ATTR: job-media-progress=%d\n", new_percent);
	}
      cups->last_percent = new_percent;
    }

  if (tmp_image_status != STP_IMAGE_STATUS_OK)
    {
      if (! suppress_messages)
	fprintf(stderr, "DEBUG: Gutenprint: Image status %d\n", tmp_image_status);
    }
  return tmp_image_status;
}


/*
 * 'Image_height()' - Return the height of an image.
 */

static int				/* O - Height in pixels */
Image_height(stp_image_t *image)	/* I - Image */
{
  cups_image_t	*cups;		/* CUPS image */


  if ((cups = (cups_image_t *)(image->rep)) == NULL)
    return (0);

  if (! suppress_messages)
    fprintf(stderr, "DEBUG: Gutenprint: Image_height %d\n", cups->adjusted_height);
  return (cups->adjusted_height);
}


/*
 * 'Image_init()' - Initialize an image.
 */

static void
Image_init(stp_image_t *image)		/* I - Image */
{
  cups_image_t	*cups;		/* CUPS image */

  if ((cups = (cups_image_t *)(image->rep)) == NULL)
    return;
  cups->last_percent = 0;

  if (! suppress_messages)
    stp_i18n_printf(po, _("INFO: Starting page %d...\n"), cups->page + 1);
  /* cups->page + 1 because users expect 1-based counting */
}

/*
 * 'Image_progress_conclude()' - Close the progress display.
 */

static void
Image_conclude(stp_image_t *image)	/* I - Image */
{
  cups_image_t	*cups;		/* CUPS image */


  if ((cups = (cups_image_t *)(image->rep)) == NULL)
    return;

  if (! suppress_messages)
    stp_i18n_printf(po, _("INFO: Finished page %d...\n"), cups->page + 1);
}

/*
 * 'Image_width()' - Return the width of an image.
 */

static int				/* O - Width in pixels */
Image_width(stp_image_t *image)	/* I - Image */
{
  cups_image_t	*cups;		/* CUPS image */


  if ((cups = (cups_image_t *)(image->rep)) == NULL)
    return (0);

  if (! suppress_messages)
    fprintf(stderr, "DEBUG: Gutenprint: Image_width %d\n", cups->adjusted_width);
  return (cups->adjusted_width);
}



/*
 * 'cups_writefunc()' - Write data to a file...
 */

static void
cups_writefunc(void *file, const char *buf, size_t bytes)
{
  FILE *prn = (FILE *)file;
  total_bytes_printed += bytes;
  fwrite(buf, 1, bytes, prn);
}

static void
cups_errfunc(void *file, const char *buf, size_t bytes)
{
  size_t next_nl = 0;
  size_t where = 0;
  FILE *prn = (FILE *)file;
  while (where < bytes)
    {
      if (bytes - where > 6 && strncmp(buf, "ERROR:", 6) == 0)
	{
	  fputs("ERROR: Gutenprint:", prn);
	  buf += 6;
	}
      else if (print_messages_as_errors)
	fputs("ERROR: Gutenprint: ", prn);
      else if (strncmp(buf, "DEBUG", 5) != 0)
	fputs("DEBUG: Gutenprint: ", prn);
      while (next_nl < bytes)
	{
	  if (buf[next_nl++] == '\n')
	    break;
	}
      fwrite(buf + where, 1, next_nl - where, prn);
      where = next_nl;
    }
}

static void
cups_dbgfunc(void *file, const char *buf, size_t bytes)
{
  size_t next_nl = 0;
  size_t where = 0;
  FILE *prn = (FILE *)file;
  while (where < bytes)
    {
      if (bytes - where > 6 && strncmp(buf, "ERROR:", 6) == 0)
	{
	  fputs("ERROR: Gutenprint:", prn);
	  buf += 6;
	}
      else if (strncmp(buf, "DEBUG", 5) != 0)
	fputs("DEBUG: Gutenprint: ", prn);
      while (next_nl < bytes)
	{
	  if (buf[next_nl++] == '\n')
	    break;
	}
      fwrite(buf + where, 1, next_nl - where, prn);
      where = next_nl;
    }
}




static stp_image_t theImage =
{
  Image_init,
  NULL,				/* reset */
  Image_width,
  Image_height,
  Image_get_row,
  Image_get_appname,
  Image_conclude,
  NULL
};


void
print_debug_block(const stp_vars_t *v, const cups_image_t *cups)
{
  fprintf(stderr, "DEBUG: Gutenprint: Page data:\n");
  fprintf(stderr, "DEBUG: Gutenprint:   MediaClass = \"%s\"\n", cups->header.MediaClass);
  fprintf(stderr, "DEBUG: Gutenprint:   MediaColor = \"%s\"\n", cups->header.MediaColor);
  fprintf(stderr, "DEBUG: Gutenprint:   MediaType = \"%s\"\n", cups->header.MediaType);
  fprintf(stderr, "DEBUG: Gutenprint:   OutputType = \"%s\"\n", cups->header.OutputType);

  fprintf(stderr, "DEBUG: Gutenprint:   AdvanceDistance = %d\n", cups->header.AdvanceDistance);
  fprintf(stderr, "DEBUG: Gutenprint:   AdvanceMedia = %d\n", cups->header.AdvanceMedia);
  fprintf(stderr, "DEBUG: Gutenprint:   Collate = %d\n", cups->header.Collate);
  fprintf(stderr, "DEBUG: Gutenprint:   CutMedia = %d\n", cups->header.CutMedia);
  fprintf(stderr, "DEBUG: Gutenprint:   Duplex = %d\n", cups->header.Duplex);
  fprintf(stderr, "DEBUG: Gutenprint:   HWResolution = [ %d %d ]\n", cups->header.HWResolution[0],
	  cups->header.HWResolution[1]);
  fprintf(stderr, "DEBUG: Gutenprint:   ImagingBoundingBox = [ %d %d %d %d ]\n",
	  cups->header.ImagingBoundingBox[0], cups->header.ImagingBoundingBox[1],
	  cups->header.ImagingBoundingBox[2], cups->header.ImagingBoundingBox[3]);
  fprintf(stderr, "DEBUG: Gutenprint:   InsertSheet = %d\n", cups->header.InsertSheet);
  fprintf(stderr, "DEBUG: Gutenprint:   Jog = %d\n", cups->header.Jog);
  fprintf(stderr, "DEBUG: Gutenprint:   LeadingEdge = %d\n", cups->header.LeadingEdge);
  fprintf(stderr, "DEBUG: Gutenprint:   Margins = [ %d %d ]\n", cups->header.Margins[0],
	  cups->header.Margins[1]);
  fprintf(stderr, "DEBUG: Gutenprint:   ManualFeed = %d\n", cups->header.ManualFeed);
  fprintf(stderr, "DEBUG: Gutenprint:   MediaPosition = %d\n", cups->header.MediaPosition);
  fprintf(stderr, "DEBUG: Gutenprint:   MediaWeight = %d\n", cups->header.MediaWeight);
  fprintf(stderr, "DEBUG: Gutenprint:   MirrorPrint = %d\n", cups->header.MirrorPrint);
  fprintf(stderr, "DEBUG: Gutenprint:   NegativePrint = %d\n", cups->header.NegativePrint);
  fprintf(stderr, "DEBUG: Gutenprint:   NumCopies = %d\n", cups->header.NumCopies);
  fprintf(stderr, "DEBUG: Gutenprint:   Orientation = %d\n", cups->header.Orientation);
  fprintf(stderr, "DEBUG: Gutenprint:   OutputFaceUp = %d\n", cups->header.OutputFaceUp);
  fprintf(stderr, "DEBUG: Gutenprint:   PageSize = [ %d %d ]\n", cups->header.PageSize[0],
	  cups->header.PageSize[1]);
  fprintf(stderr, "DEBUG: Gutenprint:   Separations = %d\n", cups->header.Separations);
  fprintf(stderr, "DEBUG: Gutenprint:   TraySwitch = %d\n", cups->header.TraySwitch);
  fprintf(stderr, "DEBUG: Gutenprint:   Tumble = %d\n", cups->header.Tumble);
  fprintf(stderr, "DEBUG: Gutenprint:   cupsWidth = %d\n", cups->header.cupsWidth);
  fprintf(stderr, "DEBUG: Gutenprint:   cupsHeight = %d\n", cups->header.cupsHeight);
  fprintf(stderr, "DEBUG: Gutenprint:   cups->width = %d\n", cups->width);
  fprintf(stderr, "DEBUG: Gutenprint:   cups->height = %d\n", cups->height);
  fprintf(stderr, "DEBUG: Gutenprint:   cups->adjusted_width = %d\n", cups->adjusted_width);
  fprintf(stderr, "DEBUG: Gutenprint:   cups->adjusted_height = %d\n", cups->adjusted_height);
  fprintf(stderr, "DEBUG: Gutenprint:   cupsMediaType = %d\n", cups->header.cupsMediaType);
  fprintf(stderr, "DEBUG: Gutenprint:   cupsBitsPerColor = %d\n", cups->header.cupsBitsPerColor);
  fprintf(stderr, "DEBUG: Gutenprint:   cupsBitsPerPixel = %d\n", cups->header.cupsBitsPerPixel);
  fprintf(stderr, "DEBUG: Gutenprint:   cupsBytesPerLine = %d\n", cups->header.cupsBytesPerLine);
  fprintf(stderr, "DEBUG: Gutenprint:   cupsColorOrder = %d\n", cups->header.cupsColorOrder);
  fprintf(stderr, "DEBUG: Gutenprint:   cupsColorSpace = %d\n", cups->header.cupsColorSpace);
  fprintf(stderr, "DEBUG: Gutenprint:   cupsCompression = %d\n", cups->header.cupsCompression);
  fprintf(stderr, "DEBUG: Gutenprint:   cupsRowCount = %d\n", cups->header.cupsRowCount);
  fprintf(stderr, "DEBUG: Gutenprint:   cupsRowFeed = %d\n", cups->header.cupsRowFeed);
  fprintf(stderr, "DEBUG: Gutenprint:   cupsRowStep = %d\n", cups->header.cupsRowStep);
  fprintf(stderr, "DEBUG: Gutenprint:   shrink page to fit %d\n", cups->shrink_to_fit);
  stp_vars_print_error(v, "DEBUG");
  fprintf(stderr, "DEBUG: Gutenprint: End page data\n");
}

static inline void *
cast_safe(const void *ptr)
{
  return (void *)ptr;
}

 void
validate_options(stp_vars_t *v, cups_image_t *cups)
{
  stp_parameter_list_t params = stp_get_parameter_list(v);
  int nparams = stp_parameter_list_count(params);
  int i;
  if (! suppress_messages)
    fprintf(stderr, "DEBUG: Gutenprint:   Validating options\n");
  for (i = 0; i < nparams; i++)
    {
      const stp_parameter_t *param = stp_parameter_list_param(params, i);
      stp_parameter_t desc;
      stp_describe_parameter(v, param->name, &desc);
      if (desc.p_type == STP_PARAMETER_TYPE_STRING_LIST)
	{
	  if (!stp_string_list_is_present
	      (desc.bounds.str, stp_get_string_parameter(v, desc.name)))
	    {
	      if (! suppress_messages)
		{
		  const char *val = stp_get_string_parameter(v, desc.name);
		  fprintf(stderr, "DEBUG: Gutenprint:     Clearing string %s (%s)\n",
			  desc.name, val ? val : "(null)");
		}
	      stp_clear_string_parameter(v, desc.name);
	      if (!desc.read_only && desc.is_mandatory && desc.is_active)
		{
		  if (! suppress_messages)
		    fprintf(stderr, "DEBUG: Gutenprint:     Setting default string %s to %s\n",
			    desc.name, desc.deflt.str ? desc.deflt.str : "(null)");
		  stp_set_string_parameter(v, desc.name, desc.deflt.str);
		    if (strcmp(desc.name, "PageSize") == 0)
		    {
		      const stp_papersize_t *ps = stp_describe_papersize(v, desc.deflt.str);
		      if (ps->width > 0)
          {
            if (! suppress_messages)
              fprintf(stderr, "DEBUG: Gutenprint:     Setting page width to %.3f\n",
                ps->width);
            if (ps->width < stp_get_page_width(v))
              stp_set_page_width(v, ps->width);
          }
          if (ps->height > 0)
          {
            if (! suppress_messages)
              fprintf(stderr, "DEBUG: Gutenprint:     Setting page height to %.3f\n",
                ps->height);
            if (ps->height < stp_get_page_height(v))
              stp_set_page_height(v, ps->height);
          }
		    }
		}
	    }
	}
      stp_parameter_description_destroy(&desc);
    }
  if (! suppress_messages)
    fprintf(stderr, "DEBUG: Gutenprint:   Done validating options\n");
  stp_parameter_list_destroy(params);
}

 void
set_special_parameter(stp_vars_t *v, const char *name, int choice)
{
  stp_parameter_t desc;
  stp_describe_parameter(v, name, &desc);
  if (desc.p_type == STP_PARAMETER_TYPE_STRING_LIST)
    {
#if 0
      if (stp_check_string_parameter(v, name, STP_PARAMETER_ACTIVE))
	{
	  if (! suppress_messages)
	    fprintf(stderr, "DEBUG: Gutenprint:   Not overriding special parameter %s (%s)\n",
		    name, stp_get_string_parameter(v, name));
	}
      else
#endif
	if (choice < 0)
	{
	  stp_clear_string_parameter(v, name);
	  if (! suppress_messages)
	    fprintf(stderr, "DEBUG: Gutenprint:   Clear special parameter %s\n",
		    name);
	}
      else if (choice >= stp_string_list_count(desc.bounds.str))
	{
	  if (! suppress_messages)
	    stp_i18n_printf(po, _("ERROR: Unable to set Gutenprint option %s "
	                          "(%d > %d)!\n"), name, choice,
				  stp_string_list_count(desc.bounds.str));
	}
      else
	{
	  stp_set_string_parameter
	    (v, name, stp_string_list_param(desc.bounds.str, choice)->name);
	  if (! suppress_messages)
	    fprintf(stderr, "DEBUG: Gutenprint:   Set special parameter %s to choice %d (%s)\n",
		    name, choice,
		    stp_string_list_param(desc.bounds.str, choice)->name);
	}
    }
  else
    {
      if (! suppress_messages)
	fprintf(stderr, "DEBUG: Gutenprint:   Unable to set special %s: not a string\n",
		name);
    }
  stp_parameter_description_destroy(&desc);
}

int
printer_supports_bw(const stp_vars_t *v)
{
  stp_parameter_t desc;
  int status = 0;
  stp_describe_parameter(v, "PrintingMode", &desc);
  if (stp_string_list_is_present(desc.bounds.str, "BW"))
    status = 1;
  stp_parameter_description_destroy(&desc);
  return status;
}

static void
set_all_options(stp_vars_t *v, cups_option_t *options, int num_options,
		ppd_file_t *ppd)
{
  stp_parameter_list_t params = stp_get_parameter_list(v);
  int nparams = stp_parameter_list_count(params);
  int i;
  const char *val;		/* CUPS option value */
  ppd_option_t *ppd_option;
  if (! suppress_messages)
    fprintf(stderr, "DEBUG: Gutenprint: Set options:\n");
  val = cupsGetOption("StpiShrinkOutput", num_options, options);
  if (!val)
    {
      ppd_option = ppdFindOption(ppd, "StpiShrinkOutput");
      if (ppd_option)
	val = ppd_option->defchoice;
    }
  if (val)
    {
      if (!strcasecmp(val, "crop"))
	stp_set_int_parameter(v, "CUPSShrinkPage", 0);
      else if (!strcasecmp(val, "expand"))
	stp_set_int_parameter(v, "CUPSShrinkPage", 2);
      else
	stp_set_int_parameter(v, "CUPSShrinkPage", 1);
    }
  else
    stp_set_int_parameter(v, "CUPSShrinkPage", 1);
  for (i = 0; i < nparams; i++)
    {
      const stp_parameter_t *param = stp_parameter_list_param(params, i);
      stp_parameter_t desc;
      char *ppd_option_name = stp_malloc(strlen(param->name) + 8);	/* StpFineFOO\0 */

      stp_describe_parameter(v, param->name, &desc);
      if (desc.p_type == STP_PARAMETER_TYPE_DOUBLE)
	{
	  sprintf(ppd_option_name, "Stp%s", desc.name);
	  val = cupsGetOption(ppd_option_name, num_options, options);
	  if (!val)
	    {
	      ppd_option = ppdFindOption(ppd, ppd_option_name);
	      if (ppd_option)
		val = ppd_option->defchoice;
	    }
	  if (val && !strncasecmp(val, "Custom.", 7))
	    {
	      double dval = atof(val + 7);

	      if (! suppress_messages)
		fprintf(stderr, "DEBUG: Gutenprint:   Set float %s to %f\n",
			desc.name, dval);
	      if (dval > desc.bounds.dbl.upper)
		dval = desc.bounds.dbl.upper;
	      stp_set_float_parameter(v, desc.name, dval);
            }
	  else if (val && strlen(val) > 0 && strcmp(val, "None") != 0)
	    {
	      double fine_val = 0;
	      if (strchr(val, (int) '.'))
		{
		  fine_val = atof(val);
		  if (! suppress_messages)
		    fprintf(stderr, "DEBUG: Gutenprint:   Set float %s to %f (%s)\n",
			    desc.name, fine_val, val);
		}
	      else
		{
		  double coarse_val = atof(val) * 0.001;
		  sprintf(ppd_option_name, "StpFine%s", desc.name);
		  val = cupsGetOption(ppd_option_name, num_options, options);
		  if (!val)
		    {
		      ppd_option = ppdFindOption(ppd, ppd_option_name);
		      if (ppd_option)
			val = ppd_option->defchoice;
		    }
		  if (val && strlen(val) > 0 && strcmp(val, "None") != 0)
		    fine_val = atof(val) * 0.001;
		  if (! suppress_messages)
		    fprintf(stderr, "DEBUG: Gutenprint:   Set float %s to %f + %f\n",
			    desc.name, coarse_val, fine_val);
		  fine_val += coarse_val;
		}
	      if (fine_val > desc.bounds.dbl.upper)
		fine_val = desc.bounds.dbl.upper;
	      if (fine_val < desc.bounds.dbl.lower)
		fine_val = desc.bounds.dbl.lower;
	      stp_set_float_parameter(v, desc.name, fine_val);
	    }
	}
      else
	{
	  sprintf(ppd_option_name, "Stp%s", desc.name);
	  val = cupsGetOption(ppd_option_name, num_options, options);
	  if (!val)
	    {
	      ppd_option = ppdFindOption(ppd, ppd_option_name);
	      if (ppd_option)
		val = ppd_option->defchoice;
	    }
	  if (val && ((strlen(val) > 0 && strcmp(val, "None") != 0) ||
		      (desc.p_type == STP_PARAMETER_TYPE_STRING_LIST)))
	    {
	      stp_curve_t *curve;
	      stp_raw_t *raw;
	      switch (desc.p_type)
		{
		case STP_PARAMETER_TYPE_STRING_LIST:
		  if (! suppress_messages)
		    fprintf(stderr, "DEBUG: Gutenprint:   Set string %s to %s\n",
			    desc.name, val);
		  set_string_parameter(v, desc.name, val);
		  break;
		case STP_PARAMETER_TYPE_INT:
                  if (!strncasecmp(val, "Custom.", 7))
		    val += 7;

		  if (! suppress_messages)
		    fprintf(stderr, "DEBUG: Gutenprint:   Set int %s to %s (%d)\n",
			    desc.name, val, atoi(val));
		  stp_set_int_parameter(v, desc.name, atoi(val));
		  break;
		case STP_PARAMETER_TYPE_DIMENSION:
                  if (!strncasecmp(val, "Custom.", 7))
		    val += 7;

		  if (! suppress_messages)
		    fprintf(stderr, "DEBUG: Gutenprint:   Set dimension %s to %s (%d)\n",
			    desc.name, val, atoi(val));

		  stp_set_dimension_parameter(v, desc.name, atoi(val));
		  break;
		case STP_PARAMETER_TYPE_BOOLEAN:
		  if (! suppress_messages)
		    fprintf(stderr, "DEBUG: Gutenprint:   Set bool %s to %s (%d)\n",
			    desc.name, val, strcasecmp(val, "true") == 0 ? 1 : 0);
		  stp_set_boolean_parameter
		    (v, desc.name, strcasecmp(val, "true") == 0 ? 1 : 0);
		  break;
		case STP_PARAMETER_TYPE_CURVE:
		  curve = stp_curve_create_from_string(val);
		  if (! suppress_messages)
		    fprintf(stderr, "DEBUG: Gutenprint:   Set curve %s to %s\n",
			    desc.name, curve ? val : "(NULL)");
		  if (curve)
		    {
		      stp_set_curve_parameter(v, desc.name, curve);
		      stp_curve_destroy(curve);
		    }
		  break;
		case STP_PARAMETER_TYPE_RAW: /* figure this out later, too */
		  raw = stp_xmlstrtoraw(val);
		  if (! suppress_messages)
		    fprintf(stderr, "DEBUG: Gutenprint:   Set raw %s to %s\n",
			    desc.name, raw ? val : "(NULL)");
		  if (raw)
		    {
		      stp_set_raw_parameter(v, desc.name, raw->data, raw->bytes);
		      stp_free(cast_safe(raw->data));
		      stp_free(raw);
		    }
		  break;
		case STP_PARAMETER_TYPE_FILE: /* Probably not, security hole */
		  if (! suppress_messages)
		    fprintf(stderr, "DEBUG: Gutenprint:   Ignoring option %s %s type %d\n",
			    desc.name, val, desc.p_type);
		  break;
		default:
		  break;
		}
	    }
	  else if (val)
	    {
	      if (! suppress_messages)
		fprintf(stderr, "DEBUG: Gutenprint:     Not setting %s to '%s'\n",
			desc.name, val);
	    }
	  else
	    {
	      if (! suppress_messages)
		fprintf(stderr, "DEBUG: Gutenprint:     Not setting %s to (null)\n",
			desc.name);
	    }
	}
      stp_parameter_description_destroy(&desc);
      stp_free(ppd_option_name);
    }
  if (! suppress_messages)
    fprintf(stderr, "DEBUG: Gutenprint: End options\n");
  stp_parameter_list_destroy(params);
}


static void
purge_excess_data(cups_image_t *cups)
{
  char *buffer = stp_malloc(cups->header.cupsBytesPerLine);
  if (buffer)
    {
      if (! suppress_messages && ! suppress_verbose_messages )
	fprintf(stderr, "DEBUG2: Gutenprint: Purging %d row%s\n",
		cups->header.cupsHeight - cups->row,
		((cups->header.cupsHeight - cups->row) == 1 ? "" : "s"));
      while (cups->row < cups->header.cupsHeight)
	{
	  cupsRasterReadPixels(cups->ras, (unsigned char *)buffer,
			       cups->header.cupsBytesPerLine);
	  cups->row ++;
	}
    }
  stp_free(buffer);
}


static  cups_image_t	cups 	;	/* CUPS image */
static  const char            *version_id;
static   stp_vars_t		*default_settings;
static  int			cups_num_options;	/* Number of CUPS options */
static  cups_option_t		*cups_options;	/* CUPS options */
static char* page_size_name = NULL;
static int initialized_job = 0;
static int aborted = 0;
static   stp_vars_t * vars = NULL;
// rstart job function over here...

static bool				// O - `true` on success, `false` on failure
gutenprint_rstartjob(
    pappl_job_t        *job,		// I - Job
    pappl_pr_options_t *options,	// I - Job options
    pappl_device_t     *device)		// I - Device
{
  const pappl_printer_t * printer;
  ppd_file_t *ppd;
  ppd_size_t *size;
  const stp_printer_t *stp_printer; /* Pointer to printer driver */
  // options->header === header you hve ...
  // device ---> don't know what is the use of it...
  const char *ppd_infix;
  const char filename[1024];
  const char *ppdext = ".ppd";
  const char *gpext = "";
  const char *prefix;
  theImage.rep = &cups;
  printer =  papplJobGetPrinter(job);
  
  stp_printer = stp_get_printer_by_driver(papplPrinterGetDriverName(printer));
  stp_set_global_errfunc(cups_errfunc);
  stp_set_global_dbgfunc(cups_dbgfunc);
  stp_set_global_errdata(stderr);
  stp_set_global_dbgdata(stderr);
  stp_init();
  version_id = stp_get_version();
  default_settings = stp_vars_create();
  stp_set_outfunc(default_settings, cups_writefunc);
  stp_set_outdata(default_settings, stdout);

   // set the options into options and num_options ... from options array...

   ppd_infix = "";
   prefix = CUPS_MODELDIR;

   #ifdef GENERATE_SIMPLIFIED_PPDS
      ppd_infix = ".sim";

   #endif

   #ifdef GENERATE_NOCOLOR_PPDS
      ppd_infix = ".nc";
   #endif

  

  snprintf(filename, sizeof(filename) - 1, "%sstp-%s.%s%s%s%s.gz",
	   prefix, stp_printer_get_driver(stp_printer), GUTENPRINT_RELEASE_VERSION,
	   ppd_infix, ppdext, gpext);

  //  you have the file name now figure out the pagesize name over here...

   // get the page size name and do everything till that while loop ...
  
  if ((ppd = ppdOpenFile(filename)) == NULL)
  {
    stp_i18n_printf(po, _("ERROR: Gutenprint was unable to load PPD file "
                          "\"%s\"!\n"), filename);
    return (1);
  }

  size = ppdPageSize(ppd, NULL);
  if(size)
    page_size_name = stp_strdup(size->name);
  // add all the options from options over here.. to cups options...

  stp_set_printer_defaults(default_settings, stp_printer);
  set_all_options(default_settings, cups_options, cups_num_options, ppd);
  cupsFreeOptions(cups_num_options, cups_options);
  ppdClose(ppd);

  cups.page = 0;

  if (! suppress_messages)
    fprintf(stderr, "DEBUG: Gutenprint: About to start printing loop.\n");
  theImage.rep = &cups;

   return true;

}

static size_t buffer_size ;
static unsigned char *buffer ;
size_t current_pos ;

bool gutenprint_rstart_page(
       pappl_job_t        *job,		// I - Job
    pappl_pr_options_t *options,	// I - Job options
    pappl_device_t     *device,		// I - Device
    unsigned           page
)
{

  // cups_image_t* somevo;
  cups.page = page;
  cups.header = options->header;
  count  = 0;
  current_pos = 0;
  buffer_size = (options->header.cupsHeight +1)* (options->header.cupsBytesPerLine);
  buffer = malloc(buffer_size);
  // cupsRasterWriteHeader(&cups.ras, &options->header);
  // you have the page number over here...
  // you have the header in options ..
  if(vars)
    stp_vars_destroy(vars);
  
    /*
    * Setup printer driver variables...
    */
  if (! suppress_messages)
  {
    fprintf(stderr, "DEBUG: Gutenprint: ================ Printing page %d      ================\n", page);
    fprintf(stderr, "PAGE: %d %d\n", page , options->header.NumCopies);
  }

  // these environment kind of things control from pappl options ...

  vars = initialize_page(&cups, default_settings, page_size_name);
#ifdef ENABLE_CUPS_LOAD_SAVE_OPTIONS
      if (loaded_settings)
	stp_copy_vars_from(v, loaded_settings);
      if (save_file_name)
	{
	  save_options(save_file_name, v);
	  save_file_name = NULL;
	}
#endif /* ENABLE_CUPS_LOAD_SAVE_OPTIONS */

  if (! suppress_messages)
  {
    fprintf(stderr, "DEBUG: Gutenprint: Interim page settings:\n");
    stp_vars_print_error(vars, "DEBUG");
  }

    /* Pass along Collation settings */
  stp_set_boolean_parameter(vars, "Collate", options->header.Collate);
  stp_set_boolean_parameter_active(vars, "Collate", STP_PARAMETER_ACTIVE);
  /* Pass along Copy settings */
  stp_set_int_parameter(vars, "NumCopies", options->header.NumCopies);
  stp_set_int_parameter_active(vars, "NumCopies", STP_PARAMETER_ACTIVE);
  /* Pass along the page number */
  stp_set_int_parameter(vars, "PageNumber", page);

  cups.row = 0;
  if (! suppress_messages)
    print_debug_block(vars, &cups);
  print_messages_as_errors = 1;
    
  // initalize the job if not over here..
  if(!initialized_job)
  {
    stp_start_job(vars, &theImage);
    initialized_job = 1;
  }

  if(!stp_print(vars, &theImage))
  {
    if (Image_status != STP_IMAGE_STATUS_ABORT)
    {
      fprintf(stderr, "DEBUG: Gutenprint: Options failed to verify.\n");
      fprintf(stderr, "DEBUG: Gutenprint: Make sure that you are using ESP Ghostscript rather\n");
      fprintf(stderr, "DEBUG: Gutenprint: than GNU or AFPL Ghostscript with CUPS.\n");
      fprintf(stderr, "DEBUG: Gutenprint: If this is not the cause, set LogLevel to debug to identify the problem.\n");
    }
    aborted = 1;
    // you have to stop the loop basically return false,..
    return false;
  }
    print_messages_as_errors = 0;

    fflush(stdout);


   return true;
}


bool rwriteline(
    pappl_job_t         *job,		// I - Job
    pappl_pr_options_t  *options,	// I - Job options
    pappl_device_t      *device,	// I - Device
    unsigned            y,		// I - Line number
    const unsigned char *pixels
)
{
  size_t bytes_per_line = options->header.cupsBytesPerLine;


  size_t pixels_size =  sizeof(pixels)/sizeof(pixels[0]);
  
  // // Safety check - DO NOT modify pixel data
  // if (pixels_size != bytes_per_line) {
  //     // If sizes don't match, this would distort the image
  //     free(buffer);
  //     return 0;
  // }
  
  // Simple copy - no modification to pixels
  memcpy(buffer + current_pos, pixels, bytes_per_line);
  current_pos += bytes_per_line;


   return true;
}


bool gutenprint_rend_page(
       pappl_job_t        *job,		// I - Job
    pappl_pr_options_t *options,	// I - Job options
    pappl_device_t     *device,		// I - Device
    unsigned           page
)
{
  // printf("ye jayega --> %s\n", buffer);

  unsigned bytes_written = cupsRasterWritePixels(cups.ras, buffer, buffer_size);
  printf("the number of bytes written --> %d\n", bytes_written);
  
  cups.page = page;
    /*
    * Purge any remaining bitmap data...
    */
    if (cups.row < cups.header.cupsHeight)
      purge_excess_data(&cups);
    if (! suppress_messages)
      fprintf(stderr, "DEBUG: Gutenprint: ================ Done printing page %d ================\n", cups.page + 1);
  
   return true;
}


bool
gutenprint_rend_job(
    pappl_job_t        *job,		// I - Job
    pappl_pr_options_t *options,	// I - Options
    pappl_device_t     *device)	
{

    if (vars)
    {
      if (! suppress_messages)
        fprintf(stderr, "DEBUG: Gutenprint: %s job\n",
          aborted ? "Aborted" : "Ending");
            stp_end_job(vars, &theImage);
            fflush(stdout);
            stp_vars_destroy(vars);
    }
  // (void) times(&tms);
  // (void) gettimeofday(&t2, NULL);
  // clocks_per_sec = sysconf(_SC_CLK_TCK);
  // fprintf(stderr, "DEBUG: Gutenprint: stats %.0fB, %.3fu, %.3fs, %.3fel\n",
	//   total_bytes_printed,
	//   (double) tms.tms_utime / clocks_per_sec,
	//   (double) tms.tms_stime / clocks_per_sec,
	//   (double) (t2.tv_sec - t1.tv_sec) +
	//   ((double) (t2.tv_usec - t1.tv_usec)) / 1000000.0);
  if (!suppress_messages)
  {
    fprintf(stderr, "DEBUG: Gutenprint: ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    fprintf(stderr, "DEBUG: Gutenprint: ============================================================\n");
  }
    stp_vars_destroy(default_settings);
    if (page_size_name)
      stp_free(page_size_name);
    // if (fd != 0)
    //   close(fd);
    return aborted ? 1 : 0;




   return true;
}




// temporary functoins for raster processing over here...

// bool 
// rstart_job(
//     pappl_job_t        *job,		// I - Job
//     pappl_pr_options_t *options,	// I - Job options
//     pappl_device_t     *device)	
// {
// return true;

// }





// rstart endpage function over here...

// rstartjob function over here...


// rwrite line function over here...



static bool
driver_cb(
   pappl_system_t *system,
   const char *driver_name,
   const char *device_uri,
   const char *device_id,
   pappl_pr_driver_data_t * driver_data,
   ipp_t  ** driver_attrs,
   void   *cbdata
)
{

   // driver name is passed in the function ...
   // for the specific printer
  (void)cbdata;
  (void)device_uri;
  (void)device_id;
  (void)driver_attrs;

   stp_init();
      // char *model = "bjc-PIXUS-iP3100";
   int i;
   const stp_printer_t *printer = stp_get_printer_by_driver(driver_name);
   stp_vars_t *v;
   const stp_vars_t *printvars;
   printvars = stp_printer_get_defaults(printer);
   // if(printer != NULL)
   // {
   //    if(*driver_attrs == NULL)
   //    {
   //       *driver_attrs = ippNew();
   //    }
   // }

   // assign all the functions related to the job flow over here...
   // driver_data->printfile_cb  = guten_print;
   // driver_data->rendjob_cb    = guten_rendjob;
   // driver_data->rendpage_cb   = guten_rendpage;
   // driver_data->rstartjob_cb  = guten_rstartjob;
   // driver_data->rstartpage_cb = guten_rstartpage;
   // driver_data->rwriteline_cb = guten_rwriteline;
   // driver_data->status_cb     = guten_status;
   // driver_data->has_supplies  = true;


   *driver_attrs = ippNew();
   driver_data->num_vendor = 0;
   v = stp_vars_create_copy(printvars);


    /* Pages-per-minute for monochrome and color */
    driver_data->ppm_color = 1;
   /* Four color spaces - black (1-bit and 8-bit), grayscale, and sRGB */
    driver_data->raster_types = PAPPL_PWG_RASTER_TYPE_BLACK_1 | PAPPL_PWG_RASTER_TYPE_BLACK_8 | PAPPL_PWG_RASTER_TYPE_SGRAY_8 | PAPPL_PWG_RASTER_TYPE_SRGB_8;

    /* Color modes: auto (default), monochrome, and color */
    driver_data->color_supported = PAPPL_COLOR_MODE_AUTO;
    driver_data->color_default   = PAPPL_COLOR_MODE_AUTO;
   stp_parameter_list_t paramlist;
   paramlist = stp_get_parameter_list(v);
   size_t param_count = stp_parameter_list_count(paramlist);

   printf("The lenght of param count ==> %d\n", param_count );
   // below code is for standard common options...

   stp_parameter_t desc;
   int num_opts = 0;
   const stp_param_string_t *opt;


    // printing pagesize... over here...



   // seeing all the options and  values in the current printer models..
   for (int l = 0; l < param_count; l++)
   {
      const stp_parameter_t *lparam = stp_parameter_list_param(paramlist, l);


      // Checking for String list...
      if (is_special_option(lparam->name) || lparam->read_only ||  (lparam->p_type != STP_PARAMETER_TYPE_STRING_LIST &&
              lparam->p_type != STP_PARAMETER_TYPE_RAW &&
              lparam->p_type != STP_PARAMETER_TYPE_BOOLEAN &&
              lparam->p_type != STP_PARAMETER_TYPE_DIMENSION &&
              lparam->p_type != STP_PARAMETER_TYPE_INT &&
              lparam->p_type != STP_PARAMETER_TYPE_DOUBLE))
              continue;

      // list for storing all the parameters...
      char ipp_supported[256];
      char ipp_default[256];
      char ** option_list;
      stp_describe_parameter(v, lparam->name, &desc);
      if(desc.is_active)
      {
         // now over here...
         // printf("the name of the opti--_> %s\n", desc.name);
         snprintf(ipp_supported, sizeof(ipp_supported), "%s-supported", desc.name);
         snprintf(ipp_default, sizeof(ipp_default), "%s-default", desc.name);
         if(desc.name != NULL)
         {
            driver_data->vendor[driver_data->num_vendor] = strdup(desc.name);
            driver_data->num_vendor++;
         }
         else
            continue;

         switch(desc.p_type)
         {
            case STP_PARAMETER_TYPE_STRING_LIST:
            if(desc.bounds.str == NULL) continue;
            num_opts = stp_string_list_count(desc.bounds.str);
            option_list = calloc(num_opts , sizeof(char *));
            char * default_value = strdup(desc.deflt.str);
            printf("the deflt value --> %s\n", default_value);
            for(i=0;i < num_opts; i++)
            {
               opt = stp_string_list_param(desc.bounds.str, i);
               option_list[i] = stp_strdup(opt->name);
            }
            // add in the ipp object over here...
            ippAddStrings(*driver_attrs, IPP_TAG_PRINTER, IPP_TAG_KEYWORD, ipp_supported,num_opts, NULL, (const char *const *)option_list);
            ippAddString(*driver_attrs, IPP_TAG_PRINTER, IPP_TAG_KEYWORD, ipp_default, NULL, default_value);
            break;

            case STP_PARAMETER_TYPE_RAW:
             printf("the deflt value --> %s\n", desc.name);
               ippAddString(*driver_attrs, IPP_TAG_PRINTER, IPP_TAG_KEYWORD, ipp_supported, NULL, desc.name);
               ippAddString(*driver_attrs, IPP_TAG_PRINTER, IPP_TAG_KEYWORD, ipp_default, NULL, desc.name);
               break;
            case STP_PARAMETER_TYPE_BOOLEAN:
               num_opts = 2;
               option_list = calloc(num_opts, sizeof(char *));
               option_list[0] = "1";
               option_list[1] = "0";
               ippAddBooleans(*driver_attrs, IPP_TAG_PRINTER, ipp_supported, 2, (const char * const *)option_list);
               ippAddBoolean(*driver_attrs, IPP_TAG_PRINTER, ipp_default, desc.deflt.boolean);
               break;

            case STP_PARAMETER_TYPE_DOUBLE:
               ippAddRange(*driver_attrs, IPP_TAG_PRINTER, ipp_supported, desc.bounds.dbl.lower *100, desc.bounds.dbl.upper *100);
               ippAddInteger(*driver_attrs ,IPP_TAG_PRINTER, IPP_TAG_INTEGER, ipp_default, desc.deflt.dbl*100);
               break;

            case STP_PARAMETER_TYPE_DIMENSION:
               ippAddRange(*driver_attrs, IPP_TAG_PRINTER, ipp_supported, (int)desc.bounds.dimension.lower, (int)desc.bounds.dimension.upper);
               ippAddInteger(*driver_attrs, IPP_TAG_PRINTER, IPP_TAG_INTEGER, ipp_default, (int)desc.deflt.dimension);
               break;

            case STP_PARAMETER_TYPE_INT:
               ippAddRange(*driver_attrs, IPP_TAG_PRINTER, ipp_supported, desc.bounds.integer.lower, desc.bounds.integer.upper);
               ippAddInteger(*driver_attrs, IPP_TAG_PRINTER, IPP_TAG_INTEGER, ipp_default, desc.deflt.integer);
               break;
            default:
            break;

         }


      }
      stp_parameter_description_destroy(&desc);

   }


    // // printing all the vendors over here...
    // for(int sl = 0; sl< driver_data->num_vendor; sl++)
    // {
    //   printf("inside gutenprint --> %s\n", driver_data->vendor[sl]);
    // }


   // Store all the static attributes over here...
   // AirPrint version...
   driver_data->num_features = 1;
   driver_data->features[0]  = "airprint-2.1";

   // Pages per minute (interpret as "labels per minute")

   // "printer-kind" values...
   driver_data->kind = PAPPL_KIND_LABEL;

   // Color values...
   driver_data->color_supported = PAPPL_COLOR_MODE_AUTO | PAPPL_COLOR_MODE_MONOCHROME | PAPPL_COLOR_MODE_BI_LEVEL;
   driver_data->color_default   = PAPPL_COLOR_MODE_MONOCHROME;
   driver_data->raster_types    = PAPPL_PWG_RASTER_TYPE_BLACK_1 | PAPPL_PWG_RASTER_TYPE_BLACK_8 | PAPPL_PWG_RASTER_TYPE_SGRAY_8;

   // "print-quality-default" value...
   driver_data->quality_default = IPP_QUALITY_NORMAL;

   // "sides" values...
   driver_data->sides_supported = PAPPL_SIDES_ONE_SIDED;
   driver_data->sides_default   = PAPPL_SIDES_ONE_SIDED;

   // "orientation-requested-default" value...
   driver_data->orient_default = IPP_ORIENT_NONE;

   // Media capabilities...
   driver_data->input_face_up  = true;
   driver_data->output_face_up = true;

   driver_data->testpage_cb = NULL;


 

   // set all that happens according to each driver... in lprint...
   driver_data->format = "image/urf";

   driver_data->ppm = 1;

   // here validating the driver function of pappl...

   driver_data->make_and_model[0] = strdup(driver_name);


       // Tape printers operate at 180dpi
    driver_data->num_resolution  = 1;
    driver_data->x_default = 180;
    driver_data->y_default = 180;
    driver_data->x_resolution[0] = 180;
    driver_data->y_resolution[0] = 180;

   //  data->x_default = data->y_default = 180;

    driver_data->left_right = 1;
    driver_data->bottom_top = 1;


   // assigning the functions over here...
   driver_data->rstartjob_cb = gutenprint_rstartjob;
   driver_data->rendjob_cb = gutenprint_rend_job;
   driver_data->rstartpage_cb = gutenprint_rstart_page;
   driver_data->rwriteline_cb = rwriteline;
   driver_data->rendpage_cb = gutenprint_rend_page;


   // VALIDATING READY OVER HERE....

    /* Make and model name */
    papplCopyString(driver_data->make_and_model, driver_name, sizeof(driver_data->make_and_model));

    /* Pages-per-minute for monochrome and color */
    driver_data->ppm = 1;

    /* Three resolutions - 150dpi, 300dpi (default), and 600dpi */
    driver_data->num_resolution  = 3;
    driver_data->x_resolution[0] = 150;
    driver_data->y_resolution[0] = 150;
    driver_data->x_resolution[1] = 300;
    driver_data->y_resolution[1] = 300;
    driver_data->x_resolution[2] = 600;
    driver_data->y_resolution[2] = 600;
    driver_data->x_default = driver_data->y_default = 300;

    driver_data->raster_types = PAPPL_PWG_RASTER_TYPE_BLACK_1 | PAPPL_PWG_RASTER_TYPE_BLACK_8 | PAPPL_PWG_RASTER_TYPE_SGRAY_8;

    driver_data->color_supported = PAPPL_COLOR_MODE_MONOCHROME;
    driver_data->color_default   = PAPPL_COLOR_MODE_MONOCHROME;

    driver_data->num_media = (int)(sizeof(pcl_hp_laserjet_media) / sizeof(pcl_hp_laserjet_media[0]));
    memcpy(driver_data->media, pcl_hp_laserjet_media, sizeof(pcl_hp_laserjet_media));

    driver_data->sides_supported = PAPPL_SIDES_ONE_SIDED | PAPPL_SIDES_TWO_SIDED_LONG_EDGE | PAPPL_SIDES_TWO_SIDED_SHORT_EDGE;
    driver_data->sides_default   = PAPPL_SIDES_ONE_SIDED;

    driver_data->num_source = 7;
    driver_data->source[0]  = "default";
    driver_data->source[1]  = "tray-1";
    driver_data->source[2]  = "tray-2";
    driver_data->source[3]  = "tray-3";
    driver_data->source[4]  = "tray-4";
    driver_data->source[5]  = "manual";
    driver_data->source[6]  = "envelope";

    /* Media types (MSN names) */
    driver_data->num_type = 6;
    driver_data->type[0]  = "stationery";
    driver_data->type[1]  = "stationery-letterhead";
    driver_data->type[2]  = "cardstock";
    driver_data->type[3]  = "labels";
    driver_data->type[4]  = "envelope";
    driver_data->type[5]  = "transparency";

    driver_data->left_right = 635;	// 1/4" left and right
    driver_data->bottom_top = 423;	// 1/6" top and bottom

    for (i = 0; i < driver_data->num_source; i ++)
    {
      if (strcmp(driver_data->source[i], "envelope"))
        snprintf(driver_data->media_ready[i].size_name, sizeof(driver_data->media_ready[i].size_name), "na_letter_8.5x11in");
      else
        snprintf(driver_data->media_ready[i].size_name, sizeof(driver_data->media_ready[i].size_name), "env_10_4.125x9.5in");
    }




     // Fill out ready and default media (default == ready media from the first source)
  for (i = 0; i < driver_data->num_source; i ++)
  {
    pwg_media_t *pwg;			/* Media size information */

    /* Use US Letter for regular trays, #10 envelope for the envelope tray */
    if (!strcmp(driver_data->source[i], "envelope"))
      papplCopyString(driver_data->media_ready[i].size_name, "na_number-10_4.125x9.5in", sizeof(driver_data->media_ready[i].size_name));
    else
      papplCopyString(driver_data->media_ready[i].size_name, "na_letter_8.5x11in", sizeof(driver_data->media_ready[i].size_name));

    /* Set margin and size information */
    if ((pwg = pwgMediaForPWG(driver_data->media_ready[i].size_name)) != NULL)
    {
      driver_data->media_ready[i].bottom_margin = driver_data->bottom_top;
      driver_data->media_ready[i].left_margin   = driver_data->left_right;
      driver_data->media_ready[i].right_margin  = driver_data->left_right;
      driver_data->media_ready[i].size_width    = pwg->width;
      driver_data->media_ready[i].size_length   = pwg->length;
      driver_data->media_ready[i].top_margin    = driver_data->bottom_top;
      papplCopyString(driver_data->media_ready[i].source, driver_data->source[i], sizeof(driver_data->media_ready[i].source));
      papplCopyString(driver_data->media_ready[i].type, driver_data->type[0],  sizeof(driver_data->media_ready[i].type));
    }
  }


   driver_data->media_default = driver_data->media_ready[0];

   //  data->num_media = (int)(sizeof(lprint_dymo_tape) / sizeof(lprint_dymo_tape[0]));
   //  memcpy(data->media, lprint_dymo_tape, sizeof(lprint_dymo_tape));

   //  data->num_source = 1;
   //  data->source[0]  = "main-roll";


   return true;

   // //    //  int ankit_len = driver_data.num_vendor;
   //  ipp_attribute_t * ankit_preset;
   //  int count = 0;

   // // iterate over driver data vendor options over here...
   // for(int x = 0 ; x< driver_data->num_vendor; x++)
   // {
   //    printf("in the function --> %s\n", driver_data->vendor[x]);
   // }


   //  for(ankit_preset = ippFirstAttribute(*driver_attrs); ankit_preset != NULL ; ankit_preset =  ippNextAttribute(*driver_attrs))
   //  {
   //    // here we are iterating on the ipp_t object...
   //    int preset_len = ippGetCount(ankit_preset);
   //    const char * okay_name = ippGetName(ankit_preset);
   //    ipp_tag_t tag = ippGetValueTag(ankit_preset);
   //    printf("the len of the values of the packet -_> %d\n", preset_len);
   //    printf("This name of the option we have --> %s\n", okay_name);
   //    for(int ix = 0; ix < preset_len; ix++)
   //    {
   //       switch(tag)
   //       {
   //          case IPP_TAG_KEYWORD:
   //             const char * aorl = ippGetString(ankit_preset, ix, NULL);
   //             printf("the value of the options i have  --> %s\n", aorl);
   //             break;
   //       }
   //    }
   //    printf(" %s\n", " ");
   //  }


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
