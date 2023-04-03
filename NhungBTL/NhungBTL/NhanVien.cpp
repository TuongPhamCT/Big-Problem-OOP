#include "NhanVien.h"

void NhanVien::Nhap()
{
	Nguoi::Nhap();
	cout << "Nhap ma nhan vien: ";
	getline(cin, this->maNhanVien);
}

void NhanVien::Xuat()
{
	cout << "Ma nhan vien: " << this->maNhanVien << endl;
	Nguoi::Xuat();
}