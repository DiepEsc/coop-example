#include "DaGiac.h"
#include <stdlib.h>
#include <stdio.h>

DEFINECLASS(classDaGiac, &classObject);

DaGiac * taoDaGiac( void * ptr, int mauSac, int soCanh){
    if(ptr==NULL){
        printf("Khong the tao da giac\n");
        return NULL;
    }
    createObject(ptr);
    DaGiac * daGiac = (DaGiac *) ptr;
    daGiac->mauSac = mauSac;
    daGiac->private.soCanh = soCanh;
    return daGiac;
}
