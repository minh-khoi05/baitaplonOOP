#pragma once
#include "quanCo.h"
#include "banCo.h"
bool tuong::kiemTraNuocDi(int xNew,int yNew){
    if (xNew>=0&&xNew<=7&&yNew>=0&&yNew<=7){
        int i=x,j=y;
        if (xNew<x&&yNew<y){
            while(i!=0&&j!=0){
                i--;
                j--;
                if (xNew==i&&yNew==j){
                    return 1;
                }else if(bc.getQuanCo(i,j))
                    return 0;
            }
            return 0;
        } else if (xNew>x&&yNew<y){
            while(i!=7&&j!=0){
                i++;
                j--;
                if (xNew==i&&yNew==j){
                    return 1;
                }else if(bc.getQuanCo(i,j))
                    return 0;
            }
            return 0;
        } else if (xNew<x&&yNew>y){
            while(i!=0&&j!=7){
                i--;
                j++;
                if (xNew==i&&yNew==j){
                    return 1;
                }else if(bc.getQuanCo(i,j))
                    return 0;
            }
            return 0;
        } else if (xNew>x&&yNew>y){
            while(i!=7&&j!=7){
                i++;
                j++;
                if (xNew==i&&yNew==j){
                    return 1;
                }else if(bc.getQuanCo(i,j))
                    return 0;
            }
            return 0;
        } else return false;
    } else return false;
}
void tuong::diChuyen(int xNew,int yNew){
    if (kiemTraNuocDi(xNew,yNew)){
        //thay doi coQuanNaokhong=0
        x=xNew;
        y=yNew;
    } else{
        cout<<"\nKhong the di duoc";
        return;
    }
}