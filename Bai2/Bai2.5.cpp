#include<bits/stdc++.h>
using namespace std;
class OTO{
	char maOto[30];
	float giaMuaMoi;
	int soNam;
	float khauHao;
public:
	void nhap();
	void xuat();
};
void OTO::nhap(){
	cout<<"Nhap ma o to : ";
	fflush(stdin);
	gets(maOto);
	cout<<"Nhap gia mua moi : ";
	cin>>giaMuaMoi;
	cout<<"Nhap so nam su dung : ";
	cin>>soNam;
	cout<<"Nhap ty le khau hao : ";
	cin>>khauHao;
}

void OTO::xuat(){
	cout<<"Ma o to : "<<maOto<<endl;
	cout<<"Gia mua moi : "<<giaMuaMoi<<endl;
	cout<<"So nam su dung : "<<soNam<<endl;
	cout<<"Ty le khau hao : "<<khauHao<<endl;
	float GT= giaMuaMoi;
	for(int i=0;i<soNam;i++){
		GT = GT - GT*khauHao;
	}
	cout<<"Gia tri hien tai : "<<GT<<endl;
}
int main(){
	OTO *a;
	int n;
	cout<<"Nhap n : ";
	cin>>n;
	a=new OTO[n];
	for(int i=0;i<n;i++){
		cout<<"Nhap o to thu "<<i+1<<endl;
		a[i].nhap();
	}
	cout<<"Thong tin cac O To vua nhap : ";
	for(int i=0;i<n;i++){
		a[i].xuat();
	}
return 0;
}

