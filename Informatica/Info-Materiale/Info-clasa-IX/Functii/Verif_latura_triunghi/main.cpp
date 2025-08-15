//
//  main.cpp
//  verif lat triunghi
//
//  Created by Fernando Donea on 15.02.2021.
//

#include <iostream>
using namespace std;
bool tri(int a, int b, int c)
{
    if(a+b<=c || a+c<=b || b+c<=a)
        return false;
    else
        return true;;
}
