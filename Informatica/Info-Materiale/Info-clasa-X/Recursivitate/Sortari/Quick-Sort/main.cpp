//
//  main.cpp
//  Quick Sort
//
//  Created by Fernando Donea on 15.09.2022.
//

#include <iostream>
using namespace std;
void citire(int &n, int v[])
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
}
void afisare(int n, int v[])
{
    for(int i=1;i<=n;i++)
    {
        cout<<v[i]<<" ";
    }
}
int pivot(int v[], int st, int dr)
{
    int p,q,x;
    p=st;
    q=dr;
    x=v[p];//pivotul fixat in stanga
    while(p<q)
    {
        while(p<q && v[q]>=x)q--;
        v[p]=v[q];
        while(p<q && v[p]<=x)p++;
        v[p]=v[q];
    }
    v[p]=x;
    return p;
}
void QuickSort(int v[], int st, int dr)
{
    int m;
    if(st<dr)
    {
        m=pivot(v, st, dr);
        QuickSort(v, st, m-1);
        QuickSort(v, m+1, dr);
    }
}
int main()
{
    int n,v[101];
    citire(n, v);
    QuickSort(v, 1, n);
    afisare(n, v);
    return 0;
}
