//
//  main.cpp
//  Nr de cifre egale cu zero
//
//  Created by Fernando Donea on 10.11.2021.
//

#include <iostream>
using namespace std;
int zero(int n)
{
    if(n<=9)
    {
        if(n==0)return 1;
        else return  0;
    }
    else
    {
        int c=n%10;
        if(c==0)return zero(n/10)+1;
        else return zero(n/10)+0;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<zero(n);
    return 0;
}
