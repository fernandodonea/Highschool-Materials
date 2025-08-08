//
//  main.cpp
//  Pb 2
//
//  Created by Fernando Donea on 26.01.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[41];
    cin.getline(s, 41);//bacalaureat
    long long n=strlen(s),i;
    for(i=0;i<n;i++)
    {
        if(!strchr("aeiou", s[i]))
        {
            strcpy(s+i, s+i+1);
        }
    }
    cout<<s;//aaauea
    return 0;
}
