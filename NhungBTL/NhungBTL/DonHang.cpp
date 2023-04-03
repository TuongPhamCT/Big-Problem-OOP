#include "DonHang.h"

void DonHang::Nhap()
{
	cout << "Nhap ma khach hang: ";
	cin >> this->maKhachHang;
	cout << "Nhap ma mat hang: ";
	cin >> this->maMatHang;
	cout << "Nhap so luong: ";
	cin >> this->soLuong;
	KhachHang temp;
	this->hoTen = temp.timTen(this->maKhachHang);
	Banh tam;
	this->thanhTien = this->soLuong * (tam.timGia(this->maMatHang)).getGia();
	cout << "Mua hang hoan tat" << endl;
}
void DonHang::Xuat()
{
	cout << "Ma khach hang: " << this->maKhachHang << endl;
	cout << "Ten khach hang: " << this->hoTen << endl;
	Banh tam1, tam2;
	tam2 = tam1.timGia(this->maMatHang);
	tam2.Xuat();
	cout << "So luong: " << this->soLuong << endl;
	cout << "Thanh tien: " << this->thanhTien << endl;
}
int DonHang::getSoLuong()
{
	return this->soLuong;
}
int DonHang::getThanhTien()
{
	return this->thanhTien;
}
int DonHang::getMaKhachHang()
{
	return this->maKhachHang;
}
string DonHang::getHoTen()
{
	return this->hoTen;
}
int DonHang::getMaMatHang()
{
	return this->maMatHang;
}
void DonHang::setSoLuong(int sl)
{
	this->soLuong = sl;
}
void DonHang::setThanhTien(int tt)
{
	this->thanhTien = tt;
}
void DonHang::setMaKhachHang(int mkh)
{
	this->maKhachHang = mkh;
}
void DonHang::setHoTen(string name)
{
	this->hoTen = name;
}
void DonHang::setMaMatHang(int code)
{
	this->maMatHang = code;
}
void DonHang::ghiDonHang()
{
	ofstream file("donhang.txt", ios::app);
	if (file.is_open()) {
		file << this->maKhachHang << endl;
		file << this->hoTen << endl;
		file << this->maMatHang << endl;
		file << this->soLuong << endl;
		file << this->thanhTien << endl;
		file.close();
		cout << "Them don hang thanh cong!" << endl;
	}
	else {
		cout << "Khong the mo file!" << endl;
	}
}

void DonHang::xuatdsDonHang()
{
	ifstream file("donhang.txt");
	if (file.is_open())
	{
		DonHang abc;
		while (file >> abc.maKhachHang) {
			file.ignore();
			getline(file, abc.hoTen);
			file >> abc.maMatHang;
			file >> abc.soLuong;
			file >> abc.thanhTien;			
			abc.Xuat();
			cout << endl;
		}
		file.close();
	}
	else
	{
		cout << "Khong the mo file!" << endl;
	}
}

void DonHang::xuatdsMuaHang(int matk)
{
	ifstream file("donhang.txt");
	if (file.is_open()) {
		DonHang abc;
		while (file >> abc.maKhachHang) {
			file.ignore();
			getline(file, abc.hoTen);
			file >> abc.maMatHang;
			file >> abc.soLuong;
			file >> abc.thanhTien;
			if (abc.maKhachHang == matk)
			{
				abc.Xuat();
				cout << endl;
			}
				
		}
		file.close();
	}
	else
	{
		cout << "Khong the mo file!" << endl;
	}
}

void DonHang::lapHoaDon(int matk)
{
	cout << endl;
	int sum = 0;
	ifstream file("donhang.txt");
	if (file.is_open()) {
		DonHang abc;
		while (file >> abc.maKhachHang) {
			file.ignore();
			getline(file, abc.hoTen);
			file >> abc.maMatHang;
			file >> abc.soLuong;
			file >> abc.thanhTien;
			if (abc.maKhachHang == matk)
			{
				abc.Xuat();
				sum += abc.thanhTien;
			}

		}
		file.close();
	}
	else
	{
		cout << "Khong the mo file!" << endl;
	}
	cout << "Tong tien: " << sum << endl;
	cout << endl;
}
