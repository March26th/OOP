#include<bits/stdc++.h>
using namespace std;
class Vector{
private:
	double x,y;
public:
	Vector operator+(Vector a);
    Vector operator-(Vector a);
   	double operator!();
	friend istream& operator >> (istream &is, Vector &a);
    friend ostream& operator << (ostream &os, Vector a);
};
Vector Vector::operator+(Vector a){
	Vector tg;
	tg.x = x + a.x;
	tg.y = y + a.y;
	return tg;
}
Vector Vector::operator-(Vector a){
	Vector tg;
	tg.x = x - a.x;
	tg.y = y - a.y;
	return tg;
}
istream &operator>>(istream &is, Vector &a)
{
    cout << "Nhap x : ";
    is >> a.x;
    cout << "Nhap y : ";
    is >> a.y;
    return is;
}

ostream &operator<<(ostream &os, Vector a)
{
    os <<"( "<< a.x << "," << a.y  <<" )"<< endl;
    return os;
}
int main(){
	Vector a,b;
	cout << "Nhap vector a : " << endl;
    cin >> a;

    cout << "Nhap vector b: " << endl;
    cin >> b;
    cout<<"Tong : "<<a+b<<endl;
    cout<<"Hieu : "<<a-b<<endl;
return 0;
}

