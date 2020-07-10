#ifndef __HINHVUONG_INCLUDED__
#define __HINHVUONG_INCLUDED__

#include "ChuNhat.h"
typedef struct HinhVuong{
    ChuNhat super;
} HinhVuong;

HinhVuong * taoHinhVuong(void * ptr,int mau, double canh);

extern struct Class classHinhVuong;

#endif