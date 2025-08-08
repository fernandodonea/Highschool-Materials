//
//  main.cpp
//  Clasa Numar
//
//  Created by Fernando Donea on 04.05.2023.
//

#include <iostream>
using namespace std;
class numar
{
    public:
        int nr;
        numar();
        numar(int );
        bool prim();
        int suma();
        int produs();
        int nrdiv();
};

numar::numar()
{
    nr=0;
}

numar::numar(int v)
{
    nr=v;
}

bool numar::prim()
{
    int i;
    if(nr<2) return false;
    if(nr==2) return true;
    if(nr%2==0) return false;
    for(i=3;i*i<=nr;i+=2)
        if(nr%i==0) return false;
    return true;
}
int numar::suma()
{
    int s=0,nrc=nr;
    while(nrc)
    {
        s=s+nrc%10;
        nrc=nrc/10;
    }
    return s;
}
int numar::produs()
{
    int p=1;
    for(int i=1;i*i<=nr;i++)
    {
        if(nr%i==0)
        {
            p=p*i;
            int j=nr/i;
            if(j!=i)
                p=p*j;
        }
    }
    return p;
}
int numar::nrdiv()
{
    int f=2,p,nrc=nr,prod=1;
    while(nrc>1)
    {
        p=0;
        while(nrc%f==0)
        {
            nrc=nrc/f;
            p++;
        }
        if(p>0)prod=prod*(p+1);
        f++;
    }
    return prod;
}
int main()
{
    numar x;
    numar y(20);
    
    cout<<x.nr<<" "<<y.nr<<" ";
    if(y.prim()) cout<<"da"<<" ";
    else cout<<"nu"<<" ";
    cout<<y.suma()<<" "<<y.produs()<<" "<<y.nrdiv();
    return 0;
}
