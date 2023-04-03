#pragma once
#include <iostream>
#include <string>

using namespace std;

class Nguoi
{
protected:
	string hoTen, diaChi, ngaySinh, gioiTinh, soDienThoai;
public:
	virtual void Nhap();
	virtual void Xuat();
};

