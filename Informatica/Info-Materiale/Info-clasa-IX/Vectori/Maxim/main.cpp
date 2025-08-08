//
//  main.cpp
//  maxim
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int n,i,v[101],mini=100000000,maxi=-1;
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++)cin>>v[i];
    for(i=1;i<=n;i++)
    {
        if(v[i]>maxi)maxi=v[i];
        if(v[i]<mini)mini=v[i];
    }
    cout<<"maxim="<<maxi<<endl;
    cout<<"minim="<<mini<<endl;
    return 0;
}
