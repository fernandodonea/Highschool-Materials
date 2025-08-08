//
//  main.cpp
//  Pb 1
//
//  Created by Fernando Donea on 26.01.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[16];
    cin>>s;
    long long n,m,i,aux;
    n=strlen(s);
    m=n/2;
    cout<<"m="<<m<<endl;
    for(i=0;i<m;i++)
    {
        aux=s[i];
        s[i]=s[i+m+n%2];
        s[i+m+n%2]=aux;
    }
    cout<<s;
    return 0;
}
