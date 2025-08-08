//
//  main.cpp
//  Determinarea numărului de zerouri de la sfârșitul unui produs
//
//  Created by Fernando Donea on 06.05.2021.
//
//minimul dintre exponentul lui 2 și exponentul lui 5 în descompunerea în factori prim a produsului
#include <iostream>
using namespace std;
int main()
{
    int n,p=5,s=0;
    cout<<"n!=";cin>>n;
    while(p<=n)
    {
        s+=n/p;p*=5;
    }
    cout<<s;
    return 0;
}
