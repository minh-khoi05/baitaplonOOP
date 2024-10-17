#pragma once
#include "quanCo.h"

class banCo {
private:
	quanCo* BC[8][8] = {NULL};
public:
	void nhapBC();
	void xuatBC();
    bool kiemTraAn(int x,int y,int xNew,int yNew);
};
banCo bc;