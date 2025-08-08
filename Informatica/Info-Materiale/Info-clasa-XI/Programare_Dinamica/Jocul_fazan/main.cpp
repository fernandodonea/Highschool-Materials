//
//  main.cpp
//  Jocul fazan
//
//  Created by Fernando Donea on 13.10.2022.
//

#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;
ifstream fin("fazan.in");
ofstream fout("fazan.out");
char v[101][50];
int L[101],urm[101];
bool verif(char x[], char y[])
{
    unsigned long n;
    n=strlen(x);
    char a,b,c,d;
    a=y[0];b=y[1];
    c=x[n-2];d=x[n-1];
    if(a==c && b==d)return true;
    else return false;
    
}
void pd(int n)
{
    for(int i=n;i>=1;i--)
    {
        L[i]=1;
        for(int j=i+1;j<=n;j++)
        {
            if(verif(v[i], v[j])==true && L[j]>=L[i])
            {
                L[i]=L[j]+1;
                urm[i]=j;
            }
        }
        
    }
    
}
int main()
{
    int n;
    fin>>n;
    for(int i=1;i<=n;i++)
    {
        fin>>v[i];
    }
    pd(n);
    int maxi=-1,start=0;
    for(int i=1;i<=n;i++)
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
