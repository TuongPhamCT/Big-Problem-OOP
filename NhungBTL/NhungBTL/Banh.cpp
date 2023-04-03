#include "Banh.h"

void Banh::Nhap()
{
	cin.ignore();
	cout << "Nhap ten mat hang: ";
	getline(cin, this->tenMatHang);
	cout << "Nhap ma mat hang: ";
	cin >> this->maMatHang;
	cout << "Nhap nhom hang (0: Banh ngot; 1: Banh man): ";
	cin >> this->nhom;
	cout << "Nhap gia ban: ";
	cin >> this->gia;
}
void Banh::Xuat()
{
	cout << "Ma mat hang: " << this->maMatHang << endl;
	cout << "Ten mat hang: " << this->tenMatHang << endl;
	if (this->nhom == 0)
	{
		cout << "Nhom hang: Banh ngot" << endl;
	}
	else
	{
		cout << "Nhom hang: Banh man" << endl;
	}
	cout << "Gia ban: " << this->gia << endl;
}
string Banh::getTenMatHang()
{
	return this->tenMatHang;
}
int Banh::getMaMatHang()
{
	return this->maMatHang;
}
int Banh::getGia()
{
	return this->gia;
}
int Banh::getNhom()
{
	return this->nhom;
}
void Banh::setTenMatHang(string name)
{
	this->tenMatHang = name;
}
void Banh::setNhom(int kind)
{
	this->nhom = kind;
}
void Banh::setMaMatHang(int code)
{
	this->maMatHang = code;
}
void Banh::setGia(int price)
{
	this->gia = price;
}

void Banh::ghiBanh()
{
	ofstream file("mathang.txt", ios::app);
	if (file.is_open()) {
		file << this->maMatHang << endl;
		file << this->tenMatHang << endl;
		file << this->nhom << endl;
		file << this->gia << endl;
		file.close();
		cout << "Them mat hang thanh cong!" << endl;
	}
	else {
		cout << "Khong the mo file!" << endl;
	}
}

void Banh::xuatDSBanh()
{
	ifstream file("mathang.txt");
	if (file.is_open()) {
		Banh abc;
		while (file >> abc.maMatHang) {
			file.ignore();
			getline(file, abc.tenMatHang);
			file >> abc.nhom;
			file >> abc.gia;
			abc.Xuat();
			cout << endl;
		}
		file.close();
	}
	else {
		cout << "Khong the mo file!" << endl;
	}
}

Banh Banh::timGia(int mabanh)
{
	ifstream file("mathang.txt");
	if (file.is_open()) {
		Banh abc;
		while (file >> abc.maMatHang) {
			file.ignore();
			getline(file, abc.tenMatHang);
			file >> abc.nhom;
			file >> abc.gia;
			if (abc.maMatHang == mabanh)
			{
				return abc;
			}
		}
		file.close();
	}
	else {
		cout << "Khong the mo file!" << endl;
	}
}

void Banh::xoaBanh(int mabanh)
{
	string filename = "mathang.txt";
	ifstream ifs(filename);
	ofstream ofs("temp.txt");
	Banh abc;
	while (ifs >> abc.maMatHang) {
		ifs.ignore();
		getline(ifs, abc.tenMatHang);
		ifs >> abc.nhom;
		ifs >> abc.gia;
		if (abc.maMatHang != mabanh)
		{
			ofs << abc.maMatHang << endl;
			ofs << abc.tenMatHang << endl;
			ofs << abc.nhom << endl;
			ofs << abc.gia << endl;
		}
	}

	ifs.close();
	ofs.close();

	remove(filename.c_str());
	rename("temp.txt", filename.c_str());
}