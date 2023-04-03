#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "KhachHang.h"
#include "Banh.h"

using namespace std;

class DonHang
{
protected:
	int soLuong;
	int thanhTien;
	int maKhachHang;
	string hoTen;
	int maMatHang;
public:
	void Nhap();
	void Xuat();
	int getSoLuong();
	int getThanhTien();
	int getMaKhachHang();
	string getHoTen();
	int getMaMatHang();
	void setSoLuong(int);
	void setThanhTien(int);
	void setMaKhachHang(int);
	void setHoTen(string);
	void setMaMatHang(int);
	void ghiDonHang();
	void xuatdsDonHang();
	void xuatdsMuaHang(int);
	void lapHoaDon(int);
};

