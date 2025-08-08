//
//  main.cpp
//  Flici
//
//  Created by Fernando Donea on 03.10.2022.
//

#include <iostream>
using namespace std;
int f[10001],c[10001];
int main()
{
    int n,x,s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        f[x]++;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        c[x]++;
    }
    int i=0,j=0;
    while(i<=10001 && j<=10001)
    {
        while(i<=10001 && f[i]==0)i++;
        while(j<=10001 && c[j]==0)j++;
        int mini=f[i];
        if(c[j]<mini)mini=c[j];
        s+=mini*abs(f[i]-c[j]);
        f[i]-=mini;
        c[j]-=mini;
    }
    cout<<s;
    return 0;
    
    
}
