#include<iostream>
using namespace std;
class SoPhuc
{
    float a,b;
public:
    SoPhuc();
    SoPhuc(float x,float y);
    SoPhuc operator+(SoPhuc );
    SoPhuc operator-(SoPhuc );
    friend istream &operator >> (istream &is,SoPhuc &sp2);
    friend ostream &operator << (ostream &os,SoPhuc sp2);
};
SoPhuc::SoPhuc()
{
    a=0;
    b=0;
}
SoPhuc::SoPhuc(float x,float y)
{
    a=x;
    b=y;
}
SoPhuc SoPhuc::operator+(SoPhuc sp2)
{
    SoPhuc x;
    x.a=this->a+sp2.a;
    x.b=this->b+sp2.b;
    return x;
}
SoPhuc SoPhuc::operator-(SoPhuc sp2)
{
    SoPhuc x;
    x.a=this->a-sp2.a;
    x.b=this->b-sp2.b;
    return x;
}
istream &operator >> (istream &is,SoPhuc &sp1)
{
    is>>sp1.a;
    is>>sp1.b;
    return is;
}
ostream &operator << (ostream &os,SoPhuc sp1)
{
    os<<sp1.a<<" + i*"<<sp1.b<<endl;
    return os;
}
int main()
{
    SoPhuc sp1,sp2,sp3,sp4;
    cout<<"Nhap so phuc 1 : ";
    cin>>sp1;
    cout<<"Nhap so phuc 2 : ";
    cin>>sp2;
    sp3=sp1+sp2;
    sp4=sp1-sp2;
    cout<<sp3<<endl;
    cout<<sp4<<endl;



    return 0;
}
