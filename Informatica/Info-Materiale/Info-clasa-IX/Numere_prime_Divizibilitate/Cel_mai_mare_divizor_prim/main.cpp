//
//  main.cpp
//  Cel mai mare divizor prim
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int n,f=2,p,maxi=-1;
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
            if(f>maxi)maxi=f;
        }
        f++;
        if(f*f>n)f=n;
    }
    cout<<"Cel mai mare divizor prim este "<<maxi<<endl;
    return 0;
}
