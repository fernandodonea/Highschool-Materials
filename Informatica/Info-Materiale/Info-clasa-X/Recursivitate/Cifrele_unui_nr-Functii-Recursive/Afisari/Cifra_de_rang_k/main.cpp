//
//  main.cpp
//  Cifra de rang k
//
//  Created by Fernando Donea on 14.11.2021.
//

#include <iostream>
using namespace std;
int nr=0;
void rang(int n, int k)
{
    if(n<=9)
    {
        nr++;
        if(k==nr)cout<<n;
        nr--;
    }
    else
    {
        nr++;
        rang(n/10, k);
        if(nr==k)cout<<n%10;
        nr--;
        
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    rang(n,k);
    return 0;
}

