//
//  main.cpp
//  DFS iterativ
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
    int vf,ok;
    vf=0;
    st[++vf]=x;viz[x]=1;
    cout<<x<<" ";
    while(vf!=0)
    {
        x=st[vf];
        ok=0;
        for(int i=1;i<=n && ok==0;i++)
        {
            if(a[x][1]==1 && viz[i]==0)
            {
                st[++vf]=x;
                viz[x]=1;
                cout<<i<<" ";
                ok=1;
            }
        }
        if(ok==0)vf--;
    }
}
int main()
{
    citire();
    dfs(1);
    return 0;
}

