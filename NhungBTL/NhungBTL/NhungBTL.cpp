#include <iostream>
#include "Banh.h"
#include "KhachHang.h"
#include "DonHang.h"

using namespace std;

int main()
{
	bool t = true;
	Banh dsbanh;
	KhachHang dskh;
	DonHang dsdh;
	while (t)
	{
		cout << "1. Giao dien Quan ly mat hang" << endl;
		cout << "2. Giao dien Quan ly khach hang" << endl;
		cout << "3. Giao dien Quan ly danh sach mua hang" << endl;
		cout << "4. Lap hoa don mua hang cho khach hang" << endl;
		cout << "0. Thoat khoi chuong trinh." << endl;
		cout << "--------------------------------------------------------------" << endl;
		cout << "Xin moi lua chon: ";
		int chon1;
		cin >> chon1;
		bool t2 = true;
		switch (chon1)
		{
		case 1:
		{
			while (t2)
			{
				cout << "1. Them mat hang" << endl;
				cout << "2. Xoa mat hang" << endl;
				cout << "3. Hien thi danh sach mat hang" << endl;
				cout << "0. Quay lai" << endl;
				cout << "----------------------------------------------------------------" << endl;
				cout << "Xin moi lua chon: ";
				int chon2;
				cin >> chon2;
				switch (chon2)
				{
				case 1:
				{
					dsbanh.Nhap();
					dsbanh.ghiBanh();
					break;
				}
				case 2:
				{
					int maxoa;
					cout << "Nhap ma mat hang can xoa: ";
					cin >> maxoa;
					dsbanh.xoaBanh(maxoa);
					break;
				}
				case 3:
				{
					dsbanh.xuatDSBanh();
					break;
				}
				case 0:
				{
					t2 = false;
					break;
				}
				default:
				{
					cout << "Nhap loi!" << endl;
					break;
				}
				}
			}
			break;
		}
		case 2:
		{
			while (t2)
			{
				cout << "1. Them khach hang" << endl;
				cout << "2. Xoa khach hang" << endl;
				cout << "3. Hien thi danh sach khach hang" << endl;
				cout << "0. Quay lai" << endl;
				cout << "----------------------------------------------------------------" << endl;
				cout << "Xin moi lua chon: ";
				int chon2;
				cin >> chon2;
				switch (chon2)
				{
				case 1:
				{
					int m;
					cout << "Them khach hang moi (0: khong, 1: co): ";
					cin >> m;
					if (m == 1)
					{
						dskh.Nhap();
						dskh.ghiKhachHang();
					}
					cout << "Khach hang co mua hang khong?" << endl;
					cout << "Neu co hay bam phim 1 de lap don mua hang." << endl;
					cout << "Nhap so bat ky neu khach hang khong mua hang." << endl << endl;
					int mua;
					cin >> mua;
					if (mua == 1)
					{
						dsdh.Nhap();
						dsdh.ghiDonHang();
					}
					break;
				}
				case 2:
				{
					int maxoa;
					cout << "Nhap ma khach hang can xoa: ";
					cin >> maxoa;
					dskh.xoaKhachHang(maxoa);
					break;
				}
				case 3:
				{
					dskh.xuatDSKH();
					break;
				}
				case 0:
				{
					t2 = false;
					break;
				}
				default:
				{
					cout << "Nhap loi!" << endl;
					break;
				}
				}
			}
			break;
		}
		case 3:
		{
			while (t2)
			{
				cout << "1. Danh sach khach hang mua hang" << endl;
				cout << "2. Xuat danh sach mua hang" << endl;
				cout << "0. Quay lai" << endl;
				cout << "----------------------------------------------------------------" << endl;
				cout << "Xin moi lua chon: ";
				int chon2;
				cin >> chon2;
				switch (chon2)
				{
				case 1:
				{
					dsdh.xuatdsDonHang();
					break;
				}
				case 2:
				{
					int need;
					cout << "Nhap ma khach hang can xuat danh sach mua hang: ";
					cin >> need;
					dsdh.xuatdsMuaHang(need);
					break;
				}
				case 0:
				{
					t2 = false;
					break;
				}
				default:
				{
					cout << "Nhap loi!" << endl;
					break;
				}
				}
			}
			break;
		}
		case 4:
		{
			int need;
			cout << "Nhap ma khach hang can lap hoa don: ";
			cin >> need;
			dsdh.lapHoaDon(need);
			break;
		}
		case 0:
		{
			cout << "Chao tam biet!" << endl;
			t = false;
			break;
		}
		default:
		{
			cout << "Nhap loi!" << endl;
			break;
		}
		}

	}

	//Xoa noi dung cua cac file txt sau khi ket thuc chuong trinh
	ofstream ofs("khachhang.txt", std::ofstream::out);
	ofs.close();
	ofstream of("mathang.txt", std::ofstream::out);
	ofs.close();
	ofstream ofse("donhang.txt", std::ofstream::out);
	ofs.close();
	
	return 0;
}