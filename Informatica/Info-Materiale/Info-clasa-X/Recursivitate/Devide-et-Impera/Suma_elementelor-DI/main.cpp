//
//  main.cpp
//  Suma Elementelor Devide et impera
//
//  Created by Fernando Donea on 15.09.2022.
//

#include <iostream>
using namespace std;
int suma(int v[], int st, int dr)
{
    if(st==dr)
        return v[st];
    else
    {
        int m=(st+dr)/2;
        int s1=suma(v, st, m);
        int s2=suma(v, m+1, dr);
        return s1+s2;
    }
}
int main()
{
    int s,n,v[101];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    s=suma(v, 1, n);
    cout<<s;
    return 0;
    
}
