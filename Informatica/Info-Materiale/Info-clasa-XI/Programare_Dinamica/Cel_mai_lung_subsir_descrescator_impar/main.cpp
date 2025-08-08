//
//  main.cpp
//  Dinamica2 Pb 1
//
//  Created by Fernando Donea on 13.10.2022.
//

#include <fstream>
using namespace std;
ifstream fin("dinamica2pb1.in");
ofstream fout("dinamica2pb1.out");
int v[1001],L[1001],urm[1001];
void pd(int k)
{
    for(int i=k;i>=1;i--)
    {
        L[i]=1;
        for(int j=i+1;j<=k;j++)
        {
            if(v[j]<v[i] && L[j]>=L[i])
            {
                L[i]=L[j]+1;
                urm[i]=j;
            }
        }
        
    }
    
}
int main()
{
    int n,x,k=0;
    fin>>n;
    for(int i=1;i<=n;i++)
    {
        fin>>x;
        if(x%2==1)v[++k]=x;
    }
    pd(k);
    int maxi=-1,start=0;
    for(int i=1;i<=k;i++)
    {
        if(L[i]>maxi)
        {
            maxi=L[i];
            start=i;
        }
    }
    fout<<maxi<<endl;
    for(int i=1;i<=maxi;i++)
    {
        int j;
        j=start;
        fout<<v[j]<<" ";
        start=urm[j];
    }
    fin.close();
    fout.close();
    return 0;
}
