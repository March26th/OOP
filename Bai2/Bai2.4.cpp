#include<iostream>
#include<iomanip>
using namespace std;
class DoanhNghiep{
private:
	char TenDoanhNghiep[30];
	char DiaChi[30];
	int SoLuongNV; 
	int DoanhThu;  
public:
	void nhap(){
		cout<<"Ten doanh Nghiep : ";
		fflush(stdin);
		gets(TenDoanhNghiep);
		cout<<"Nhap dia chi : ";
		fflush(stdin);
		gets(DiaChi);
		cout<<"Nhap so luong NV : ";
		cin>>SoLuongNV;
		cout<<"Nhap doanh thu : ";
		cin>>DoanhThu;	
	}	
	void xuat(){
		cout<<setw(20)<<TenDoanhNghiep<<setw(12)<<DiaChi<<setw(12)<<SoLuongNV<<setw(12)<<DoanhThu<<endl;
	}
};
int main(){
	int n;
	cout<<"Nhap so doanh nghiep : ";
	cin>>n;
	DoanhNghiep *a=new DoanhNghiep[n];
	for(int i=0;i<n;i++){
		cout<<"Nhap thong tin Doanh Nghiep "<<i+1<<endl;
		a[i].nhap();
	}
	cout<<left<<setw(20)<<"Ten Doanh Nghiep"<<setw(12)<<"Dia chi"<<setw(12)<<"So luong"<<setw(12)<<"Doanh Thu"<<endl;
	for(int i=0;i<n;i++){
		a[i].xuat();
	}
}
