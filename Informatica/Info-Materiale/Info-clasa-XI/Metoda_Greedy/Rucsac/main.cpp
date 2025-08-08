//
//  main.cpp
//  Rucsac
//
//  Created by Fernando Donea on 03.10.2022.
//

#include <iostream>
#include <algorithm>
using namespace std;
struct obiect{
    int g,v;
    float r;
}a[1001];
void cititr(int &n, int &gmax, obiect a[])
{
    cin>>n>>gmax;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].v>>a[i].g;
        a[i].r=(float)a[i].v/a[i].g;
    }
}
bool ordo(obiect a, obiect b)
{
    return (a.r<=b.r);
}
void greedy(int n, int gmax, obiect a[])
{
    float s=0;
    for(int i=1;i<=n && gmax>0;i++)
    {
        if(a[i].g<=gmax)
        {
            s+=a[i].v;
            gmax-=a[i].g;
        }
        else
        {
            s+=a[i].r*gmax;
            gmax=0;
        }
    }
    cout<<s;
}
