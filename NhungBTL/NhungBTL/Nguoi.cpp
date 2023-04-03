#include "Nguoi.h"

void Nguoi::Nhap()
{
	cin.ignore();
	cout << "Nhap ho va ten: ";
	getline(cin, this->hoTen);
	cout << "Nhap dia chi: ";
	getline(cin, this->diaChi);
	cout << "Nhap ngay sinh: ";
	getline(cin, this->ngaySinh);
	cout << "Nhap gioi tinh: ";
	getline(cin, this->gioiTinh);
	cout << "Nhap so dien thoai: ";
	getline(cin, this->soDienThoai);
}

void Nguoi::Xuat()
{
	cout << "Ho ten: " << this->hoTen << endl;
	cout << "Dia chi: " << this->diaChi << endl;
	cout << "Ngay sinh: " << this->ngaySinh << endl;
	cout << "Gioi tinh: " << this->gioiTinh << endl;
	cout << "So dien thoai: " << this->soDienThoai << endl;
}