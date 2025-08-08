//
//  main.cpp
//  Numere frumoase
//
//  Created by Fernando Donea on 03.10.2022.
//
// Un nr. este frumos daca se poate scrie de forma 2^x*3^y*5&z, x,y,z sunt nr nat. Afisati primele n numere frumoase
//primele 18: 1 2 3 4 5 6 8 9 10 12 15 16 18 20 24 25 27 30
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k2,k3,k5,x2,x3,x5;
    int v[1001];
    v[1]=1; //primul nr frumos
    k5=k2=k3=1;
    for(int i=2;i<=n;i++)
    {
        x2=v[k2]*2;
        x3=v[k3]*3;
        x5=v[k5]*5;
        int mini=x2;
        if(x3<mini)mini=x3;
        if(x5<mini)mini=x5;
        v[i]=mini;
        if(x2==mini)k2++;
        if(x3==mini)k3++;
        if(x5==mini)k5++;
    }
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
    return  0;
    
}
