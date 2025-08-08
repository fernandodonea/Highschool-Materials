//
//  main.cpp
//  Determinarea celui mai mare termen mai mic decât n
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c=0;
    cout<<"n=";cin>>n;
    a=0;b=1;
    while(a+b<n)
    {
        c=a+b;
        a=b;
        b=c;
    }
    cout<<c;
    return 0;
}
