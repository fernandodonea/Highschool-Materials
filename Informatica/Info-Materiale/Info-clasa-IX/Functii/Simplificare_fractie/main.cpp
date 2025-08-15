//
//  main.cpp
//  simplificare
//
//  Created by Fernando Donea on 23.11.2020.
//

#include <iostream>
using namespace std;
void simpli(int &a,int &b)
{
    int ca,cb,limpi;
    ca=a;cb=b;
    while(cb!=0)
    {int r=ca%cb;ca=cb;cb=r;}
    limpi=ca;
    a/=limpi;
    b/=limpi;
}
int main()
{
    int a,b;
    cin>>a>>b;
    simpli(a, b);
    cout<<a<<"/"<<b;
    return 0;
}
