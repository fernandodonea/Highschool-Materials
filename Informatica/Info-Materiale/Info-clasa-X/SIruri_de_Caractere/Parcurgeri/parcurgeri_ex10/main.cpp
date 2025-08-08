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
    char s[256],c='0';
    cin.getline(s, 256);//mare   frig saci
    long long n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if(!strchr("aeiou",s[i]))
            c=s[i];
    }
    cout<<c;//c
    return 0;
}
