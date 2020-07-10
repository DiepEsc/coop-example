#include "HinhVuong.h"
#include <stdlib.h>
#include <stdio.h>

DEFINECLASS(classHinhVuong, &classChuNhat);

static double (*dienTichChuNhat) (DaGiac *);

static double dienTichHinhVuong (DaGiac * ptr){
    double ketQua = dienTichChuNhat(ptr);
    printf("-----------------> goi dienTichHinhVuong\n");
    return ketQua;
}

HinhVuong * taoHinhVuong(void * ptr,int mau, double canh){
    if(ptr==NULL){
        ptr = malloc(sizeof(HinhVuong));
        if(ptr==NULL){
            return NULL;
        }
        ((Object *)ptr)->class = &classHinhVuong;
    } else if(((Object *)ptr)->class == NULL){
        ((Object *)ptr)->class = &classHinhVuong;
    }
    taoChuNhat(ptr, mau, canh, canh);
    dienTichChuNhat = ((DaGiac *)ptr)->dienTich;
    ((DaGiac *)ptr)->dienTich = &dienTichHinhVuong;
    HinhVuong* hinhVuong = (HinhVuong *) ptr;
    return hinhVuong;
}
