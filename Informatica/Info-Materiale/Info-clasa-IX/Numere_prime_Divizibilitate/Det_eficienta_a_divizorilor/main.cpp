//
//  main.cpp
//  Determinarea eficientă a divizorilor
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"n=";cin>>n;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            j=n/i;
            if(i!=j)cout<<j<<" ";
        }
    }
    return 0;
}
