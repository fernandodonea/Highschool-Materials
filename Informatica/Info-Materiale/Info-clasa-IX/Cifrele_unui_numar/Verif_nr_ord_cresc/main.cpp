//
//  main.cpp
//  Verif. nr ord. crescator
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int n,a,b;
    bool ok=true;
    cout<<"n=";cin>>n;
    while(n>0 && ok==true)
    {
        a=n%10;
        b=(n/10)%10;
        n/=10;
        if(a<b)ok=false;
    }
    if(ok==true)cout<<"DA";
    else cout<<"NU";
    return 0;
}
