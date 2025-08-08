//
//  main.cpp
//  Clasa Matrice
//
//  Created by Fernando Donea on 04.05.2023.
//

#include <iostream>
using namespace std;
class matrice
{
public:
    int n,m,a[101][101];
    matrice();
    matrice(int , int , int );
    void citire();
    void afisare();
    int minim();
    int maximlinie(int );
    void ordonarecol(int );
    void rotire90st();
    void rotire90dr();
    void rotire180();
};
matrice::matrice()
{
    n=m=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            a[i][j]=0;
        }
    }
}
matrice::matrice(int x, int y, int val)
{
    n=x;m=y;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            a[i][j]=val;
        }
    }
}
void matrice::citire()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
}
void matrice::afisare()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int matrice::minim()
{
    int mini=a[1][1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]<mini)mini=a[i][j];
        }
    }
    return mini;
}
int matrice::maximlinie(int l)
{
    int maxi=-1;
    for(int j=1;j<=m;j++)
    {
        if(a[l][j]>maxi)maxi=a[l][j];
    }
    return maxi;
}
void matrice::ordonarecol(int c)
{
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(a[i][c]>a[j][c])
            {
                int aux=a[i][c];
                a[i][c]=a[j][c];
                a[j][c]=aux;
            }
        }
    }
}
void matrice::rotire90st()
{
    int b[101][101];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            b[i][j]=a[n+1-j][i];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void matrice::rotire90dr()
{
    int c[101][101];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            c[i][j]=a[j][n+1-i];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void matrice::rotire180()
{
    int d[101][101];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            d[i][j]=a[n+1-i][n+1-j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
    matrice x;
    x.citire();x.afisare();
    cout<<"Minimul matricei="<<x.minim()<<endl;
    int l,c;
    cout<<"Maximul de pe linia ";
    cin>>l;
    cout<<l<<"="<<x.maximlinie(l)<<endl;
    cout<<"Ordonare dupa coloana ";
    cin>>c;
    x.afisare();
    cout<<"rotire 90 grade la stanga";
    x.rotire90st();
    cout<<"rotire 90 grade la dreapta";
    x.rotire90dr();
    cout<<"rotire 180 grade";
    x.rotire180();
    return 0;
    
}




