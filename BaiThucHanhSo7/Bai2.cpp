#include<bits/stdc++.h>
using namespace std;
class School
{
    char nameSc[20];
    char dateSc[20];
    friend class Faculty;
    friend class Student;
};
class Faculty
{
    char nameFac[20];
    char dateFac[20];
    School x;
public:
    friend class Student;
    void input();
    void output();
};
class Person
{
protected:
    char namePer[20];
    char birth[20];
    char address[20];
public:
    void input();
    void output();
    Person();
};
class Student:public Person
{
    Faculty y;
    char Class[20];
    float score;
public:
    void input();
    void output();
    Student();
};
void Faculty::input()
{
    cout<<"Nhap ten khoa : ";
    fflush(stdin);
    gets(nameFac);
    cout<<"Nhap ngay thanh lap khoa : ";
    fflush(stdin);
    gets(dateFac);
    cout<<"Nhap ten truong : ";
    fflush(stdin);
    gets(x.nameSc);
    cout<<"Nhap ngay thanh lap truong : ";
    fflush(stdin);
    gets(x.dateSc);
}
void Faculty::output()
{
    cout<<"Ten khoa : "<<nameFac<<endl;
    cout<<"Ngay thanh lap khoa : "<<dateFac<<endl;
    cout<<"Ten truong : "<<x.nameSc<<endl;
    cout<<"Ngay thanh lap truong : "<<x.dateSc<<endl;
}
void Person::input()
{
    cout<<"Nhap ten : ";
    fflush(stdin);
    gets(namePer);
    cout<<"Sinh ngay : ";
    fflush(stdin);
    gets(birth);
    cout<<"Dia chi : ";
    fflush(stdin);
    gets(address);
}
void Person::output()
{
    cout<<"Ten : "<<namePer<<endl;
    cout<<"Sinh ngay : "<<birth<<endl;
    cout<<"Dia chi : "<<address<<endl;
}
Person::Person()
{
    strcpy(namePer,"");
    strcpy(birth,"");
    strcpy(address,"");
}
void Student::input()
{
    Person::input();
    y.input();
    cout<<"Nhap lop : ";
    fflush(stdin);
    gets(Class);
    cout<<"Nhap diem : ";
    cin>>score;
}
void Student::output()
{
    Person::output();
    y.output();
    cout<<"Lop : "<<Class<<endl;
    cout<<"Diem : "<<score<<endl;
}
Student::Student()
{
    strcpy(y.nameFac,"");
    strcpy(y.dateFac,"");
    strcpy(y.x.nameSc,"");
    strcpy(y.x.dateSc,"");
    strcpy(Class,"");
    score=0;
}
int main()
{
    Student a;
    a.input();
    a.output();
    return 0;
}

