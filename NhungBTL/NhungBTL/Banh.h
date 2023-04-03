#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Banh
{
protected:
	string tenMatHang;
	int nhom;
	int maMatHang;
	int gia;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual string getTenMatHang();
	virtual int getMaMatHang();
	virtual int getGia();
	virtual int getNhom();
	virtual void setTenMatHang(string);
	virtual void setNhom(int);
	virtual void setMaMatHang(int);
	virtual void setGia(int);
	virtual void ghiBanh();
	virtual void xuatDSBanh();
	Banh timGia(int);
	void xoaBanh(int);
};

