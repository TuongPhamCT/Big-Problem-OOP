#include "BanhNgot.h"

BanhNgot::BanhNgot()
{
	this->nhom = 0;
}
string BanhNgot::getTenMatHang()
{
	return this->tenMatHang;
}
int BanhNgot::getMaMatHang()
{
	return this->maMatHang;
}
int BanhNgot::getGia()
{
	return this->gia;
}
void BanhNgot::setTenMatHang(string name)
{
	this->tenMatHang = name;
}
void BanhNgot::setMaMatHang(int code)
{
	this->maMatHang = code;
}
void BanhNgot::setGia(int price)
{
	this->gia = price;
}
void BanhNgot::Nhap()
{
	cout << "Nhap ten mat hang: ";
	getline(cin, this->tenMatHang);
	cout << "Nhap ma mat hang: ";
	cin >> this->maMatHang;
	cout << "Nhap gia ban: ";
	cin >> this->gia;
}
void BanhNgot::Xuat()
{
	cout << "Ten mat hang: " << this->tenMatHang << endl;
	cout << "Ma mat hang: " << this->maMatHang << endl;
	cout << "Nhom: 0" << endl;
	cout << "Gia ban: " << this->gia << endl;
}
void BanhNgot::ghiBanh()
{
	int temp = 0;
	ofstream file("banh.txt", ios::app);
	if (file.is_open()) {
		file << this->maMatHang << endl;
		file << this->tenMatHang << endl;
		file << temp << endl;
		file << this->gia << endl;
		file.close();
		cout << "Them banh man thanh cong!" << endl;
	}
	else {
		cout << "Khong the mo file!" << endl;
	}
}
void BanhNgot::xuatDSBanh()
{
	ifstream file("banh.txt");
	if (file.is_open()) {
		Banh abc;
		string temp;
		int tam;
		while (file >> tam) {
			abc.setMaMatHang(tam);
			getline(file, temp);
			abc.setTenMatHang(temp);
			file >> tam;
			abc.setNhom(tam);
			file >> tam;
			abc.setGia(tam);
			if (abc.getNhom() == 0)
			{
				abc.Xuat();
				cout << endl;
			}
		}
		file.close();
	}
	else {
		cout << "Khong the mo file!" << endl;
	}
}