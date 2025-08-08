//
//  main.cpp
//  Bubble Sort
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int n,i,v[101];
    bool ok;
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++)cin>>v[i];
    do{
        ok=true;
        for(i=1;i<n;i++)
        {
            if(v[i]>v[i+1])
            {
                v[0]=v[i];
                v[i]=v[i+1];
                v[i+1]=v[0];
                ok=false;
            }
        }
    }while(!ok);
    for(i=1;i<=n;i++)cout<<v[i]<<" ";
    return 0;
}
