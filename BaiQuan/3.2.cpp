#include<bits/stdc++.h>
using namespace std;
class NSX{
	char maNSX[30];
	char tenNSX[30];
	char dcNSX[30];
public:
	void nhap();
	void xuat();
};
void NSX::nhap(){
	cout<<"Nhap ma NSX : ";
	fflush(stdin);
	gets(maNSX);
	cout<<"Nhap ten NSX : ";
	fflush(stdin);
	gets(tenNSX);
	cout<<"Nhap dia chi NSX : ";
	fflush(stdin);
	gets(dcNSX);
}
void NSX::xuat(){
	cout<<"Ma NSX : "<<maNSX<<endl;
	cout<<"Ten NSX : "<<tenNSX<<endl;
	cout<<"Dia Chi NSX : "<<dcNSX<<endl;
	
}
class Hang{
	char maHang[30];
	char tenHang[30];
	NSX x;
public:
	void nhap();
	void xuat();
};
void Hang::nhap(){
	cout<<"Nhap ma hang : ";
	fflush(stdin);
	gets(maHang);
	cout<<"Nhap ten hang : ";
	fflush(stdin);
	gets(tenHang);
	x.nhap();
}
void Hang::xuat(){
	cout<<"Ma hang : "<<maHang<<endl;
	cout<<"Ten hang : "<<tenHang<<endl;
	x.xuat();
}
int main(){
	Hang x;
	x.nhap();
	cout<<"\nThong Tin \n";
	x.xuat();
return 0;
}

