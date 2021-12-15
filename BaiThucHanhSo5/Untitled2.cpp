#include<bits/stdc++.h>
using namespace std;
class Cha{
protected:	
	char m1[20];
	char m2[20];
	char m3[30];
public:
	void nhap();
	void xuat();
};
class Con:public Cha{
	char n1[20];
	int n2;
	float n3;
public:
	void nhap();
	void xuat();
};
class K{
	char k1[20];
	int k2;
	char k3[20];
	char k4[20];
	char k5[20];
	Con *x;
	int n;
public:
	void nhap();
	void xuat();
};
void Cha::nhap(){
	cout<<"Nhap m1 : ";fflush(stdin);gets(m1);
	cout<<"Nhap m2 : ";fflush(stdin);gets(m2);
	cout<<"Nhap m3 : ";fflush(stdin);gets(m3);
}
void Cha::xuat(){
	cout<<"m1 : "<<m1<<endl;
	cout<<"m2 : "<<m2<<endl;
	cout<<"m3 : "<<m3<<endl;
}
void Con::nhap(){
	Cha::nhap();
	cout<<"Nhap n1 : ";fflush(stdin);gets(n1);
	cout<<"Nhap n2 : ";cin>>n2;
	cout<<"Nhap n3 : ";cin>>n3;
}
void Con::xuat(){
	Cha::xuat();
	cout<<"n1 : "<<n1<<endl;
	cout<<"n2 : "<<n2<<endl;
	cout<<"n3 : "<<n3<<endl;
}
void K::nhap(){
	cout<<"Nhap k1 : ";fflush(stdin);gets(k1);
	cout<<"Nhap k2 : ";cin>>k2;
	cout<<"Nhap k3 : ";fflush(stdin);gets(k3);
	cout<<"Nhap k4 : ";fflush(stdin);gets(k4);
	cout<<"Nhap k5 : ";fflush(stdin);gets(k5);
	cout<<"Nhap n : ";cin>>n;
	x=new Con[n];
	for(int i=0;i<n;i++){
		x[i].nhap();
	}
}
void K::xuat(){
	cout<<"k1 : "<<k1<<endl;
	cout<<"k2 : "<<k2<<endl;
	cout<<"k3 : "<<k3<<endl;
	cout<<"k4 : "<<k4<<endl;
	cout<<"k5 : "<<k5<<endl;
	for(int i=0;i<n;i++){
		x[i].xuat();
	}
}

int main(){

return 0;
}

