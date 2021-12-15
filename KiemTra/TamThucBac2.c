#include<bits/stdc++.h>
using namespace std;
class TamThucBac2
{
private:
    float a,b,c;
public:
    TamThucBac2();
    TamThucBac2(float a,float b,float c);
    TamThucBac2 operator!();
    TamThucBac2 operator+(TamThucBac2 t2);
    TamThucBac2 operator-(TamThucBac2 t2);
    friend ostream &operator << (ostream &,TamThucBac2 t1);
};
TamThucBac2::TamThucBac2()
{
    a=0;
    b=0;
    c=0;
}
TamThucBac2::TamThucBac2(float a,float b,float c)
{
    this->a=a;
    this->b=b;
    this->c=c;
}
TamThucBac2 TamThucBac2::operator!()
{
    this->a=-a;
    this->b=-b;
    this->c=-c;
    return *this;
}
TamThucBac2 TamThucBac2::operator+(TamThucBac2 t2)
{
    TamThucBac2 x;
    x.a=this->a+t2.a;
    x.b=this->b+t2.b;
    x.c=this->c+t2.c;
    return x;
}
TamThucBac2 TamThucBac2::operator-(TamThucBac2 t2)
{
    TamThucBac2 x;
    x.a=this->a-t2.a;
    x.b=this->b-t2.b;
    x.c=this->c-t2.c;
    return x;
}

ostream &operator << (ostream &os,TamThucBac2 t1)
{
    os<<t1.a<<"x^2 + "<<t1.b<<"x + "<<t1.c<<" = 0 ";
}
int main()
{
    TamThucBac2 t1(1,2,3),t2(2,3,4),t3,t4;
    t3=t1+t2;
    t4=t1-t2;
    ofstream f("TamThucBac2.txt", ios::out);
    f<<t3<<endl;
    f<<t4<<endl;
    f<<!t1<<endl;
    f<<!t2<<endl;
    f.close();


    return 0;
}
