#include<bits/stdc++.h>
using namespace std;
class Hang{
	char maHang[30];
	char tenHang[30];
	float donGia;
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
	cout<<"Nhap don gia : ";
	cin>>donGia;
}
void Hang::xuat(){
	
	cout<<maHang<<setw(20)<<tenHang<<setw(20)<<donGia<<endl;
}
class Phieu{
	char maPhieu[30];
	int n;
	Hang x[];
public:
	void nhap();
	void xuat();
};
void Phieu::nhap(){
	cout<<"Nhap ma phieu : ";
	fflush(stdin);
	gets(maPhieu);
	cout<<"Nhap n : ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Nhap thong tin mat hang thu "<<i+1<<endl;
		x[i].nhap();
	}
}
void Phieu::xuat(){
	cout<<"\n\nMa phieu : "<<maPhieu<<endl<<endl;
	cout<<"Ma Hang "<<setw(20)<<"Ten Hang "<<setw(20)<<"Don gia "<<endl;
	for(int i=0;i<n;i++){
		x[i].xuat();
	}
}
int main(){
	Phieu a;
	a.nhap();
	a.xuat();
return 0;
}

