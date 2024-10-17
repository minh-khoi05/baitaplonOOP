#pragma once
#include "banCo.h"
quanCo::quanCo(){
    mau = 0;
    coQuanKhong = 0;
}
quanCo::quanCo(bool coQuanKhong, bool mau){
    this->coQuanKhong=coQuanKhong;
    this->mau=mau;
}
quanCo::~quanCo(){}
void banCo::nhapBC() {
    for (int i = 0; i < 8; i++) {
        BC[1][i]=new chot;
        BC[1][i]->mau=1;
        BC[6][i]=new chot;
        BC[6][i]->mau=0;
    }
    BC[0][0] = BC[0][7] = new xe;
    BC[0][0]->mau = BC[0][7]->mau = 1;
    BC[7][0] = BC[7][7] = new xe;
    BC[7][0]->mau = BC[7][7]->mau = 0;

    BC[0][1] = BC[0][6] = new ma;
    BC[0][1]->mau = BC[0][6]->mau = 1;

    BC[7][1] = BC[7][6] = new ma;
    BC[7][1]->mau = BC[7][6]->mau = 0;

    BC[0][2] = BC[0][5] = new tuong;
    BC[0][2]->mau = BC[0][5]->mau = 1;

    BC[7][2] = BC[7][5] = new tuong;
    BC[7][2]->mau = BC[7][5]->mau = 0;

    BC[0][3] = new hau;
    BC[0][3]->mau = 1;

    BC[7][4] = new hau;
    BC[7][4]->mau = 0;

    BC[0][4] = new vua;
    BC[0][4]->mau = 1;

    BC[7][3] = new vua;
    BC[7][3]->mau = 0;
}
ostream& operator <<(ostream& os, chot p) {
    os << p.b;
    return os;
}
ostream& operator <<(ostream& os, xe p) {
    os << p.b;
    return os;
}
ostream& operator <<(ostream& os, ma p) {
    os << p.b;
    return os;
}
ostream& operator <<(ostream& os, tuong p) {
    os << p.b;
    return os;
}
ostream& operator <<(ostream& os, hau p) {
    os << p.b;
    return os;
}
ostream& operator <<(ostream& os, vua p) {
    os << p.b;
    return os;
}
ostream& operator <<(ostream& os, quanCo* p) {
    if (p && p->getMau()) {
        os << " " << p << "t" << " ";
        return os;
    }
    else if (p && !p->getMau()) {
        os << " " << p << "d" << " ";
        return os;
    }
    os << "    ";
    return os;
}
void banCo::xuatBC() {
    cout << "-----------------------------------------\n";
    for (int i = 0; i<8; i++){
        cout << "|";
        for (int j = 0; j < 8; j++) {
            cout << BC[i][j] << "|";
        }
        cout << endl;
        cout << "-----------------------------------------\n";
    }
}
bool quanCo::getQuanCo() {
    return this->coQuanKhong;
}
bool quanCo::getMau(){
    return this->mau;
}
bool banCo::kiemTraAn(int x,int y,int xNew,int yNew){
    if (BC[x][y]->mau==BC[xNew][yNew]->mau) return 0;
    return 1;
}