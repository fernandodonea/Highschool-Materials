//
//  main.cpp
//  Pb 7
//
//  Created by Fernando Donea on 26.01.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[101],b[101];
    cin>>a>>b;//marina ^ elena
    long long n,m,cn,p=0,i;
    n=strlen(a)-1;m=strlen(b)-1;cn=n;
    bool ok=true;
    while(n>=0 && m>=0 && ok==true)
    {
        if(a[n]!=b[m])
        {
            ok=false;
        }
        else
        {
            p=n;n--;m--;
        }
    }
    for(i=p;i<=cn;i++)cout<<a[i];//na
    return 0;
}
