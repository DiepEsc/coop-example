#ifndef __DAGIAC_INCLUDED__
#define __DAGIAC_INCLUDED__

#include "Object.h"
#include "Class.h"


typedef struct DaGiac DaGiac;
struct DaGiac {
    Object super;
    struct {
        int soCanh;
    } private;
    int mauSac;
    double (*dienTich) (DaGiac *);
};
DaGiac * taoDaGiac( void * ptr, int mauSac, int soCanh);

extern Class classDaGiac;

#endif
