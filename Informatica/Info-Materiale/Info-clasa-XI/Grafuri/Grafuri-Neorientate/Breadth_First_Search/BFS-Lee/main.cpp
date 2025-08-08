//
//  main.cpp
//  Algoritmul lui Lee
//
//  Created by Fernando Donea on 19.03.2023.
//


//Algoritmul lui Lee determina lungimea minima a unui lant de la un varf p la un varf 1
#include <iostream>
using namespace std;
int n,m,a[101][101],c[101],viz[101],p,q;
void citire()
{
    int x,y;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        a[x][y]=a[y][x]=1;
    }
    cin>>p>>q;
}
int lee(int p, int q)
{
    int pr,u,viz[101],x;
    for(int i=1;i<=n;i++)
        viz[i]=-1;
    pr=u=1;
    c[u]=p;viz[p]=0;
    while(pr<=u)
    {
        x=c[p++];
        for(int i=1;i<=n;i++)
        {
            if(a[x][i]==1 && viz[i]==-1)
            {
                c[++u]=i;
                viz[i]=viz[x]+1;
            }
        }
    }
    return viz[q];
}
int main()
{
    citire();
    cout<<lee(p, q);
    
}
