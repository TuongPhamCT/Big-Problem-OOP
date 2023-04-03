#include "BanhMan.h"

BanhMan::BanhMan()
{
	this->nhom = 1;
}
string BanhMan::getTenMatHang()
{
	return this->tenMatHang;
}
int BanhMan::getMaMatHang()
{
	return this->maMatHang;
}
int BanhMan::getGia()
{
	return this->gia;
}
void BanhMan::setTenMatHang(string name)
{
	this->tenMatHang = name;
}
void BanhMan::setMaMatHang(int code)
{
	this->maMatHang = code;
}
void BanhMan::setGia(int price)
{
	this->gia = price;
}
void BanhMan::Nhap()
{
	cout << "Nhap ten mat hang: ";
	getline(cin, this->tenMatHang);
	cout << "Nhap ma mat hang: ";
	cin >> this->maMatHang;
	cout << "Nhap gia ban: ";
	cin >> this->gia;
}
void BanhMan::Xuat()
{
	cout << "Ten mat hang: " << this->tenMatHang << endl;
	cout << "Ma mat hang: " << this->maMatHang << endl;
	cout << "Nhom: 1" << endl;
	cout << "Gia ban: " << this->gia << endl;
}
void BanhMan::ghiBanh()
{
	int temp = 1;
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
void BanhMan::xuatDSBanh()
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
			if (abc.getNhom() == 1)
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