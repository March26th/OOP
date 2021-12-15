#include<bits/stdc++.h>
using namespace std;
class BenhNhan;
class Nguoi{
protected:
	char hoTen[20];
	int tuoi;
public:
	void nhap();
	void xuat();
	friend void Bonus1(BenhNhan *a,int n);
	friend void Bonus2(BenhNhan *a,int n);
};
class BenhVien{
	char tenBV[30];
	char diaChi[30];
	Nguoi giamDoc;
	friend class BenhNhan;
};
class BenhNhan:public Nguoi{
	char ma[20];
	char tienSu[20];
	char chuanDoan[20];
	BenhVien benhVien;
	
public:
	void nhap();
	void xuat();
	friend void Bonus1(BenhNhan *a,int n);
	friend void Bonus2(BenhNhan *a,int n);
};
void Nguoi::nhap(){
	cout<<"Nhap ho va ten : ";fflush(stdin);gets(hoTen);
	cout<<"Nhap tuoi : ";cin>>tuoi;
}
void Nguoi::xuat(){
	cout<<"Ho va ten : "<<hoTen<<endl;
	cout<<"Tuoi : "<<tuoi<<endl;
}
void BenhNhan::nhap(){
	Nguoi::nhap();
	cout<<"Nhap ma benh nhan : ";fflush(stdin);gets(ma);
	cout<<"Nhap tien su : ";fflush(stdin);gets(tienSu);
	cout<<"Nhap chuan doan : ";fflush(stdin);gets(chuanDoan);
	cout<<"Nhap ten benh vien : ";fflush(stdin);gets(benhVien.tenBV);
	cout<<"Nhap dia chi benh vien : ";fflush(stdin);gets(benhVien.diaChi);
	cout<<"--------Giam doc benh vien-------"<<endl;
	benhVien.giamDoc.nhap();
	
}
void BenhNhan::xuat(){
	Nguoi::xuat();
	cout<<"Ma benh nhan : "<<ma<<endl;
	cout<<"Tien su : "<<tienSu<<endl;
	cout<<"Chuan doan : "<<chuanDoan<<endl;
	cout<<"Ten benh vien : "<<benhVien.tenBV<<endl;
	cout<<"Dia chi : "<<benhVien.diaChi<<endl;
	cout<<"---------Giam doc-------"<<endl;
	benhVien.giamDoc.xuat();
}
void Bonus1(BenhNhan *a,int n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i].tuoi>30){
			dem++;
		}
	}
	cout<<endl<<"So benh nhan lon hon 30 tuoi la "<<dem<<endl;
}
void Bonus2(BenhNhan *a,int n){
	for(int i=0;i<n;i++){
		if(strcmp(a[i].ma,"BN01")==0){
			a[i].tuoi=20;
		}
	}
}
int main(){
	int n;
	cout<<"Nhap n : ";
	cin>>n;
	BenhNhan *a;
	a=new BenhNhan[n];
	for(int i=0;i<n;i++){
		cout<<"Nhap thong tin benh nhan thu "<<i+1<<endl;
		a[i].nhap();
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<"Thong tin benh nhan thu "<<i+1<<endl;
		a[i].xuat();
	}
	Bonus1(a,n);
	Bonus2(a,n);
	for(int i=0;i<n;i++){
		cout<<"Thong tin benh nhan thu "<<i+1<<endl;
		a[i].xuat();
	}
return 0;
}

