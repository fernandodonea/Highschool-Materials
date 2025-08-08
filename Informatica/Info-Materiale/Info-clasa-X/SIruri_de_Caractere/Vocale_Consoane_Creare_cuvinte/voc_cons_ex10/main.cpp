//
//  main.cpp
//  Pb 10
//
//  Created by Fernando Donea on 26.01.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[101],t[202];
    cin.getline(s, 101);//Ana are 17 ani
    long long n=strlen(s);
    int i,k=0;
    for(i=0;i<n;i++)
    {
        if(strchr("0123456789",s[i]))
        {
            t[k++]=s[i];
        }
    }
    t[k]='\0';
    strcpy(s,t);
    if(k==0)cout<<"Sir vid";
    else cout<<s;//17
    return 0;
}

