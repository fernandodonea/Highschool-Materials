//
//  main.cpp
//  BFS folosind coada
//
//  Created by Fernando Donea on 19.03.2023.
//

#include <iostream>
using namespace std;
int n,a[101][101],c[101],viz[101],x;
void citire()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>x;
}
void bfs(int x)
{
    int p,u;
    p=u=1;
    c[u]=x;viz[x]=1;
    cout<<x<<" ";
    while(p<=u)
    {
        x=c[p++];
        for(int i=1;i<=n;i++)
        {
            if(a[x][i]==1 && viz[i]==0)
            {
                c[++u]=x;
                viz[x]=1;
                cout<<i<<" ";
            }
        }
    }
}
int main()
{
    citire();
    bfs(x);
}
