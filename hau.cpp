#pragma once
#include "quanCo.h"
#include "banCo.h"
bool hau::kiemTraNuocDi(int xNew,int yNew){
    if (xNew>=0&&xNew<=7&&yNew>=0&&yNew<=7){
        quanCo H;
        H.X.x=H.T.x=x;
        H.X.y=H.T.y =y;
        if (H.X.kiemTraNuocDi(xNew,yNew) || H.T.kiemTraNuocDi(xNew,yNew))
            return 1;
        else return 0;
    } else return false;
}
void hau::diChuyen(int xNew,int yNew){
    if (kiemTraNuocDi(xNew,yNew)){
        //thay doi coQuanNaokhong=0
        x=xNew;
        y=yNew;
    } else{
        cout<<"\nKhong the di duoc";
        return;
    }
}