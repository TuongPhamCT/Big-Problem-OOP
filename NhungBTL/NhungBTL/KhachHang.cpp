#include "KhachHang.h"

int KhachHang::maKH = 99;

KhachHang::KhachHang()
{
}

int KhachHang::getMaKH() const
{
	return maKHienTai;
}

string KhachHang::getHoTen()
{
	return this->hoTen;
}

string KhachHang::getDiaChi()
{
	return this->diaChi;
}

string KhachHang::getNgaySinh()
{
	return this->ngaySinh;
}

string KhachHang::getGioiTinh()
{
	return this->gioiTinh;
}

string KhachHang::getSoDienThoai()
{
	return this->soDienThoai;
}

void KhachHang::setHoTen(string name)
{
	this->hoTen = name;
}
void KhachHang::setDiaChi(string address)
{
	this->diaChi = address;
}
void KhachHang::setGioiTinh(string sexual)
{
	this->gioiTinh = sexual;
}
void KhachHang::setSoDienThoai(string phone)
{
	this->soDienThoai = phone;
}
void KhachHang::setMaKH(int matk)
{
	this->maKHienTai = matk;
}
void KhachHang::setNgaySinh(string birth)
{
	this->ngaySinh = birth;
}
void KhachHang::Nhap()
{
	Nguoi::Nhap();
	maKH++;
	maKHienTai = maKH;
}
void KhachHang::Xuat()
{
	cout << "Ma khach hang: " << this->maKHienTai << endl;
	Nguoi::Xuat();
}
void KhachHang::ghiKhachHang()
{
	ofstream file("khachhang.txt", ios::app);
	if (file.is_open()) {
		file << this->maKHienTai << endl;
		file << this->hoTen << endl;
		file << this->diaChi << endl;
		file << this->ngaySinh << endl;
		file << this->gioiTinh << endl;
		file << this->soDienThoai << endl;
		file.close();
		cout << "Them khach hang thanh cong!" << endl;
	}
	else {
		cout << "Khong the mo file!" << endl;
	}
}

string KhachHang::timTen(int maTK)
{
	ifstream file("khachhang.txt");
	if (file.is_open()) {
		KhachHang abc;
		while (file >> abc.maKHienTai) {
			file.ignore();
			getline(file, abc.hoTen);
			getline(file, abc.diaChi);
			getline(file, abc.ngaySinh);
			getline(file, abc.gioiTinh);
			getline(file, abc.soDienThoai);
			if (maTK == abc.maKHienTai)
				return abc.hoTen;
		}
		file.close();
	}
	return "";
}

void KhachHang::xoaKhachHang(int matk)
{
	string filename = "khachhang.txt";
	ifstream ifs(filename);
	ofstream ofs("temp.txt");
	KhachHang abc;
	while (ifs >> abc.maKHienTai) {
		ifs.ignore();
		getline(ifs, abc.hoTen);
		getline(ifs, abc.diaChi);
		getline(ifs, abc.ngaySinh);
		getline(ifs, abc.gioiTinh);
		getline(ifs, abc.soDienThoai);
		if (abc.maKHienTai != matk)
		{
			ofs << abc.maKHienTai << endl;
			ofs << abc.hoTen << endl;
			ofs << abc.diaChi << endl;
			ofs << abc.ngaySinh << endl;
			ofs << abc.gioiTinh << endl;
			ofs << abc.soDienThoai << endl;
		}
	}

	ifs.close();
	ofs.close();

	remove(filename.c_str());
	rename("temp.txt", filename.c_str());
}

void KhachHang::xuatDSKH()
{
	ifstream file("khachhang.txt");
	if (file.is_open()) {
		KhachHang abc;
		while (file >> abc.maKHienTai) {
			file.ignore();
			getline(file, abc.hoTen);
			getline(file, abc.diaChi);
			getline(file, abc.ngaySinh);
			getline(file, abc.gioiTinh);
			getline(file, abc.soDienThoai);
			abc.Xuat();
			cout << endl;
		}
		file.close();
	}
	else {
		cout << "Khong the mo file!" << endl;
	}
}
