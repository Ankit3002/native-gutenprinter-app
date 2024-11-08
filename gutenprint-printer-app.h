#include <pappl/pappl.h>
#define cups_page_header2_t cups_page_header_t
#include <cupsfilters/filter.h>
#include <ppd/ppd-filter.h>

#ifndef GUTENPRINT_PRINTER_APP_H
#define GUTENPRINT_PRINTER_APP_H

// Function prototype declaration
static bool	gutenprint_rstartjob( pappl_job_t  *job,  pappl_pr_options_t *options, pappl_device_t     *device);
bool gutenprint_rstart_page(
       pappl_job_t        *job,		// I - Job
    pappl_pr_options_t *options,	// I - Job options
    pappl_device_t     *device,		// I - Device
    unsigned           page
);

bool gutenprint_rend_page(
       pappl_job_t        *job,		// I - Job
    pappl_pr_options_t *options,	// I - Job options
    pappl_device_t     *device,		// I - Device
    unsigned           page
);

bool
gutenprint_rend_job(
    pappl_job_t        *job,		// I - Job
    pappl_pr_options_t *options,	// I - Options
    pappl_device_t     *device)	;

bool rwriteline(
    pappl_job_t         *job,		// I - Job
    pappl_pr_options_t  *options,	// I - Job options
    pappl_device_t      *device,	// I - Device
    unsigned            y,		// I - Line number
    const unsigned char *pixels
);

#endif 

typedef struct gutenprint_printer_app_config_s
{
  // Identification of the Printer Application
  const char *system_name;           // Name of the system
  const char *system_package_name;   // Name of Printer Application
                                     // package/executable
  const char *version;               // Program version number string
  unsigned short numeric_version[4]; // Numeric program version
  const char *web_if_footer;         // HTML Footer for web interface

  pappl_pr_autoadd_cb_t autoadd_cb;

  pappl_pr_identify_cb_t identify_cb;

  pappl_pr_testpage_cb_t testpage_cb;

  cups_array_t *spooling_conversions;

  cups_array_t *stream_formats;
  const char *backends_ignore;

  const char *backends_only;

  void *testpage_data;

} gutenprint_printer_app_config_t;

typedef struct gutenprint_printer_app_global_data_s
{
  gutenprint_printer_app_config_t *config;
  pappl_system_t *system;
  int num_drivers;            // Number of drivers (from the PPDs)
  pappl_pr_driver_t *drivers; // Driver index (for menu and
                              // auto-add)
  char spool_dir[1024];       // Spool directory, customizable via
                              // SPOOL_DIR environment variable

} gutenprint_printer_app_global_data_t;

typedef struct stream_format_s
{
  char                     *dsttype;           // Output data type
  pappl_pr_rendjob_cb_t    rendjob_cb;         // End raster job callback
  pappl_pr_rendpage_cb_t   rendpage_cb;        // End raster page callback
  pappl_pr_rstartjob_cb_t  rstartjob_cb;       // Start raster job callback
  pappl_pr_rstartpage_cb_t rstartpage_cb;      // Start raster page callback
  pappl_pr_rwriteline_cb_t rwriteline_cb;      // Write raster line callback
  int                      num_filters;        // Number of filters
  cf_filter_filter_in_chain_t filters[];       // List of filters with
                                               // parameters
} stream_format_t;

typedef struct pr_stream_format_s
{
  char                     *dsttype;           // Output data type
  pappl_pr_rendjob_cb_t    rendjob_cb;         // End raster job callback
  pappl_pr_rendpage_cb_t   rendpage_cb;        // End raster page callback
  pappl_pr_rstartjob_cb_t  rstartjob_cb;       // Start raster job callback
  pappl_pr_rstartpage_cb_t rstartpage_cb;      // Start raster page callback
  pappl_pr_rwriteline_cb_t rwriteline_cb;      // Write raster line callback
  int                      num_filters;        // Number of filters
  cf_filter_filter_in_chain_t filters[];       // List of filters with
                                               // parameters
} pr_stream_format_t;


typedef struct spooling_conversion_s
{
  char                     *srctype;           // Input data type
  char                     *dsttype;           // Output data type
  int                      num_filters;        // Number of filters
  cf_filter_filter_in_chain_t filters[];       // List of filters with
                                               // parameters
} spooling_conversion_t;


static const spooling_conversion_t CONVERT_PDF_TO_RASTER =
{
  "application/pdf",
  "application/vnd.cups-raster",
  2,
  {
    {
      cfFilterPDFToPDF,
      NULL,
      "pdftopdf"
    },
    {
      cfFilterGhostscript,
      &((cf_filter_out_format_t){CF_FILTER_OUT_FORMAT_CUPS_RASTER}),
      "ghostscript"
    }
  }
};


// static const spooling_conversion_t CONVERT_PS_TO_RASTER =
// {
//   "application/postscript",
//   "application/vnd.cups-raster",
//   2,
//   {
//     {
//       ppdFilterPSToPS,
//       NULL,
//       "pstops"
//     },
//     {
//       cfFilterGhostscript,
//       &((cf_filter_out_format_t){CF_FILTER_OUT_FORMAT_CUPS_RASTER}),
//       "ghostscript"
//     }
//   }
// };



//
// Stream formats
//

static const stream_format_t PR_STREAM_CUPS_RASTER =
{
  "application/vnd.cups-raster",
  gutenprint_rend_job,
  gutenprint_rend_page,
  gutenprint_rstartjob,
  gutenprint_rstart_page,
  rwriteline,
  1,
  {
    {
      cfFilterPWGToRaster,
      NULL,
      "pwgtoraster"
    }
  }
};

