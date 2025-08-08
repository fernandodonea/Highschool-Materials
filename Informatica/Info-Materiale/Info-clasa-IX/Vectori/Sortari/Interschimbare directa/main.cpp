//
//  main.cpp
//  Interschimbare directa
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int n,i,j,v[101];
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++)cin>>v[i];
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(v[i]>v[j])
            {
                v[0]=v[i];
                v[i]=v[j];
                v[j]=v[0];
            }
        }
    }
    for(i=1;i<=n;i++)cout<<v[i]<<" ";
    return 0;
}
