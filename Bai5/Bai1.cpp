#include<bits/stdc++.h>
using namespace std;
class NCC{
	char maNCC[30];
	char tenNCC[30];
	char dcNCC[30];
public:
	void nhap();
	void xuat();
};
void NCC::nhap(){
	cout<<"Nhap ma NCC : ";
	fflush(stdin);
	gets(maNCC);
	cout<<"Nhap ten NCC : ";
	fflush(stdin);
	gets(tenNCC);
	cout<<"Nhap dia chi NCC : ";
	fflush(stdin);
	gets(dcNCC);

}
void NCC::xuat(){
	cout<<"Ma NCC : "<<maNCC<<setw(50)<<"Ten NCC : "<<tenNCC<<endl;
	cout<<"Dia chi NCC : "<<dcNCC<<endl;
}
class Hang{
	char tenHang[30];
	float donGia;
	int soLuong;
public:
	void nhap();
	void xuat();
};
void Hang::nhap(){
	cout<<"Nhap ten Hang : ";
	fflush(stdin);
	gets(tenHang);
	cout<<"Nhap don gia : ";
	cin>>donGia;
	cout<<"Nhap so luong : ";
	cin>>soLuong;
}
void Hang::xuat(){
	cout<<tenHang<<setw(20)<<donGia<<setw(15)<<soLuong<<setw(15)<<donGia*soLuong<<endl;
}
class Phieu{
	char maPhieu[30];
	char ngay[30];
	NCC x;
	Hang *y;
	int n;
public:
	void nhap();
	void xuat();
};
void Phieu::nhap(){
	cout<<"Nhap ma phieu : ";
	fflush(stdin);
	gets(maPhieu);
	cout<<"Nhap ngay : ";
	fflush(stdin);
	gets(ngay);
	x.nhap();
	cout<<"Nhap n : ";
	cin>>n;
	y=new Hang[n];
	for(int i=0;i<n;i++){
		cout<<"Nhap hang thu "<<i+1<<endl;
		y[i].nhap();
	}
}
void Phieu::xuat(){
	float s=0;
	cout<<setw(30)<"Phieu nhap hang : "<<endl;
	cout<<"Ma Phieu: "<<maPhieu<<setw(40)<<"Ngay lap : "<<ngay<<endl;
	x.xuat();
	cout<<"Ten Hang "<<setw(20)<<"Don gia"<<setw(15)<<"So luong"<<setw(15)<<"Thanh tien"<<endl;
	for(int i=0;i<n;i++){
		y[i].xuat();
		s+=y[i].donGia*y[i].soLuong;
	}
	cout<<setw(40)<<"Thanh tien : "<<s;
	
}
int main(){
	Phieu a;
	a.nhap();
	a.xuat();
return 0;
}

