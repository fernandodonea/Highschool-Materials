//
//  main.cpp
//  Pb 9
//
//  Created by Fernando Donea on 26.01.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[101],t[201];
    cin.getline(s, 101);//Examenul de bacalaureat
    long long n=strlen(s);
    int i,k=0;
    for(i=0;i<n;i++)
    {
        t[k++]=s[i];
        if(strchr("AEIOUaeiou", s[i]))
            t[k++]='*';
    }
    t[k]=NULL;
    strcpy(s, t);
    cout<<s;//E*xa*me*nu*l de* ba*ca*la*u*re*a*t
    return 0;
}
