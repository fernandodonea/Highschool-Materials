//
//  main.cpp
//  Descompunerea unui număr în factori primi
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int n,f=2,p;
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
            cout<<f<<" ^ "<<p<<endl;
        }
        f++;
        if(f*f>n)f=n;
    }
    return 0;
}
