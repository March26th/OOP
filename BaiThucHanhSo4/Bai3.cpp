#include<iostream>
#include<iomanip>
using namespace std;
class HANG;
class DATE{
    int D, M, Y;
    friend void IN (HANG a[], int n, int NAM);
    friend class HANG;
} ;
class HANG{
    char MANHANG [30];
    char TENHANG[30];
    DATE x;
public:
    void NHAP ();
    void XUAT ();
    friend void IN (HANG a[], int n, int NAM);
} ;
void HANG::NHAP ()
{
    cout<<"Ma hang: ";fflush (stdin);gets (MANHANG);
    cout<<"Ten hang: ";fflush (stdin);gets (TENHANG);
    cout<<"Nhap Ngay san xuat: "<<endl;
    cout<<"Ngay: ";cin>>x.D;
    cout<<"Thang: ";cin>>x.M;
    cout<<"Nam: ";cin>>x.Y;
}
void HANG::XUAT()
{
    cout<<"Ma hang:"<<MANHANG<<endl;
    cout<<"Ten hang:"<<TENHANG<<endl;
	cout<<"Nhap ngay san xuat : "<<x.D<<"/"<<x.M<<"/"<<x.Y<<endl;      
}
void IN(HANG a[],int n,int NAM) {
	for(int i=0;i<n;i++){
		if(a[i].x.Y==NAM)
		a[i].XUAT();
	}
}      
int main(){
	HANG *a;
	int n;
	cout<<"Nhap n : ";
	cin>>n;
	a=new HANG[n];
	for(int i=0;i<n;i++){
		a[i].NHAP();
	}
	cout<<endl<<"Mat hang nam 2017"<<endl;
	IN(a,n,2017);
return 0;
}

