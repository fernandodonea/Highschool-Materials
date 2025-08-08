//
//  main.cpp
//  Determinarea primelor n termeni
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c;
    a=1;b=1;
    cout<<"n=";cin>>n;
    if(n==1)cout<<a;
    if(n==2)cout<<a<<" "<<b;
    else
    {
        cout<<a<<" "<<b<<" ";
        for(int i=3;i<=n;i++)
        {
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
        }
    }
    return 0;
}
