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
	char soCMT[30];
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
	cout<<"Nhap so CMT : ";
	fflush(stdin);
	gets(soCMT);
	NS.nhap();
}
void NhanSu::xuat(){
	cout<<left<<setw(20)<<maNhanSu<<setw(20)<<hoTen<<setw(20)<<soCMT<<endl;
}


int main(){
	NhanSu *a;
	int n;
	cout<<"Nhap n : ";
	cin>>n;
	a=new NhanSu[n];
	for(int i=0;i<n;i++){
		cout<<"Nhap nhan su thu "<<i+1<<endl;
		a[i].nhap();
	}
	cout<<left<<setw(20)<<"\nMa Nhan Su"<<setw(20)<<"Ho ten "<<setw(20)<<"So cmt"<<endl;
	for(int i=0;i<n;i++){
		a[i].xuat();
	}
return 0;
}


