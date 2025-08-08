//
//  main.cpp
//  Cmmdc Euclid
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    while(b!=0)
    { int r=a%b;a=b;b=r;}
    cout<<"cmmdc="<<a;
    return  0;
}
