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


static  cups_image_t		cups;		/* CUPS image */
static  const char            *version_id;
static   stp_vars_t		*default_settings;
static  int			num_options;	/* Number of CUPS options */
static  cups_option_t		*options;	/* CUPS options */


// // rstart job function over here...

// static bool				// O - `true` on success, `false` on failure
// gutenprint_rstartjob(
//     pappl_job_t        *job,		// I - Job
//     pappl_pr_options_t *options,	// I - Job options
//     pappl_device_t     *device)		// I - Device
// {

//    const pappl_printer_t * printer;
//    const stp_printer_t *p; /* Pointer to printer driver */
//    // options->header === header you hve ...
//    // device ---> don't know what is the use of it...
//    const char *ppd_infix;
//    const char filename[1024];
//    const char *ppdext = ".ppd";
//    const char *gpext = "";
//    const char *prefix;
//    theImage.rep = &cups;
//    printer = job->printer;
//    p = stp_get_printer_by_driver(printer->name);
//    stp_set_global_errfunc(cups_errfunc);
//    stp_set_global_dbgfunc(cups_dbgfunc);
//    stp_set_global_errdata(stderr);
//    stp_set_global_dbgdata(stderr);
//    stp_init();
//    version_id = stp_get_version();
//    default_settings = stp_vars_create();
//    stp_set_outfunc(default_settings, cups_writefunc);
//    stp_set_outdata(default_settings, stdout);

//    // set the options into options and num_options ... from options array...

//    ppd_infix = "";
//    prefix = CUPS_MODELDIR;

//    #ifdef GENERATE_SIMPLIFIED_PPDS
//       ppd_infix = ".sim";

//    #endif

//    #ifdef GENERATE_NOCOLOR_PPDS
//       ppd_infix = ".nc";
//    #endif

   

//   snprintf(filename, sizeof(filename) - 1, "%s/stp-%s.%s%s%s%s",
// 	   prefix, stp_printer_get_driver(p), GUTENPRINT_RELEASE_VERSION,
// 	   ppd_infix, ppdext, gpext);

//    // you have the file name now figure out the pagesize name over here...

//    printf("the name of the ppd file generated ---> %s\n", filename);
//    // 
//    return true;


// }

bool
rend_job(
    pappl_job_t        *job,		// I - Job
    pappl_pr_options_t *options,	// I - Options
    pappl_device_t     *device)	
{
   return true;
}

bool rend_page(
       pappl_job_t        *job,		// I - Job
    pappl_pr_options_t *options,	// I - Job options
    pappl_device_t     *device,		// I - Device
    unsigned           page
)
{
   return true;
}

bool rstart_page(
       pappl_job_t        *job,		// I - Job
    pappl_pr_options_t *options,	// I - Job options
    pappl_device_t     *device,		// I - Device
    unsigned           page
)
{
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
   return true;
}

// temporary functoins for raster processing over here...

bool 
rstart_job(
    pappl_job_t        *job,		// I - Job
    pappl_pr_options_t *options,	// I - Job options
    pappl_device_t     *device)	
{
return true;

}



// 'gutenprint_rstartpage()' - Start a page.
//
 



// static bool				// O - `true` on success, `false` on failure
// gutenprint_rstart_page(
//     pappl_job_t        *job,		// I - Job
//     pappl_pr_options_t *options,	// I - Job options
//     pappl_device_t     *device,		// I - Output device
//     unsigned           page)		// I - Page number
// {

//    stp_vars_t		*v = NULL;
//    stp_vars_t		*default_settings;
//    int			fd;		/* File descriptor */
//    cups_image_t		cups;		/* CUPS image */
//    const char		*ppdfile;	/* PPD environment variable */
//    const stp_printer_t	*printer;	/* Printer driver */
//    int			num_options;	/* Number of CUPS options */
//    cups_option_t		*options;	/* CUPS options */
//    stp_vars_t		*v = NULL;
//    stp_vars_t		*default_settings;
//    int			initialized_job = 0;
//    const char            *version_id;
//    struct tms		tms;
//    long			clocks_per_sec;
//    struct timeval	t1, t2;
//    char			*page_size_name = NULL;
//    int			aborted = 0;


//        /*
//       * We don't know how many pages we're going to print, and
//       * we need to call stp_end_job at the completion of the job.
//       * Therefore, we need to keep v in scope after the termination
//       * of the loop to permit calling stp_end_job then.  Therefore,
//       * we have to free the previous page's stp_vars_t at the start
//       * of the loop.
//       */
//     if (v)
//       stp_vars_destroy(v);

//      if (getenv("STP_SUPPRESS_MESSAGES"))
//        suppress_messages = 1;

//     /*
//       * Setup printer driver variables...
//       */
//     if (! suppress_messages)
//     {
//       fprintf(stderr, "DEBUG: Gutenprint: ================ Printing page %d      ================\n", cups.page + 1);
//       fprintf(stderr, "PAGE: %d %d\n", cups.page + 1, options->header.NumCopies);
//     }
//     v = initialize_page(&cups, default_settings, page_size_name);
//     #ifdef ENABLE_CUPS_LOAD_SAVE_OPTIONS
//           if (loaded_settings)
//       stp_copy_vars_from(v, loaded_settings);
//           if (save_file_name)
//       {
//         save_options(save_file_name, v);
//         save_file_name = NULL;
//       }
//     #endif /* ENABLE_CUPS_LOAD_SAVE_OPTIONS */
//     if (! suppress_messages)
//     {
//       fprintf(stderr, "DEBUG: Gutenprint: Interim page settings:\n");
//       stp_vars_print_error(v, "DEBUG");
//     }

//     stp_merge_printvars(v, stp_printer_get_defaults(printer));

//     /* Pass along Collation settings */
//     stp_set_boolean_parameter(v, "Collate", cups.header.Collate);
//     stp_set_boolean_parameter_active(v, "Collate", STP_PARAMETER_ACTIVE);
//     /* Pass along Copy settings */
//     stp_set_int_parameter(v, "NumCopies", cups.header.NumCopies);
//     stp_set_int_parameter_active(v, "NumCopies", STP_PARAMETER_ACTIVE);
//     /* Pass along the page number */
//     stp_set_int_parameter(v, "PageNumber", cups.page);
//     cups.row = 0;
//     if (! suppress_messages)
//       print_debug_block(v, &cups);
//     print_messages_as_errors = 1;

//     if (!initialized_job)
//     {
//       stp_start_job(v, &theImage);
//       initialized_job = 1;
//     }
   
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
   driver_data->format = "application/vnd.cups-raster";

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
   driver_data->rstartjob_cb = rstart_job;
   driver_data->rendjob_cb = rend_job;
   driver_data->rstartpage_cb = rstart_page;
   driver_data->rwriteline_cb = rwriteline;
   driver_data->rendpage_cb = rend_page;


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
