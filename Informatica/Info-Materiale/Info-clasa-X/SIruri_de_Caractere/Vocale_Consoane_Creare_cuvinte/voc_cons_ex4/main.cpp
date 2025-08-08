//
//  main.cpp
//  Pb 4
//
//  Created by Fernando Donea on 26.01.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[101],t[202];
    cin.getline(s, 101);//problema aceea este frumoasa
    long long n=strlen(s),i,k=0;
    for(i=0;i<n;i++)
    {
        t[k++]=s[i];
        if(strchr("aeiou", s[i]))
            t[k++]=s[i];
    }
    t[k]=NULL;
    strcpy(s, t);
    cout<<s;//proobleemaa aaceeeeaa eestee fruumooaasaa
    return 0;
}
