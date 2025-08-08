//
//  main.cpp
//  Cmmmc
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int a,b,p;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    p=a*b;
    while(b!=0)
    {int r=a%b;a=b;b=r;}
    cout<<"cmmmc="<<p/a<<endl;
    return 0;
}
