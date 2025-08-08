//
//  main.cpp
//  Determinarea tuturor termenilor mai mici decât n
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c;
    cout<<"n=";cin>>n;
    a=0;b=1;
    cout<<b<<" ";
    while(a+b<=n)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<b<<" ";
    }
    return 0;
}
