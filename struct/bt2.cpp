#include<iostream>
#include<math.h>
using namespace std;

struct TOADO {
	float tungdo;
	float hoanhdo;
};

void NhapToaDo(TOADO &d)
{
	cout<<"Nhap Hoanh Do: "; cin>> d.hoanhdo;
	cout<<"Nhap Tung Do: "; cin>> d.tungdo;
}

void XuatToaDo(TOADO d)
{
	cout<<"("<<d.hoanhdo<<","<<d.tungdo<<")";
}

double KhoangCach(TOADO d1, TOADO d2)
{
	double kc;
	kc = sqrt(double(d1.hoanhdo-d2.hoanhdo)*(d1.hoanhdo-d2.hoanhdo)+(d1.tungdo-d2.tungdo)*(d1.tungdo-d2.tungdo));
	return kc;
}

int main() {
	TOADO  TOADO1, TOADO2;
	double KhoangCach1;
	cout<<"Toa do diem A la :\n";
	NhapToaDo(TOADO1);

	cout<<"\nToa do diem B la :\n";
	NhapToaDo(TOADO2);

	cout<<"\nToa do diem A la: \n";
	XuatToaDo(TOADO1);

	cout<<"\nToa do diem B la: \n";
	XuatToaDo(TOADO2);

	KhoangCach1=KhoangCach(TOADO1,TOADO2);
	cout<<"\nKhoang cach giua diem A va diem B la: "<<KhoangCach1;
    return 0;
}