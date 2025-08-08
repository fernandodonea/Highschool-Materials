//
//  main.cpp
//  Cel mai mic divizor
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int n,f=2,p,mini=100000000;
    cout<<"n=";cin>>n;
    while(n>1)
    {
        p=0;
        while(n%f==0)
        {
            n/=f;
            p++;
        }
        if(p>0)
        {
            if(f<mini)mini=f;
        }
        f++;
        if(f*f>n)f=n;
    }
    cout<<mini;
    return 0;
}
