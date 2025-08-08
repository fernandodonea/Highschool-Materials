//
//  main.cpp
//  Lucrare Pd2021 Cel mai lung subsir desc impar
//
//  Created by Fernando Donea on 20.10.2022.
//

#include <iostream>
using namespace std;
int v[1001],L[1001],urm[1001],n,k;
void citire(int &n, int v[], int &k)
{
    int x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==1)v[++k]=x;
    }
}
void pd()
{
    int pmax;
    L[k]=1;
    urm[k]=0;
    for(int i=k-1;i>=1;i--)
    {
        pmax=0;
        for(int j=1;j<=k;j++)
        {
            if(v[i]>v[j] && L[j]>L[pmax])
            {
                pmax=j;
            }
        }
        L[i]=L[pmax]+1;
        urm[i]=pmax;
    }
}
int lmax(int v[], int k)
{
    int pmax=0;
    for(int i=1;i<=n;i++)
    {
        if(L[i]>L[pmax])pmax=i;
    }
    return pmax;
}
void afisare(int pmax)
{
    
    cout<<L[pmax]<<endl;
    while(pmax>0)
    {
        cout<<v[pmax]<<" ";
        pmax=urm[pmax];
    }
    
}
void afisrec(int pmax,int init)
{
    if(pmax==init)
        cout<<L[pmax]<<endl;
    if(pmax>0)
    {
        cout<<v[pmax]<<" ";
        afisrec(urm[pmax], init);
    }
    
}
int main()
{
    citire(n, v, k);
    pd();
    int pmax=lmax(v, k);
    afisrec(pmax, pmax);
    return 0;
}
