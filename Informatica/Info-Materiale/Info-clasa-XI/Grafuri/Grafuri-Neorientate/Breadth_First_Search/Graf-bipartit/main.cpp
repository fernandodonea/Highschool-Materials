//
//  main.cpp
//  Graf bipartit
//
//  Created by Fernando Donea on 19.03.2023.
//

#include <iostream>
using namespace std;
int n,m,a[101][101],c[101],viz[101];
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
bool verif(int x)
{
    int p,u;
    p=u=1;
    c[u]=x;viz[x]=1;
    while(p<=u)
    {
        x=c[p++];
        for(int i=1;i<=n;i++)
        {
            if(a[x][i]==1)
            {
                if(viz[i]==0)
                {
                    c[++u]=i;
                    viz[i]=3-viz[x];
                }
                else if(viz[i]==viz[x])return false;
            }
        }
    }
    return true;
}
void afisare()
{
    for(int i=1;i<=2;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(viz[j]==i)cout<<j<<" ";
        }
    }
}
int main()
{
    bool ok=true;
    citire();
    for(int i=1;i<=n;i++)
    {
        if(viz[i]==0)
        {
            if(verif(i)==false)ok=false;
        }
    }
    if(ok==false)cout<<"Graful nu este bipartit";
    else{
        cout<<"Graful este pibartit";
        afisare();
    }
    return 0;
    
}
