#ifndef __TAMGIAC_INCLUDED__
#define __TAMGIAC_INCLUDED__

#include "DaGiac.h"
#include <stdlib.h>

typedef struct TamGiac{
    DaGiac super;
    struct {
        double a;
        double b;
        double c;
    } private;
} TamGiac;

TamGiac * taoTamGiac(void * ptr, int mauSac, double a, double b, double c);

extern Class classTamGiac;

#endif