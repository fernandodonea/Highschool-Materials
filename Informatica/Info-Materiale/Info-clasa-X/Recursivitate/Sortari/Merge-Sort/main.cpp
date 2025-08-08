//
//  main.cpp
//  Merge Sort
//
//  Created by Fernando Donea on 15.09.2022.
//
//1. Acesta metoda de sortare este eficenta ca timp
//2. Etape de Devide consta in impartirea problemei in subprobleme iar etapa Impera consta in interclasarea jumatatilor de problema

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
void inter(int v[], int st, int dr)
{
    int w[105],i,j,k,m;
    m=(st+dr)/2;
    i=st;j=m+1;k=st-1;
    while(i<=m && j<=dr)
    {
        if(v[i]<v[j])w[++k]=v[i++];
        else w[++k]=v[j++];
    }
    while(i<=m)w[++k]=v[i++];
    while(j<=dr)w[++k]=v[j++];
    for(i=st;i<=dr;++i)v[i]=w[i];
}
void MergeSort(int v[], int st, int dr)
{
    if(st<dr)
    {
        int m=(st+dr)/2;
        MergeSort(v, st, m);
        MergeSort(v,m+1,dr);
        inter(v, st, dr);
    }
}
int main()
{
    int n,v[101];
    citire(n, v);
    MergeSort(v, 1, n);
    afisare(n, v);
    return 0;
}

