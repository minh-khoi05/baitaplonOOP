#pragma once
#include "quanCo.h"
#include "banCo.h"
bool xe::kiemTraNuocDi(int xNew,int yNew){
    if (xNew>=0&&xNew<=7&&yNew>=0&&yNew<=7){
        //di len tren
        if (xNew<x&&yNew==y){
            for (int i = x-1; i > xNew; i--) {
                if (bc.getQuanCo(i,y))
                    return 0;
            }
            return 1;
        }//di xuong duoi
        else if (xNew>x&&yNew==y){
            for (int i = x+1; i < xNew; i++) {
                if (bc.getQuanCo(i,y))
                    return 0;
            }
            return 1;
        }//di qua phai
        else if (xNew==x&&yNew>y){
            for (int i = y+1; i < yNew; i++) {
                if (bc.getQuanCo(x,i))
                    return 0;
            }
            return 1;
        }//di qua trai
        else if (xNew==x&&yNew<y){
            for (int i = y-1; i > yNew; i--) {
                if (bc.getQuanCo(x,i))
                    return 0;
            }
            return 1;
        } else return 0;
    } else return false;
}
void xe::diChuyen(int xNew,int yNew){
    if (kiemTraNuocDi(xNew,yNew)){
        //thay doi coQuanNaokhong=0
        if (bc.getQuanCo(xNew,yNew)){
            if ( bc.kiemTraAn(x,y,xNew,yNew)){
                x=xNew;
                y=yNew;
                return;
            } else  {
                cout<<"\nKhong the di duoc";
                return;
            }
        }
        x=xNew;
        y=yNew;
    } else{
        cout<<"\nKhong the di duoc";
    }
}