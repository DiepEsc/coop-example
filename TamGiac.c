#include <stdlib.h>
#include <math.h>
#include "TamGiac.h"

static double dienTichTamGiac(DaGiac * ptr){
    TamGiac * tamGiac = (TamGiac *) ptr;
    double p = (
        tamGiac->private.a +
        tamGiac->private.b +
        tamGiac->private.c
    )/2;
    
    return sqrt(
        p *
        (p - tamGiac->private.a) *
        (p - tamGiac->private.b) *
        (p - tamGiac->private.c)
    );
}

TamGiac * taoTamGiac(void * ptr, int mauSac, double a, double b, double c){
    if(ptr==NULL){
        ptr = malloc(sizeof(TamGiac));
        if(ptr==NULL){
            return NULL;
        }
        ((Object * )ptr)->class = &classTamGiac;
    } else if(((Object *)ptr)->class == NULL){
        ((Object *) ptr)->class = &classTamGiac;
    }
    taoDaGiac(ptr, mauSac, 3);
    TamGiac * tamGiac = (TamGiac *) ptr;
    tamGiac->private.a = a;
    tamGiac->private.b = b;
    tamGiac->private.c = c;
    ((DaGiac *)tamGiac)->dienTich = &dienTichTamGiac;
    return tamGiac;
}

DEFINECLASS(classTamGiac, &classDaGiac);