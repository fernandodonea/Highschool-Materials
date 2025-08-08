//
//  main.cpp
//  Cmmdc Scaderi repetate
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
    while(a!=b)
    {
        if(a>b)a=a-b;
        else b=b-a;
    }
    cout<<"cmmdc="<<a;
    return 0;
}
