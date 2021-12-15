#include<bits/stdc++.h>
using namespace std;
class Mang{
	int *a;
	int n;
public:
	void nhap();
	void xuat();
	void sap();
};
void Mang::nhap(){
	cout<<"Nhap n : ";
	cin>>n;
	a=new int[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
}
void Mang::sap(){
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
				swap(a[i],a[j]);
		
}

void Mang::xuat(){
	for(int i=0;i<n;i++){
		cout<<a[i]<<"	";
	}
}
int main(){
	Mang a;
	a.nhap();
	a.sap();
	a.xuat();
	
return 0;
}

