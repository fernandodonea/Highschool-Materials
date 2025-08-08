//
//  main.cpp
//  Clasa Matrice 2
//
//  Created by Fernando Donea on 11.05.2023.
//

#include <iostream>
using namespace std;
class matrice
{
public:
    int n,m,a[101][101];
    matrice();
    matrice(int);
    matrice(int, int, int);
    void transpusa(matrice);
    friend istream & operator >>(istream &, matrice &);
    friend ostream & operator << (ostream &, matrice &);
    friend matrice operator + (matrice, int);
    friend matrice operator + (int, matrice);
    friend matrice operator + (matrice, matrice);
    friend matrice operator - (matrice, int);
    friend matrice operator - (int, matrice);
    friend matrice operator - (matrice, matrice);
    friend matrice operator * (matrice, int);
    friend matrice operator * (int, matrice);
    friend matrice operator * (matrice, matrice);
    friend bool operator == (matrice, matrice);

};
matrice::matrice()
{
    n=m=0;
    for(int i=1; i<101; ++i)
        for(int j=1; j<101; ++j)
             a[i][j]=0;
}
matrice::matrice(int x)
{
    n=m=0;
    for(int i=1; i<101; ++i)
        for(int j=1; j<101; ++j)
             a[i][j]=x;
}
matrice::matrice(int l, int c, int x)
{
    n=c; m=l;
    for(int i=1; i<101; ++i)
        for(int j=1; j<101; ++j)
             a[i][j]=x;
}
istream & operator >>(istream &in, matrice &a)
{
    in>>a.m>>a.n;
    for(int i=1; i<=a.m; ++i)
        for(int j=1; j<=a.n; ++j)
            in>>a.a[i][j];
    return in;
}
ostream & operator << (ostream &out, matrice &a)
{
    for(int i=1; i<=a.m; ++i)
    {
        for(int j=1; j<=a.n; ++j)
            out<<a.a[i][j]<<" ";
        out<<'\n';
    }
    return out;
}
matrice operator +(int v, matrice a)
{
    matrice b;
    b.m=a.m;  b.n=a.n;
    for(int i=1; i<=a.m; ++i)
    {
        for(int j=1; j<=a.n; ++j)
        {
            b.a[i][j]=a.a[i][j]+v;
        }
    }
    return b;
}
matrice operator +(matrice a, int v)
{
    matrice b;
   return (v+a);
}
matrice operator +(matrice a, matrice b)
{
    matrice s;
    s.m=a.m;  s.n=a.n;
    for(int i=1; i<=a.m; ++i)
    {
        for(int j=1; j<=a.n; ++j)
        {
            s.a[i][j]=b.a[i][j]+a.a[i][j];
        }
    }
    return s;
}
matrice operator -(int v, matrice a)
{
    matrice b;
    b.m=a.m;  b.n=a.n;
    for(int i=1; i<=a.m; ++i)
    {
        for(int j=1; j<=a.n; ++j)
        {
            b.a[i][j]=v-a.a[i][j];
        }
    }
    return b;
}
matrice operator -(matrice a, int v)
{
    matrice b;
   return (v-a);
}
matrice operator -(matrice a, matrice b)
{
    matrice s;
    s.m=a.m;  s.n=a.n;
    for(int i=1; i<=a.m; ++i)
    {
        for(int j=1; j<=a.n; ++j)
        {
            s.a[i][j]=b.a[i][j]-a.a[i][j];
        }
    }
    return s;
}
matrice operator *(int v, matrice a)
{
    matrice b;
    b.m=a.m;  b.n=a.n;
    for(int i=1; i<=a.m; ++i)
    {
        for(int j=1; j<=a.n; ++j)
        {
            b.a[i][j]=v*a.a[i][j];
        }
    }
    return b;
}
matrice operator * (matrice a, matrice b)
{
    matrice s;
    if(a.n==b.m)
    {
        s.m=a.m; s.n=b.n;
        for(int i=1; i<=s.m; ++i)
        {
            for(int j=1; j<=s.n; ++j)
            {
                s.a[i][j]=0;
                for(int k=1; k<=a.n; ++k)
                    s.a[i][j]+=a.a[i][k]*b.a[k][j];
            }
        }
    }
    return s;
}
bool operator == (matrice a, matrice b)
{
    if(a.m!=b.m) return false;
    if(a.n!=b.n) return false;
    for(int i=1; i<=a.m; ++i)
    {
        for(int j=1; j<=a.n; ++j)
            if(a.a[i][j]!=b.a[i][j]) return false;
    }
    return true;
}
void matrice::transpusa(matrice a)
{
    matrice b;
    b.m=a.m;
    b.n=a.n;
    for(int i=1; i<=a.m; ++i)
    {
        for(int j=1; j<=a.n; ++j)
            b.a[j][i]=a.a[i][j];
    }
    cout<<b;
}
int main()
{
    matrice a,b,s,p;
    cin>>a; cout<<endl;
    cin>>b; cout<<endl;
    s=a+b; p=a*b;
    cout<<s<<endl;
    cout<<p<<endl;
    if(a==b) cout<<"da";
    else cout<<"nu";

    return 0;
}

