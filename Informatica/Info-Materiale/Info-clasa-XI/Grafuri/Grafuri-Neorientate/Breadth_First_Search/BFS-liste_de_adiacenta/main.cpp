//
//  main.cpp
//  BFS cu liste de adiacență
//
//  Created by Fernando Donea on 19.03.2023.
//

#include <iostream>
using namespace std;
int n,m,c[101];
struct nod
{
    int info;
    nod *urm;
}prim[101];
void add(nod *&p,int x)
{
    nod *nou;
    nou=new nod;
    nou->info=x;
    nou->urm=p;
    p=nou;
}
void citire()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        //?????add(prim[x],y);
    }
}
void bfs(int x)
{
    int p,u,viz[101];
    nod *q;
    for(int i=1;i<=n;i++)
        viz[i]=0;
    p=u=1;
    c[u]=x;viz[x]=1;
    cout<<x<<" ";
    while(u<=p)
    {
        x=c[p++];
        for(q=&prim[x];q!=NULL;q=q->urm)
        {
            int i=q->info;
            if(viz[i]==0)
            {
                c[++u]=i;
                viz[i]=1;
                cout<<i<<" ";
            }
        }
    }
}
int main()
{
    citire();
    bfs(1);
    return 0;
}
