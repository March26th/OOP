#include<bits/stdc++.h>
using namespace std;
class Mang
{
    float *a;
    int n;
public:
    void nhap();
    void xuat();
    float Max();
    float Min();
};
void Mang::nhap()
{
    cout<<"Nhap n : ";
    cin>>n;
    a=new float[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
}
float Mang::Max()
{
    float max_a=a[0];
    for(int i=1; i<n; i++)
        if(max_a<a[i])
            max_a=a[i];
    return max_a;
}
float Mang::Min()
{
    float min_a=a[0];
    for(int i=1; i<n; i++)
    {
        if(min_a>a[i])
        {
            min_a=a[i];
        }
    }
    return min_a;
}
void Mang::xuat()
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<"	";
    }
}
int main()
{
    Mang a;
    a.nhap();
    cout<<"Mang : "<<endl;
    a.xuat();
    cout<<endl<<"Max = "<<a.Max()<<endl;
    cout<<"Min = "<<a.Min()<<endl;

    return 0;
}

