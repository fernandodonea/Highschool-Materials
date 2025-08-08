//
//  main.cpp
//  #3124 PatratMagic0
//
//  Created by Fernando Donea on 06.04.2022.
//

#include <iostream>
using namespace std;
int main()
{
    int n,**a,s=0,s1=0;
    cin>>n;
    a=new int*[n+1];
    bool ok=true;
    for(int i=1;i<=n;i++)
    {
        a[i]=new int[n+1];
        for(int j=1;j<=n;j++)
        {
            cin>>*(j+*(a+i));
            if(i==j)
                s+=j[i[a]];
            if(i+j==n+1)
                s1+=j[i[a]];
            
            if(j[i[a]]<1 || j[i[a]]>n*n)ok=false;
        }
    }
    if(s1!=s)ok=false;
    for(int i=1;i<=n && ok==true;i++)
    {
        s1=0;
        for(int j=1;j<=n;j++)
            s1+=*(j+a[i]);
        if(s1!=s)ok=false;
    }
    for(int j=1;j<=n && ok==true;j++)
    {
        s1=0;
        for(int i=1;i<=n;i++)
            s1+=*(j+a[i]);
        if(s1!=s)ok=false;
    }
    
    if(ok==true)
        cout<<"true";
    else cout<<"false";
    
    for(int i=1;i<=n;i++)
    {
        delete[] a[i];
    }
    delete[] a;
    return 0;
}
