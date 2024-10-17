#pragma once
#include "header.h"
class quanCo {
private:
    bool coQuanKhong;
	bool mau;
public:
	friend class banCo;
	friend ostream& operator <<(ostream& os, quanCo* a);
	bool getMau();
    bool getQuanCo();
	quanCo();
	quanCo(bool coQuanKhong, bool mau);
	~quanCo();
};
class chot :public quanCo {
private:
    char b = 'C';
public:
    friend ostream& operator <<(ostream& os, chot a);
    bool kiemTraNuocDi(int xNew,int yNew);
};

class xe :public quanCo {
private:
    char b = 'X';
public:
    friend ostream& operator <<(ostream& os, xe a);
    bool kiemTraNuocDi(int xNew,int yNew);
    void diChuyen(int xNew,int yNew);
};

class ma :public quanCo {
private:
    char b = 'M';
public:
    friend ostream& operator <<(ostream& os, ma a);
    bool kiemTraNuocDi(int xNew,int yNew);
    void diChuyen(int xNew,int yNew);
};

class tuong :public quanCo {
private:
    char b = 'T';
public:
    friend ostream& operator <<(ostream& os, tuong a);
    bool kiemTraNuocDi(int xNew,int yNew);
    void diChuyen(int xNew,int yNew);
};

class hau :public quanCo {
private:
    char b = 'H';
public:
    friend ostream& operator <<(ostream& os, hau a);
    bool kiemTraNuocDi(int xNew,int yNew);
    void diChuyen(int xNew,int yNew);
};

class vua :public quanCo {
private:
    char b = 'V';
public:
    friend ostream& operator <<(ostream& os, vua a);
    bool kiemTraNuocDi(int xNew,int yNew);
    void diChuyen(int xNew,int yNew);
};