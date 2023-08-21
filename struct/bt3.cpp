#include <iostream>
#include <string.h>
using namespace std;

struct PhanSo {

	float TuSo;
	float MauSo;
};

void NhapPhanSo(PhanSo &ps) {

	cout << "\n Nhap tu so: ";
	cin >> ps.TuSo;

	cout << " Nhap mau so: ";
	cin >> ps.MauSo;
}

PhanSo CongHaiPhanSo(PhanSo ps1, PhanSo ps2) {
    PhanSo ps;

	if (ps1.MauSo == 0 || ps2.MauSo == 0) {
        cout <<"Eror";
	}
    ps.TuSo = ps1.TuSo * ps2.MauSo + ps1.MauSo * ps2.TuSo;
    ps.MauSo = ps1.MauSo * ps2.MauSo;
    return ps;
}

PhanSo TruHaiPhanSo(PhanSo ps1, PhanSo ps2) {
	PhanSo ps;

	if (ps1.MauSo == 0 || ps2.MauSo == 0) {
        cout <<"Eror";
	}
    ps.TuSo = ps1.TuSo * ps2.MauSo - ps1.MauSo * ps2.TuSo;
    ps.MauSo = ps1.MauSo * ps2.MauSo;
    return ps;
}

PhanSo NhanHaiPhanSo(PhanSo ps1, PhanSo ps2) {
	PhanSo ps;

	if (ps1.MauSo == 0 || ps2.MauSo == 0) {
        cout <<"Eror";
	}
    ps.TuSo = ps1.TuSo * ps2.TuSo;
    ps.MauSo = ps1.MauSo * ps2.MauSo;
    return ps;
}

PhanSo ChiaHaiPhanSo(PhanSo ps1, PhanSo ps2) {
	PhanSo ps;
	if (ps1.MauSo == 0 || ps2.MauSo == 0) {
        cout <<"Eror";
	}
    ps.TuSo = ps1.TuSo * ps2.MauSo;
	ps.MauSo = ps1.MauSo * ps2.TuSo;
    return ps;
}

void InPhanSo(PhanSo ps) {

	cout << ps.TuSo << "/" << ps.MauSo << endl;
}

int main() {

	PhanSo ps1;
	PhanSo ps2;

	NhapPhanSo(ps1);
	NhapPhanSo(ps2);

	cout << "\n----------------------------------------" << endl;
	cout << "Chon ('+') thi cong hai phan so" << endl;
	cout << "Chon ('-') thi tru hai phan so" << endl;
	cout << "Chon ('*') thi nhan hai phan so" << endl;
	cout << "Chon ('/') thi chia hai phan so" << endl;
	cout << "----------------------------------------" << endl;

	char PhepToan;
	cout << "\n Nhap vao su lua chon (+, -, *, /): ";
	cin >> PhepToan;

	cout << " Ket qua phep " << PhepToan << " hai phan so la " << ": ";

	switch (PhepToan) {

	case '+':
	{
		CongHaiPhanSo(ps1, ps2);
		InPhanSo(CongHaiPhanSo(ps1, ps2));
		break;
	}

	case '-':
	{
		TruHaiPhanSo(ps1, ps2);
		InPhanSo(TruHaiPhanSo(ps1, ps2));
		break;
	}

	case '*':
	{
		NhanHaiPhanSo(ps1, ps2);
		InPhanSo(NhanHaiPhanSo(ps1, ps2));
		break;
	}

	case '/':
	{
		ChiaHaiPhanSo(ps1, ps2);
		InPhanSo(ChiaHaiPhanSo(ps1, ps2));
		break;
	}

	default:
	{
		cout << "\n Ban nhap sai phep toan, xin moi nhap lai !" << endl;
	}
	}
	return 0;
}