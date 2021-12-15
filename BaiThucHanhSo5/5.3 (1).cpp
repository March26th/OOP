#include<bits/stdc++.h>
using namespace std;
class PHIEU;
class TAISAN
{
    char TenTS[30];
    int SL;
    char TT[30];

public:
    void NHAP();
    void XUAT();
    friend class PHIEU;
    friend void SUA(PHIEU k,int n);
    friend void SAPXEP(PHIEU k,int n);
};
void TAISAN::NHAP()
{
    cout<<"Nhap Ten tai san; ";fflush(stdin);gets(TenTS);
    cout<<"Nhap so luong: ";cin>>SL;
    cout<<"Nhap tinh trang: ";fflush(stdin);gets(TT);
}
void TAISAN::XUAT()
{
    cout<<TenTS<<setw(20)<<SL<<setw(30)<<TT<<endl;
}
class PHONG
{
    char TenP[30];
    char MaP[30];
public:
    void NHAP();
    void XUAT();

};
void PHONG::NHAP()
{
    cout<<"Nhap ten phong kiem ke: ";fflush(stdin);gets(TenP);
    cout<<"Nhap ma phong: ";fflush(stdin);gets(MaP);
}
void PHONG::XUAT()
{
    cout<<"Kiem ke tai phog: "<<TenP<<setw(40)<<"Ma phong: "<<MaP<<endl;

}
class NV
{
    char TenNV[30];
    char CHUC[30];
public:
    void NHAP();
    void XUAT();
};
void NV::NHAP()
{
    cout<<"Nhap ten nhan vien: ";fflush(stdin);gets(TenNV);
    cout<<"Nhap chuc vu: ";fflush(stdin);gets(CHUC);
}
void NV::XUAT()
{
    cout<<"Nhan vien kiem ke: "<<TenNV<<setw(40)<<"Chuc vu: "<<CHUC<<endl;
}
class PHIEU
{
    char MaPH[30];
    char NGAY[30];
    TAISAN *x;
    PHONG y;
    NV z;
    int n;

public:
    void NHAP();
    void XUAT();
    friend void SUA(PHIEU k,int n);
    friend void SAPXEP(PHIEU k,int n);
};
void PHIEU::NHAP()
{
    cout<<"Nhap Ma phieu: ";fflush(stdin);gets(MaPH);
    cout<<"Nhap ngay kiem: ";fflush(stdin);gets(NGAY);
    z.NHAP();
    y.NHAP();
    cout<<"Nhap so tai san: ";cin>>n;
    x=new TAISAN[n];
        for (int i=0;i<n;i++)
        {
            x[i].NHAP();
        }
}
void PHIEU::XUAT()
{
    cout<<setw(50)<<"Phieu kiem ke"<<endl;
    cout<<"Ma Phieu: "<<MaPH<<setw(40)<<"Ngay kiem ke: "<<NGAY<<endl;
    z.XUAT();
    y.XUAT();
    cout<<"Ten tai san"<<setw(20)<<"So luong"<<setw(30)<<"Tih trang"<<endl;
    for (int i=0;i<n;i++)
        {
            x[i].XUAT();
        }
        int S=0;
    for (int i=0;i<n;i++)
        {
            S=S+ x[i].SL;
        }
    cout<<"So tai san da kiem ke: "<<n<<setw(40)<<"Tong so luong: "<<S;
}
void SUA(PHIEU k,int n)
{
    for(int i=0;i<k.n;i++)
    {
        if(strcmp(k.x[i].TenTS,"may vi tinh")==0)
        {
            k.x[i].SL=20;
        }
    }
}
void SAPXEP(PHIEU k,int n)
{
    for(int i=0;i<k.n;i++)
    {
        for(int j=i+1;j<k.n;j++)
            if(k.x[i].SL<k.x[j].SL)
                swap (k.x[i],k.x[j]);
    }
}
int main()
{
    int n;
    PHIEU k;
    k.NHAP();
    k.XUAT();
    SUA(k,n);
    k.XUAT();
    SAPXEP(k,n);
    k.XUAT();
}






