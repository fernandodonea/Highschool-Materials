//
//  main.cpp
//  DFS recursiv
//
//  Created by Fernando Donea on 19.03.2023.
//

#include <iostream>
using namespace std;
int n,m,a[101][101],viz[101],st[101];
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
void dfs(int x)
{
    viz[x]=1;
    cout<<x<<" ";
    for(int i=1;i<=n;i++)
    {
        if(a[x][i]==1 && viz[i]==0)
        {
            dfs(i);
        }
    }
}
int main()
{
    citire();
    dfs(1);
}
