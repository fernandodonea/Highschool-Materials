//
//  main.cpp
//  Pb 3
//
//  Created by Fernando Donea on 26.01.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[101];
    cin.getline(s,101);
    long long n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if(strchr("aeiou", s[i]))
            s[i]=s[i]+1;
    }
    cout<<s;
    return 0;
    
}

