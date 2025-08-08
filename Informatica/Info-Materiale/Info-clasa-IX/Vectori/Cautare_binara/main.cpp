//
//  main.cpp
//  Cautare binara
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int n,x,i,v[101],st,dr,mij;
    bool ok=false;
    cout<<"n=";cin>>n;
    cout<<"x=";cin>>x;
    for(i=1;i<=n;i++)cin>>v[i];
    st=1;dr=n;
    while(st<=dr && ok==false)
    {
        mij=(st+dr)/2;
        if(v[mij]==x)ok=true;
        if(x<v[mij])dr=mij-1;
        else st=mij+1;
    }
    if(ok==true)cout<<"DA";
    else cout<<"NU";
    return 0;
}
