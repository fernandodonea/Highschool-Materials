//
//  main.cpp
//  Scrierea unui număr ca suma de puteri ale lui 2
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,p;
    cout<<"n=";cin>>n;
    while(n>0)
    {
        p=0;
        while(pow(2, p)<=n)p++;
        p--;
        cout<<pow(2, p)<<endl;
        n-=pow(2, p);
    }
    return 0;
}
