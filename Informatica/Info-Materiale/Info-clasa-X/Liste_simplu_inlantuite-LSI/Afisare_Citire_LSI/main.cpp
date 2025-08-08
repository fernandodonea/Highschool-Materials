//
//  main.cpp
//  Afisarea si citirea LSI
//
//  Created by Fernando Donea on 02.05.2022.
//

#include <iostream>
using namespace std;
struct nod
{
    int info;
    nod *urm;
}*prim;
void creare(nod *&prim)
{
    int n,x;
    nod *p;
    prim=NULL;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        p=new nod;
        p->info=x;
        p->urm=prim;
        prim=p;
    }
}
void afisare(nod *prim)
{
    for(nod *p=prim;p!=NULL;p=p->urm)
        cout<<p->info<<" ";
}
int main()
{
    creare(prim);
    afisare(prim);
    return 0;
}
