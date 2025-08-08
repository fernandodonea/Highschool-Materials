//
//  main.cpp
//  Teza Pd Comori
//
//  Created by Fernando Donea on 20.10.2022.
//

#include <fstream>
using namespace std;
ifstream fin("comori.in");
ofstream fout("comori.out");
long long a[201][201],s[201][201];
int n,m;
long long alibaba(int i, int j)
{
    long long maxi=s[i][j+1];
    if(s[i-1][j+1]>maxi)maxi=s[i-1][j+1];
    if(s[i+1][j+1]>maxi)maxi=s[i+1][j+1];
    return maxi;
}
void pd()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=m-1;j>=1;j--)
        {
            s[i][j]=a[i][j]+alibaba(i, j);
        }
    }
}
int main()
{
    int n,m;
    fin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            fin>>a[i][j];
            if(j==m)s[i][j]=a[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=m-1;j>=1;j--)
        {
            s[i][j]=a[i][j]+alibaba(i, j);
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            fout<<s[i][j]<<" ";
        fout<<endl;
    }
}
