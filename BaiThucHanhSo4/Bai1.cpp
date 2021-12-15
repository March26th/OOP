#include<iostream>
#include<iomanip>
using namespace std;

class SinhVien
{
    char maSinhVien[10];
    char hoTen[20];
    float toan, ly, hoa;
public:
    void nhap ();
    void xuat ();
    friend void Sap (SinhVien *a, int n);
};
void SinhVien::nhap ()
{
    cout<<"Ma sinh vien: ";fflush (stdin); gets (maSinhVien);
    cout<<"Ho ten: ";fflush (stdin);gets (hoTen);
    cout<<"Diem toan: ";cin>>toan;
    cout<<"Diem ly: ";  cin>>ly;
    cout<<"Diem hoa: ";cin>>hoa;
}
void SinhVien::xuat (){
	cout<<setw (10) <<maSinhVien<<setw (20) <<hoTen<<setw (10) <<toan<<setw (10)
<<ly<<setw (10)<<hoa<<setw (10)<<toan+ly+hoa<<endl;
}
void Sap(SinhVien *a,int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].toan+a[i].ly+a[i].hoa>a[j].toan+a[j].ly+a[i].hoa){
				SinhVien t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
int main(){
	SinhVien *a;
	int n;
	cout<<"Nhap n : ";
	cin>>n;
	a=new SinhVien[n];
	for(int i=0;i<n;i++){
		a[i].nhap();
	}
	Sap(a,n);
	cout<<setw (10) <<"maSinhVien"<<setw (20) <<"hoTen"<<setw (10) <<"toan"<<setw (10)
<<"ly"<<setw (10)<<"hoa"<<setw (10)<<"Tong"<<endl;
	for(int i=0;i<n;i++){
		a[i].xuat();
	}
	
return 0;
}

