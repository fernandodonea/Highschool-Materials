//
//  main.cpp
//  Căutarea unui element în vector
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int n,x,v[101],i;
    bool ok=false;
    cout<<"n=";cin>>n;
    cout<<"x=";cin>>x;
    for(i=1;i<=n;i++)cin>>v[i];
    for(i=1;i<=n;i++)
    {
        if(v[i]==x)ok=true;
    }
    if(ok==true)cout<<"gasit";
    else cout<<"nu exista";
    return 0;
    
}
