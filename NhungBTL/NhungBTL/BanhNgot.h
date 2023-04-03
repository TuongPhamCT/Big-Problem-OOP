#pragma once
#include "Banh.h"
class BanhNgot :
    public Banh
{
public:
    BanhNgot();
    string getTenMatHang();
    int getMaMatHang();
    int getGia();
    void setTenMatHang(string);
    void setMaMatHang(int);
    void setGia(int);
    void Nhap();
    void Xuat();
    void ghiBanh();
    void xuatDSBanh();
};

