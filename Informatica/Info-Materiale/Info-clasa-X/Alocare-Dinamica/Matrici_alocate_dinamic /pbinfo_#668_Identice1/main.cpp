//
//  main.cpp
//  #668 Identice1
//
//  Created by Fernando Donea on 05.04.2022.
//

#include <iostream>
using namespace std;
int main()
{
    int n,m,**a,k=0;
    bool ok;
    cin>>n>>m;
    a=new int*[n+1];
    for(int i=1;i<=n;i++)
    {
        a[i]=new int[m+1];
        for(int j=1;j<=m;j++)
        {
            cin>>*(j+a[i]);
        }
    }
    for(int i=1;i<n;i++)
    {
        ok=true;
        for(int j=1;j<=m && ok==true;j++)
        {
            if(j[a[i]]!=j[a[i+1]])
               ok=false;
        }
        if(ok==true)k++;
    }
    cout<<k;
    for(int i=1;i<=n;i++)
    {
        delete[] a[i];
    }
    delete a;
    return 0;
    
}
