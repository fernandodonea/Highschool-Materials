//
//  main.cpp
//  #1451 Iceberg
//
//  Created by Fernando Donea on 06.04.2022.
//

#include <iostream>
using namespace std;
int main()
{
    int n,**a,k=0,s=0,v[31];
    cin>>n;
    a=new int*[n+1];
    for(int i=1;i<=n;i++)
    {
        a[i]=new int[n+1];
        for(int j=1;j<=n;j++)
        {
            cin>>j[i[a]];
            if(j[i[a]]==1)s++;
        }
    }
    bool ok;
    ok=false;
    while(ok==false)
    {
        v[++k]=s;
        ok=true;
        for(int i=2;i<n;i++)
        {
            for(int j=2;j<n;j++)
            {
                int z=0;
                if(j[i[a]]==1)
                {
                    if(*(j+1+*(a+i))==0)
                        z++;
                    if(*(j-1+*(a+i))==0)
                        z++;
                    if(*(j+*(a+i-1))==0)
                        z++;
                    if(*(j+*(a+i+1))==0)
                        z++;
                }
                if(z>=2)
                {
                    ok=false;
                    s--;
                    a[i][j]=-1;
                }
                
            }
        }
        for(int i=2;i<n;i++)
        {
            for(int j=2;j<n;j++)
            {
                if(a[i][j]==-1)
                {
                    j[i[a]]=0;
                }
            }
        }
    }
    cout<<k-1<<endl;
    for(int i=1;i<k;i++)
    {
        cout<<v[i]<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        delete[] a[i];
    }
    delete[] a;
    return 0;
}
