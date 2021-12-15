#include<bits/stdc++.h>
using namespace std;

class Matrix {
private:    
    double **a;
    int n, m;
public:
    void input();
    void output();
    
    friend Matrix operator+(Matrix t2);
    friend TamThucBac2 operator-(Matrix t2);
};

void Matrix::input(){
    cout << "Nhap n = ";    cin >> n;
    cout << "Nhap m = ";    cin >> m;
    a = new double*[n];
    for(int i=0; i<n; i++)
        a[i] = new double[m];
    
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
}

void Matrix::output(){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

Matrix operator+(Matrix t2);{
    temp.m = x.m; 
    temp.n = x.n; 
    temp.a = new double*[temp.n];
    for(int i=0; i<x.n; i++)
        temp.a[i] = new double[temp.m];

    for(int j=0; j<x.m; j++){
        for(int i=0; i<x.n; i++){
            temp.a[i][j] = x.a[j][i];
        }
    }
}

int main(){
    Matrix a, tempA;
    Matrix b, tempB;
    a.input();
    a.output();

    
}

