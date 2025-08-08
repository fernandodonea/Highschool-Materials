//
//  main.cpp
//  Simplificarea unei fractii
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int a,b,x,y;
    cout<<"a/b="<<endl;
    cin>>a;cin>>b;
    x=a;y=b;
    while(y)
    {int r=x%y;x=y;y=r;}
    a/=x;b/=x;
    cout<<a<<"/"<<b<<endl;
    return 0;
    
}
