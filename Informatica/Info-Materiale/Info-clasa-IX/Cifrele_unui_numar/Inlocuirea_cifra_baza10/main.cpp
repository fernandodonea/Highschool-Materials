//
//  main.cpp
//  Inlocuirea cifrei -baza10
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int n,nr,p,x,y,c;
    p=1;nr=0;
    cout<<"n=";cin>>n;
    cout<<"x=";cin>>x;
    cout<<"y=";cin>>y;
    while(n)
    {
        c=n%10;
        n/=10;
        if(c==x)c=y;
        nr=nr+c*p;
        p*=10;
    }
    cout<<"nr="<<nr;
    return 0;
}
