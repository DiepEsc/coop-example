#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ChuNhat.h"
#include "HinhVuong.h"
#include "TamGiac.h"

int main(int argc, char ** argv){
    DaGiac *dsDaGiac[3];
    int i;
    HinhVuong vuong;
    HinhVuong * vuongPtr = &vuong;
    dsDaGiac[0] = (DaGiac *) taoTamGiac(NULL, 0, 3, 4, 5);
    dsDaGiac[1] = (DaGiac *) taoChuNhat(NULL, 0, 4, 2);
    dsDaGiac[2] = (DaGiac *) taoHinhVuong(NULL, 0, 3);
    for(i=0;i<3;i++){
        if(dsDaGiac[i]==NULL){
            printf("dsDagiac[%d] NULL\n", i);
        } else {
            printf("dien tich dsDagiac[%d] la %f\n", i, dsDaGiac[i]->dienTich(dsDaGiac[i]));
        }

        if(isInstance((Object *) dsDaGiac[i], (Class *) &classChuNhat)){
            printf("dsDagiac[%d] Thoa man\n", i);
        }
    }
    for(i=0;i<3;i++){
        free(dsDaGiac[i]);
    }

    // ((Object *)vuongPtr)->class = &classHinhVuong;
    memset(vuongPtr,0,sizeof(HinhVuong));
    taoHinhVuong(vuongPtr,0,2);
    if(isInstance((Object *) &vuong, (Class *)  &classChuNhat)){
        printf("vuong la hinh chu nhat, dien tich la %f\n", 
            ((DaGiac *)vuongPtr)->dienTich((DaGiac *)vuongPtr)
        );
    }

    return 0;
}