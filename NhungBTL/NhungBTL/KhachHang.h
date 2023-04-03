#pragma once
#include "Nguoi.h"
#include <fstream>

class KhachHang :
    public Nguoi
{
private:
    static int maKH;
    int maKHienTai;
public:
    KhachHang();
    int getMaKH() const;
    string getHoTen();
    string getDiaChi();
    string getNgaySinh();
    string getGioiTinh();
    string getSoDienThoai();
    void setHoTen(string);
    void setDiaChi(string);
    void setGioiTinh(string);
    void setSoDienThoai(string);
    void setMaKH(int);
    void setNgaySinh(string);
    void Nhap();
    void Xuat();
    void ghiKhachHang();
    void xuatDSKH();
    string timTen(int);
    void xoaKhachHang(int);
};

