#include<bits/stdc++.h>
using namespace std;
class QuanLy{
	char maQuanLy[30];
	char hoTen[30];
	
public:
	void nhap();
	void xuat();
};
void QuanLy::nhap(){
	cout<<"Nhap ma quan ly : ";
	fflush(stdin);
	gets(maQuanLy);
	cout<<"Nhap ho ten : ";
	fflush(stdin);
	gets(hoTen);
}
void QuanLy::xuat(){
	cout<<"\nThong tin nguoi quan ly\n";
	cout<<"Ma quan ly : "<<maQuanLy<<endl;
	cout<<"Ho Ten : "<<hoTen<<endl<<endl;
}
class May{
	char maMay[30];
	char kieuMay[30];
	char tinhTrang[30];
public:
	void nhap();
	void xuat();
};
void May::nhap(){
	cout<<"Nhap ma may : ";
	fflush(stdin);
	gets(maMay);
	cout<<"Nhap ten may : ";
	fflush(stdin);
	gets(kieuMay);
	cout<<"Nhap tinh trang : ";
	fflush(stdin);
	gets(tinhTrang);
}
void May::xuat(){
	cout<<maMay<<setw(20)<<kieuMay<<setw(20)<<tinhTrang<<endl;
}
class PhongMay{
	char maPhong[30];
	char tenPhong[30];
	float dienTich;
	QuanLy x;
	int n;
	May y[];
	
public:
	void nhap();
	void xuat();
};
void PhongMay::nhap(){
	cout<<"Nhap ma Phong : ";
	fflush(stdin);
	gets(maPhong);
	cout<<"Nhap ten Phong : ";
	fflush(stdin);
	gets(tenPhong);
	cout<<"Nhap dien tich : ";
	cin>>dienTich;
	x.nhap();
	cout<<"Nhap n : ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Nhap thong tin may thu "<<i+1<<endl;
		y[i].nhap();
	}
}
void PhongMay::xuat(){
	cout<<"\nMa Phong : "<<maPhong<<endl;
	cout<<"Ten Phong : "<<tenPhong<<endl;
	cout<<"Dien Tich : "<<dienTich<<endl;
	x.xuat();
	cout<<"Ma may "<<setw(20)<<"Kieu may "<<setw(20)<<"Tinh Trang"<<endl;
	for(int i=0;i<n;i++){
		y[i].xuat();
	}
}

int main(){
	PhongMay a;
	a.nhap();
	a.xuat();
return 0;
}

