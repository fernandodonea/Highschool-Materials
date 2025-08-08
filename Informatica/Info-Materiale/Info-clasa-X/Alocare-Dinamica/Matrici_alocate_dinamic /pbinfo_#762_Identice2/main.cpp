//
//  main.cpp
//  #762 Identice2
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
        
        for(int j=i+1;j<=n;j++)
        {
            ok=true;
            for(int l=1;l<=m && ok==true;l++)
            {
                if(*(l+a[i])!=*(l+a[j]))
                    ok=false;
            }
            if(ok==true)
            {
                k++;
            }
        }
        
    }
    cout<<k;
    for(int i=1;i<=n;i++)
    {
        delete[] a[i];
    }
    delete a;
    return 0;
    
}
