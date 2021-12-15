#include<bits/stdc++.h>
using namespace std;
class Phieu;
class May
{
private:
    char maMay[20];
    char nhanHieu[20];
    int namNhap;
    float giaNhap;
public:
    void nhap();
    void xuat();
    friend class Phieu;
    friend void Bonus1(Phieu a,int n);
    friend void Bonus2(Phieu a,int n);
    friend void Bonus3(Phieu a,int n);
};
class NguoiLap
{
private:
    char maNguoiLap[20];
    char hoTen[20];
public:
    void nhap();
    void xuat();
};
class Phong
{
private:
    char maPhong[20];
    int tang;
    char toaNha[20];
public:
    void nhap();
    void xuat();
};
class Phieu
{
private:
    char maPhieu[20];
    char ngayLap[20];
    May *x;
    NguoiLap y;
    Phong z;
    int n;
public:
    void nhap();
    void xuat();
    friend void Bonus1(Phieu a,int n);
    friend void Bonus2(Phieu a,int n);
    friend void Bonus3(Phieu a,int n);
};
void May::nhap()
{
    cout<<"Nhap ma may : ";fflush(stdin);gets(maMay);
    cout<<"Nhap nhan hieu : ";fflush(stdin);gets(nhanHieu);
	cout<<"Nhap nam nhap : ";cin>>namNhap;
    cout<<"Nhap gia nhap : ";cin>>giaNhap;
}
void May::xuat()
{
    cout<<setw(20)<<maMay<<setw(20)<<nhanHieu<<setw(20)<<namNhap<<setw(20)<<giaNhap<<endl;
}
void NguoiLap::nhap()
{
    cout<<"Nhap ma nguoi lap : ";fflush(stdin);gets(maNguoiLap);
    cout<<"Nhap ho ten : ";fflush(stdin);gets(hoTen);
}
void NguoiLap::xuat()
{
    cout<<"Nguoi lap : "<<maNguoiLap<<setw(30)<<"Ho ten : "<<hoTen<<endl;
}
void Phong::nhap()
{
    cout<<"Nhap ma phong : ";fflush(stdin);gets(maPhong);
    cout<<"Nhap tang : ";cin>>tang;
    cout<<"Nhap toa nha : ";fflush(stdin);gets(toaNha);
}
void Phong::xuat()
{
    cout<<"Ma phong : "<<maPhong<<setw(30)<<"Tang : "<<tang<<setw(20)<<"Toa nha : "<<toaNha<<endl;
}
void Phieu::nhap()
{
    cout<<"Nhap ma phieu : ";fflush(stdin);gets(maPhieu);
    cout<<"Nhap ngay lap : ";fflush(stdin);gets(ngayLap);
    y.nhap();
    z.nhap();
    cout<<"Nhap n : ";
    cin>>n;
    x=new May[n];
    for(int i=0; i<n; i++)
    {
        x[i].nhap();
    }
}
void Phieu::xuat()
{
    cout<<"--------------------------------"<<endl;
    cout<<"Truong DH FOCO"<<endl;
    cout<<setw(60)<<"Thong Ke Tinh Trang May Tinh"<<endl;
    cout<<"Ma phieu : "<<maPhieu<<setw(30)<<"Ngay Lap : "<<ngayLap<<endl;
    y.xuat();
    z.xuat();
    cout<<setw(20)<<"Ma may"<<setw(20)<<"Nhan hieu"<<setw(20)<<"Nam Nhap"<<setw(20)<<"Gia Nhap"<<endl;
    for(int i=0; i<n; i++)
    {
        x[i].xuat();
    }
    float s=0;
    for(int i=0; i<n; i++)
    {
        s+=x[i].giaNhap;
    }
    cout<<setw(60)<<"Tong so may: "<<n<<". Tong gia nhap : "<<s<<endl;
    cout<<setw(40)<<"Truong Phong QT"<<setw(60)<<"Nguoi Lap"<<endl;
}
void Bonus1(Phieu a,int n)
{
    for(int i=0; i<a.n; i++)
    {
        if(strcmp(a.x[i].nhanHieu,"M002")==0)
            strcpy(a.x[i].nhanHieu,"IBM");
    }
}
void Bonus2(Phieu a,int n)
{
    for(int i=0; i<a.n; i++)
    {
        for(int j=i+1; j<a.n; j++)
        {
            if(a.x[i].giaNhap>a.x[j].giaNhap)
                swap(a.x[i],a.x[j]);
        }
    }
}
void Bonus3(Phieu a,int n)
{
    int t=0;
    for(int i=0; i<a.n; i++)
    {
        if(a.x[i].namNhap>=2015&&a.x[i].namNhap<=2019)
            t++;
    }
    cout<<"Co "<<t<<" may duoc nhap tu nam 2015 den nam 2019!"<<endl;
}
int main()
{
    int n;
    Phieu a;
    a.nhap();
    a.xuat();
    cout<<"Bonus 1 "<<endl;
    Bonus1(a,n);
    a.xuat();
    cout<<"Bonus 2 "<<endl;
    Bonus2(a,n);
    a.xuat();
    cout<<"Bonus 3 "<<endl;
    Bonus3(a,n);
    return 0;
}


