//
//  main.cpp
//  Pantofi in cutie
//
//  Created by Fernando Donea on 30.09.2022.
//

#include <iostream>
using namespace std;
long s[1001];
int main()
{
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        s[i]=(s[i-1]+x)%n;
    }
    bool ok=false;
    for(int i=1;i<=n && ok==false;i++)
    {
        if(s[i]==0)
        {
            ok=true;//(x1+x2+...+xi)%n==0
            cout<<1<<" "<<i;
        }
    }
    //n sume si n-1 resturi  => exista i,j ai Si%n==Sj%n
    // => (Sj-Si)%n==0
    //=> (xi+1 + ... + xj)%n==0;
    for(int i=1;i<n && ok==false;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s[j]-s[i]==0)
            {
                ok=true;
                cout<<i+1<<" "<<j;
            }
        }
    }
}
