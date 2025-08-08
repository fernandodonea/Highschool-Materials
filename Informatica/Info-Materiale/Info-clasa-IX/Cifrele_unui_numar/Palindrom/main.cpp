//
//  main.cpp
//  Palindrom
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int n,cn,c,ogl=0;
    cout<<"n=";cin>>n;
    cn=n;
    while(cn)
    {
        c=cn%10;
        cn/=10;
        ogl=ogl*10+c;
    }
    if(ogl==n)cout<<"DA";
    else cout<<"NU";
    return 0;
}
