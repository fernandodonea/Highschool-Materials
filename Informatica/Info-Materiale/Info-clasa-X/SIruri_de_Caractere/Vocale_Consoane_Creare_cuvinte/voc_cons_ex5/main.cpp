//
//  main.cpp
//  Pb 5
//
//  Created by Fernando Donea on 26.01.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[256],t[256];
    cin.getline(s, 256);
    long long n=strlen(s),i,k=0;
    /* 1.strcpy(s,s+2);*/
    for(i=2;i<n;i++)
    {
        t[k++]=s[i];
    }
    t[k]=NULL;
    strcpy(s,t);
    cout<<s;
    return 0;
}

