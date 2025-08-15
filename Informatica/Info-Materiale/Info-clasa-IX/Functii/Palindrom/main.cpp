//
//  main.cpp
//  palindrom
//
//  Created by Fernando Donea on 23.02.2021.
//

#include <iostream>
using namespace std;
bool pali(int n)
{
    int c,cn=n,ogl=0;
    while(cn)
    {
        c=cn%10;
        cn/=10;
        ogl=ogl*10+c;
    }
    if(ogl==n)return true;
    else return false;
}
