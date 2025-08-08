//
//  main.cpp
//  Cutii
//
//  Created by Fernando Donea on 21.09.2022.
//
#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("CUTII.IN");
ofstream fout("CUTII.OUT");
void citire(int &n, int p[], int c[])
{
    fin>>n;
    for(int i=1;i<=n+1;i++)
    {
        fin>>p[i];
    }
    for(int i=1;i<=n+1;i++)
    {
        fin>>c[i];
    }
}
bool gary(int n, int p[], int c[])
{
    for(int i=1;i<=n+1;i++)
    {
        if(p[i]!=c[i])return false;
    }
    return true;
}
void greedy(int &k, int p[], int c[])
{
    int i=1;
    while(p[i]!=c[k])i++;
    p[k]=p[i];
    k=i;
    p[k]=0;
}
int main()
{
    int n,p[101],c[101];
    citire(n, p, c);
    int k=1,nr=0;
    while(p[k]!=0)k++;
    while(gary(n, p, c)==false)
    {
        nr++;
        greedy(k, p, c);
    }
    fout<<nr;
    fin.close();
    fout.close();
    return 0;
}


