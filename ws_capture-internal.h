#ifndef LIBLIBWIRESHARK_CAPTURE_INTERNAL_H_
#define LIBLIBWIRESHARK_CAPTURE_INTERNAL_H_

#include "cfile.h"
/** handle identifying a online or offline capture */
struct ws_capture_t {
    capture_file cfile;
    epan_dissect_t *edt;
};


#endif
