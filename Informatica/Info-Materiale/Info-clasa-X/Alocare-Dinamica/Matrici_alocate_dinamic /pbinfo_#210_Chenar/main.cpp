//
//  main.cpp
//  #210 Chenar
//
//  Created by Fernando Donea on 06.04.2022.
//

#include <fstream>
using namespace std;
ifstream fin("chenar.in");
ofstream fout("chenar.out");
int main()
{
    int n,**a;
    fin>>n;
    a=new int*[n+1];
    for(int i=1;i<=n;i++)
    {
        a[i]=new int[n+1];
        for(int j=1;j<=n;j++)
        {
            fin>>j[i[a]];
            
        }
    }
    for(int j=1;j<=n;j++)
    {
        fout<<*(j+a[1])<<" ";
    }
    for(int i=2;i<=n;i++)
    {
        fout<<*(n+a[i])<<" ";
    }
    for(int j=n-1;j>=1;j--)
    {
        fout<<*(j+a[n])<<" ";
    }
    for(int i=n-1;i>=2;i--)
    {
        fout<<*(1+a[i])<<" ";
    }
    
    for(int i=1;i<=n;i++)
    {
        delete[] a[i];
    }
    delete[] a;
    return 0;
}
