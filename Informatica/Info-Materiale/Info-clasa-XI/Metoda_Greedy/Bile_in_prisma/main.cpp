//
//  main.cpp
//  Bile in prisma
//
//  Created by Fernando Donea on 03.10.2022.
//

#include <iostream>
using namespace std;
void citire(int &n, int &L, int &H, int r[])
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>r[i];
    }
    cin>>L>>H;
}
//ordonare r[];
void greedy(int n, int L, int H, int r[])
{
    int k=0;
    float vp,vsf;
    vp=L*L*H;
    for(int i=1;i<=n && H>0;i++)
    {
        if(2*r[i]<=H && 2*r[i]<=L)
        {
            k++;
            H-=2*r[i];
            vsf=(4*3*14*r[i]*r[i])/3;
            vp-=vsf;
        }
    }
    cout<<k<<" bile in prisma"<<endl;
    cout<<"volumul ramas de aer: "<<vp<<endl;
}
