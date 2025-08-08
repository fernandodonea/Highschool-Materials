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
    char s[256];
    cin.getline(s, 256);//calculator
    long long n=strlen(s),i;
    for(i=0;i<n;i++)
    {
        if(strchr("aeiou", s[i]))
            cout<<s[i]<<" ";
    }
    //a u a o
    return 0;
}
