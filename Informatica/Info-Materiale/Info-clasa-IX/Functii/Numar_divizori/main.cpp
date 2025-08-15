//
//  main.cpp
//  numar divizori
//
//  Created by Fernando Donea on 01.02.2021.
//

#include <iostream>
using namespace std;
int nrdiv(int n)
{
    int i,j,k=0;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            k++;
            j=n/i;
            if(i!=j)k++;
        }
    }
    return k;
}

//cel mai eficient plm
int NrDiv(int n)
{
    int i,k=0;
    for(i=1;i*i<=n;i++)
    {
        
        if(n%i==0)
        {
            k+=2;
        }
        if(i*i==n)k--;
    }
    return k;
}
