#include<iostream>
#include<math.h>
using namespace std;
class PTB2{
    float a, b, c;
public:
    void NHAP ();
    void XUAT ();
    void GIAI ();
    PTB2 () ;
   PTB2 (float x, float y, float z);
};
void PTB2::NHAP ()
{
    cout<<"Nhap cac he so: "<<endl;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;
}
void PTB2::XUAT ()
{
   cout<<"Phuong trinh: "<<a<<"X^2"<<" + "<<b<<"X + "<<c<<" = 0"<<endl;
  
}
void PTB2 ::GIAI ()
{
    if (a==0)
        cout<<"Day khong phai ptb2"<<endl;
   else
    {
        float delta = b*b-4*a*c; 
        if (delta<0)
             cout<<"Phuong trinh vo nghiem"<<endl;
        else
        {
             cout<<"X1="<< (-b+sqrt (delta))/ (2*a) <<endl;
             cout<<"X2="<< (-b-sqrt (delta))/ (2*a) <<endl;
         }
     }
 }
PTB2 :: PTB2 (){
	a=b=c=0;
}
PTB2 :: PTB2 (float x, float y, float z)
{
	this->a=x;
	this->b=y;
	this->c=z;
}

int main(){
	PTB2 P(1,2,1);
 	P.XUAT ();P.GIAI ();
   	PTB2 Q;
	Q. NHAP ();           
   	Q.XUAT (); 
	Q. GIAI ();
return 0;
}

