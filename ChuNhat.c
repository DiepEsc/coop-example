#include "ChuNhat.h"
#include <stdlib.h>

DEFINECLASS(classChuNhat, &classDaGiac);

static double dienTichChuNhat(DaGiac * ptr){
    ChuNhat * chuNhat = (ChuNhat *) ptr;
    return chuNhat->private.dai *
    chuNhat->private.rong;
}

ChuNhat * taoChuNhat(void * ptr, int mauSac, double dai, double rong){
    if(ptr==NULL){
        ptr = malloc(sizeof(ChuNhat));
        if(ptr==NULL){
            return NULL;
        }
        ((Object *)ptr)->class = &classChuNhat;
    } else if(((Object *)ptr)->class == NULL){
        ((Object *)ptr)->class = &classChuNhat;
    }
    taoDaGiac(ptr, mauSac, 4);
    ChuNhat * chuNhat = (ChuNhat *) ptr;
    chuNhat->private.dai = dai;
    chuNhat->private.rong = rong;
    ((DaGiac *)chuNhat)->dienTich = &dienTichChuNhat;
    return chuNhat;
}