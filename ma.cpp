#pragma once
#include "quanCo.h"
#include "banCo.h"
bool ma::kiemTraNuocDi(int xNew,int yNew){
    if (xNew>=0&&xNew<=7&&yNew>=0&&yNew<=7){
        if (xNew==(x-2)&&yNew==(y-1)) return true;
        else if (xNew==(x-2)&&yNew==(y+1)) return true;
        else if (xNew==(x-1)&&yNew==(y+2)) return true;
        else if (xNew==(x+1)&&yNew==(y+2)) return true;
        else if (xNew==(x+2)&&yNew==(y+1)) return true;
        else if (xNew==(x+2)&&yNew==(y-1)) return true;
        else if (xNew==(x+1)&&yNew==(y-2)) return true;
        else if (xNew==(x-1)&&yNew==(y-2)) return true;
        else return false;
    } else return false;
}
void ma::diChuyen(int xNew,int yNew){
    if (kiemTraNuocDi(xNew,yNew)){
        //thay doi coQuanNaokhong=0
        x=xNew;
        y=yNew;
    } else{
        cout<<"\nKhong the di duoc";
        return;
    }
} 