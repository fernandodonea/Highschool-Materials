//
//  main.cpp
//  Baza b
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int n,b,c,nr=0,p=1;
    cout<<"n=";cin>>n;
    cout<<"b=";cin>>b;
    while(n)
    {
        c=n%b;
        n/=b;
        nr=nr+c*p;p*=10;
    }
    cout<<"nr="<<nr;
    return 0;
}
