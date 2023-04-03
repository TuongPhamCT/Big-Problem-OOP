#pragma once
#include "Banh.h"
class BanhMan :
    public Banh
{
    BanhMan();
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

