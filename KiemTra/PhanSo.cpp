#include<bits/stdc++.h>
using namespace std;
class PS
{
private:
    float ts,ms;
public:
    PS operator+(PS y);
    PS operator-(PS y);
    PS operator*(PS y);
    PS operator/(PS y);
    double operator!();
    friend istream& operator >> (istream &is, PS &x);
    friend ostream& operator << (ostream &os, PS x);
};
PS PS::operator+(PS y)
{
    PS tg;
    tg.ts = this->ts * y.ms + ms * y.ts;
    tg.ms = this->ms * y.ms;
    return tg;
}
PS PS::operator-(PS y)
{
    PS tg;
    tg.ts = this->ts * y.ms - ms * y.ts;
    tg.ms = this->ms * y.ms;
    return tg;
}
PS PS::operator*(PS y)
{
    PS tg;
    tg.ts = this->ts * y.ts;
    tg.ms = this->ms * y.ms;
    return tg;
}
PS PS::operator/(PS y)
{
    PS tg;
    tg.ts = this->ts * y.ms;
    tg.ms = this->ms * y.ts;
    return tg;
}
double PS::operator!()
{
    return ts/ms;
}
istream &operator>>(istream &is, PS &y)
{
    cout << "Nhap tu so : ";
    is >> y.ts;
    cout << "Nhap mau so: ";
    is >> y.ms;
    return is;
}

ostream &operator<<(ostream &os, PS y)
{
    os << y.ts << "/" << y.ms << endl;
    return os;
}

int main()
{
    PS ps1, ps2, pscong,pstru,psnhan,pschia;
    cout << "Nhap phan so ps1: " << endl;
    cin >> ps1;

    cout << "Nhap phan so ps2: " << endl;
    cin >> ps2;
    cout<<!(ps1+ps2)<<endl;
    cout<<!(ps1-ps2)<<endl;
    cout<<!(ps1*ps2)<<endl;
    cout<<!(ps1/ps2)<<endl;
    
    return 0;
}
