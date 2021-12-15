#include<bits/stdc++.h>
using namespace std;
class Phieu;
class TaiSan{
private:
    char tenTS[20];
    int soLuong;
    char tinhTrang[20];
public:
	friend class Phieu;
    void nhap();
    void xuat();
    friend void Bonus1(Phieu a,int n);
    friend void Bonus2(Phieu a,int n);
};
class NhanVien{
private:
    char tenNV[20];
    char chucVu[20];
public:
    void nhap();
    void xuat();
};
class Phong{
	char tenPhong[20];
	char maPhong[20];
	char truongPhong[20];
public:
	void nhap();
	void xuat();	
};
class Phieu{
	char maPhieu[20];
	int ngay;
	int thang;
	int nam;
	NhanVien nv;
	Phong p;
	TaiSan *ts;
	int n;
public:
	void nhap();
	void xuat();
	friend void Bonus1(Phieu a,int n);
	friend void Bonus2(Phieu a,int n);
};
void TaiSan::nhap(){
	cout<<"Nhap ten tai san : ";fflush(stdin);gets(tenTS);
	cout<<"Nhap so luong : ";cin>>soLuong;
	cout<<"Nhap tinh trang : ";fflush(stdin);gets(tinhTrang);
}
void TaiSan::xuat(){
	cout<<setw(20)<<tenTS<<setw(20)<<soLuong<<setw(20)<<tinhTrang<<endl;
}
void NhanVien::nhap(){
	cout<<"Nhap ten nhan vien : ";fflush(stdin);gets(tenNV);
	cout<<"Nhap chuc vu : ";fflush(stdin);gets(chucVu);
}
void NhanVien::xuat(){
	cout<<"Nhan vien kiem ke : "<<tenNV<<setw(30)<<"Chuc vu : "<<chucVu<<endl;
}
void Phong::nhap(){
	cout<<"Nhap ten phong : ";fflush(stdin);gets(tenPhong);
	cout<<"Nhap ma phong : ";fflush(stdin);gets(maPhong);
	cout<<"Nhap ten truong phong : ";fflush(stdin);gets(truongPhong);
}
void Phong::xuat(){
	cout<<"Kiem ke tai phong : "<<tenPhong<<setw(30)<<"Ma phong : "<<maPhong<<endl;
	cout<<"Truong phong : "<<truongPhong<<endl;
}
void Phieu::nhap(){
	cout<<"Ma phieu : ";fflush(stdin);gets(maPhieu);
	cout<<"Nhap ngay : ";cin>>ngay;
	cout<<"Nhap thang : ";cin>>thang;
	cout<<"Nhap nam : ";cin>>nam;
	nv.nhap();
	p.nhap();
	cout<<"Nhap n = ";cin>>n;
	ts=new TaiSan[n];
	for(int i=0;i<n;i++){
		cout<<"Tai san thu "<<i+1<<endl;
		ts[i].nhap();
	}
}
void Phieu::xuat(){
	cout<<setw(50)<<"Phieu kiem ke tai san"<<endl;
	cout<<"Ma phieu : "<<maPhieu<<setw(30)<<"Ngay kiem ke : "<<ngay<<"/"<<thang<<"/"<<nam<<endl;
	nv.xuat();
	p.xuat();
	cout<<setw(20)<<"Ten Tai San"<<setw(20)<<"So Luong"<<setw(20)<<"Tinh Trang"<<endl;
	for(int i=0;i<n;i++){
		ts[i].xuat();
	}
	int sl=0;
	for(int i=0;i<n;i++){
		sl+=ts[i].soLuong;
	}
	cout<<"So tai san da kiem ke : "<<n<<setw(30)<<"Tong so luong : "<<sl<<endl;	
}
void Bonus1(Phieu a,int n){
	for(int i=0;i<a.n;i++){
		if(strcmp(a.ts[i].tenTS,"May vi tinh")==0){
			a.ts[i].soLuong=20;
		}
	}
}
void Bonus2(Phieu a,int n){
	for(int i=0;i<a.n;i++){
		for(int j=i+1;j<a.n;j++){
			if(a.ts[i].soLuong<a.ts[j].soLuong){
				swap(a.ts[i],a.ts[j]);
			}
		}
	}
}
int main(){
	int n;
	Phieu a;
	a.nhap();
	a.xuat();
	Bonus1(a,n);
	a.xuat();
	Bonus2(a,n);
	a.xuat();
}
