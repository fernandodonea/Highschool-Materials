//
//  main.cpp
//  munte
//
//  Created by Fernando Donea on 23.03.2021.
//

#include <iostream>
using namespace std;
bool munte(int n)
{
    int cn,ok=1;
    cn=n;
    while(n>9 && n%10<(n/10)%10)
        n/=10;
    if(n==cn || n<10)ok=0;
    while(n>0 && n%10>(n/10)%10)
        n/=10;
    if(n>9)ok=0;
    if(ok==1)return true;
    else return false;
}
