//
//  main.cpp
//  Eliminarea cifrei -baza10
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int n,nr=0,p=1,c,x;
    cout<<"n=";cin>>n;
    cout<<"x=";cin>>x;
    while(n)
    {
        c=n%10;
        n/=10;
        if(c!=x)
        {
            nr=nr+p*c;
            p*=10;
        }
    }
    cout<<"nr="<<nr;
    return 0;
    
}
