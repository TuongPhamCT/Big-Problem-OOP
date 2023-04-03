#pragma once
#include "Nguoi.h"
class NhanVien :
    public Nguoi
{
private:
    string maNhanVien;
public:
    void Nhap();
    void Xuat();
};

