//
//  main.cpp
//  Componente conexe maximale
//
//  Created by Fernando Donea on 19.03.2023.
//

#include <iostream>
using namespace std;
int n,m,a[101][101],viz[101],c[101],nr[101];
void citire()
{
    int x,y;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        a[x][y]=a[y][x]=1;
    }
}
void bfs(int x, int k)
{
    int p,u;
    p=u=1;
    c[u]=x;viz[x]=k;
    while(p<=u)
    {
        x=c[p++];
        for(int i=1;i<=n;i++)
        {
            if(a[x][i]==1 && viz[i]==0)
            {
                c[++u]=x;
                viz[i]=k;
            }
        }
    }
    nr[k]=p;
}
int maxim(int k)
{
    int maxi=-1;
    for(int i=1;i<=k;i++)
    {
        if(nr[i]>maxi)maxi=nr[i];
    }
    return maxi;
}
void afisare(int k)
{
    for(int i=1;i<=n;i++)
    {
        if(viz[i]==k)cout<<i<<" ";
    }
}
int main()
{
    int maxi,k=0;
    citire();
    for(int i=1;i<=n;i++)
    {
        if(viz[i]==0)
        {
            k++;
            bfs(i, k);
        }
    }
    maxi=maxim(k);
    for(int i=1;i<=k;i++)
    {
        if(nr[i]==maxi)
        {
            afisare(i);
        }
    }
    return 0;
}
