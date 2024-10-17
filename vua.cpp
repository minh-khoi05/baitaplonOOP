#pragma once
#include "quanCo.h"
#include "banCo.h"
bool vua::kiemTraNuocDi(int xNew,int yNew){
    if (xNew>=0&&xNew<=7&&yNew>=0&&yNew<=7){
        if ()
    } else return false;
}
void vua::diChuyen(int xNew,int yNew){
    if (kiemTraNuocDi(xNew,yNew)){
        //thay doi coQuanNaokhong=0
        x=xNew;
        y=yNew;
    } else{
        cout<<"\nKhong the di duoc";
        return;
    }
}    