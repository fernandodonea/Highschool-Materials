//
//  main.cpp
//  Maximizarea unei expresii
//
//  Created by Fernando Donea on 03.10.2022.
//

#include <iostream>
using namespace std;
void citire(int &n, int v[])
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
}
//ordonare A,B;
int greedymax(int m, int a[], int n, int b[])
{
    int s=0,i,j;
    for(int i=1,j=1;i<=m && j<=n && a[i]<0;i++,j++)
    {
        s+=(a[i]*b[j]);
    }
    for(int i=m,j=n;i>=1 && j>=1 && a[i]>0;i--,j--)
    {
        s+=(a[i]*b[j]);
    }
    return  s;
}
int greedymin(int m, int a[], int n, int b[])
{
    int s=0,i,j;
    for(int i=1,j=n;i<=m && j>=n && a[i]<0;i++,j--)
    {
        s+=(a[i]*b[j]);
    }
    for(int i=m,j=1;i>=1 && j<=n && a[i]>0;i--,j++)
    {
        s+=(a[i]*b[j]);
    }
    return s;
}

