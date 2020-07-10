#ifndef __CHUNHAT_INCLUDED__
#define __CHUNHAT_INCLUDED__

#include "DaGiac.h"
typedef struct ChuNhat{
    DaGiac super;
    struct {
        double dai;
        double rong;
    } private;
} ChuNhat;

ChuNhat * taoChuNhat(void * ptr, int mauSac, double dai, double rong);

extern Class classChuNhat;

#endif