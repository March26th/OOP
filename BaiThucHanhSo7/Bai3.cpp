#include<bits/stdc++.h>
using namespace std;

class Khoa{
	char maKhoa[20];
	char tenKhoa[20];
	char truongKhoa[20];
	friend class TruongDH;
};
class Ban{
	char maBan[20];
	char tenBan[20];
	char ngayThanhLap[20];
	friend class TruongDH;
};
class Truong{
protected:
	char maTruong[20];
	char tenTruong[20];
	char diaChi[20];
public:
	void nhap();
	void xuat();
};
class TruongDH:public Truong{
	Khoa *x;
	int n;
	Ban *y;
	int m;
public:
	void nhap();
	void xuat();
};
void Truong::nhap(){
	cout<<"Nhap ma truong : ";fflush(stdin);gets(maTruong);
	cout<<"Nhap ten truong : ";fflush(stdin);gets(tenTruong);
	cout<<"Dia chi : ";fflush(stdin);gets(diaChi);
}
void Truong::xuat(){
	cout<<"Ma truong : "<<maTruong<<endl;
	cout<<"Ten truong : "<<tenTruong<<endl;
	cout<<"Dia chi : "<<diaChi<<endl;
}
void TruongDH::nhap(){
	Truong::nhap();
	cout<<"Nhap n : ";cin>>n;
	x=new Khoa[n];
	for(int i=0;i<n;i++){
		cout<<"Nhap khoa thu "<<i+1<<endl;;
		cout<<"Nhap ma khoa : ";fflush(stdin);gets(x[i].maKhoa);
		cout<<"Nhap ten khoa : ";fflush(stdin);gets(x[i].tenKhoa);
		cout<<"Nhap truong khoa : ";fflush(stdin);gets(x[i].truongKhoa);
	}
	cout<<"Nhap m : ";cin>>m;
	y=new Ban[m];
	for(int i=0;i<m;i++){
		cout<<"Nhap ban thu "<<i+1<<endl;
		cout<<"Nhap ma ban : ";fflush(stdin);gets(y[i].maBan);
		cout<<"Nhap ten ban : ";fflush(stdin);gets(y[i].tenBan);
		cout<<"Nhap ngay thanh lap : ";fflush(stdin);gets(y[i].ngayThanhLap);
	}
}
void TruongDH::xuat(){
	Truong::xuat();
	cout<<setw(20)<<"Ma khoa"<<setw(20)<<"Ten khoa"<<setw(20)<<"Truong khoa"<<endl;
	for(int i=0;i<n;i++){
		cout<<setw(20)<<x[i].maKhoa<<setw(20)<<x[i].tenKhoa<<setw(20)<<x[i].truongKhoa<<endl;
	}	
	cout<<setw(20)<<"Ma ban"<<setw(20)<<"Ten ban"<<setw(20)<<"Ngay thanh lap"<<endl;
	for(int i=0;i<m;i++){
		cout<<setw(20)<<y[i].maBan<<setw(20)<<y[i].tenBan<<setw(20)<<y[i].ngayThanhLap<<endl;
	}
}
int main(){
	TruongDH a;
	a.nhap();
	a.xuat();
return 0;
}

