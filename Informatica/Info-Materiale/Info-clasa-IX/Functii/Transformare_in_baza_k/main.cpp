//
//  main.cpp
//  Transformare in baza k
//
//  Created by Fernando Donea on 29.03.2021.
//

#include <iostream>
using namespace std;
int bazak(int n, int b)
{
    int c,idk=0,p=1;
    while(n)
    {
        c=n%b;
        n/=b;
        idk=idk+p*c;
        p*=10;
    }
    return idk;
}
int main()
{
    int n,i;
    bool sort;
    cout<<"n=";cin>>n;
    int v[n+1];
    for(i=1;i<=n;i++)cin>>v[i];
    do{
        sort=true;
        for(i=1;i<n;i++)
        {
            int a,b;
            
        }
    }
    
}
