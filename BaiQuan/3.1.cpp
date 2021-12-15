#include<bits/stdc++.h>
using namespace std;
class Date{
	int D,M,Y;
public:
	void nhap();
	void xuat();
};
void Date::nhap(){
	cout<<"Nhap ngay : ";
	cin>>D;
	cout<<"Nhap thang : ";
	cin>>M;
	cout<<"Nhap nam : ";
	cin>>Y;
}
void Date::xuat(){
	cout<<"Ngay sinh : "<<D<<" / "<<M<<" / "<<Y<<endl;
}
class NhanSu{
	char maNhanSu[30];
	char hoTen[30];
	Date NS;
public:
	void nhap();
	void xuat();
};
void NhanSu::nhap(){
	cout<<"Nhap ma nhan su : ";
	fflush(stdin);
	gets(maNhanSu);
	cout<<"Nhap ho ten : ";
	fflush(stdin);
	gets(hoTen);
	NS.nhap();
}
void NhanSu::xuat(){
	cout<<"Ma nhan su : "<<maNhanSu<endl; 
	cout<<"Ho Ten : "<<hoTen<<endl;
	NS.xuat();
}


int main(){
	Date a;
	a.nhap();
	a.xuat();
return 0;
}

