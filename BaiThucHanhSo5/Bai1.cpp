#include<iostream>
#include<iomanip>

using namespace std;

class Hang
{
private:
    char tenHang[20];
    float donGia;
    int soLuong;
public:
    void nhap();
    void xuat();
};
void Hang::nhap()
{
    cout<<"Nhap ten hang : ";
    fflush(stdin);
    gets(tenHang);
    cout<<"Nhap don gia : ";
    cin>>donGia;
    cout<<"Nhap so luong : ";
    cin>>soLuong;
}
void Hang::xuat()
{
    cout<<setw(12)<<tenHang<<setw(12)<<donGia<<setw(12)<<soLuong<<setw(12)<<donGia*soLuong<<endl;
}
class NhaCungCap
{
private:
    char maNCC[20];
    char tenNCC[20];
    char diaChi[30];
public:
    void nhap();
    void xuat();
};
void NhaCungCap::nhap()
{
    cout<<"Nhap ma nha cung cap : ";
    fflush(stdin);
    gets(maNCC);
    cout<<"Nhap ten nha cung cap : ";
    fflush(stdin);
    gets(tenNCC);
    cout<<"Nhap dia chi nha cung cap : ";
    fflush(stdin);
    gets(diaChi);
}
void NhaCungCap::xuat()
{
    cout<<"Ma NCC : "<<maNCC<<setw(30)<<"Ten NCC : "<<tenNCC<<endl;
    cout<<"Dia chi : "<<diaChi<<endl;
}
class Phieu
{
private:
    char maPhieu[20];
    int ngay;
    int thang;
    int nam;
    NhaCungCap ncc;
    int n;
    Hang *h;
public:
    void nhap();
    void xuat();
};
void Phieu::nhap()
{
    cout<<"Nhap ma phieu : ";
    fflush(stdin);
    gets(maPhieu);
    cout<<"Nhap ngay : ";
    cin>>ngay;
    cout<<"Nhap thang : ";
    cin>>thang;
    cout<<"Nhap nam : ";
    cin>>nam;
    ncc.nhap();
    cout<<"Nhap so luong hang : ";
    cin>>n;
    h=new Hang[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Nhap hang thu : "<<i+1<<endl;
        h[i].nhap();
    }
}
void Phieu::xuat()
{
    cout<<"-----------------------Phieu Nhap Hang---------------------"<<endl;
    cout<<"Ma phieu : "<<maPhieu<<setw(30)<<"Ngay lap : "<<ngay<<" / "<<thang<<" / "<<nam<<endl;

    ncc.xuat();
    cout<<setw(12)<<"Ten Hang"<<setw(12)<<"Don gia"<<setw(12)<<"So luong"<<setw(12)<<"Thanh tien"<<endl;
    for(int i=0; i<n; i++)
    {
        h[i].xuat();
    }
}
int main()
{
    Phieu a;
    a.nhap();
    a.xuat();
    return 0;
}

