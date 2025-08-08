//
//  main.cpp
//  Verificare nr prim
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
bool prim(int n)
{
    if(n<=1)return false;
    if(n==2)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    int n;
    cout<<"n=";cin>>n;
    if(prim(n)==true)cout<<"DA";
    else cout<<"NU";
    return 0;
}

