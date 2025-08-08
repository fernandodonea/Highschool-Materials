//
//  main.cpp
//  Pb 6
//
//  Created by Fernando Donea on 26.01.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[51];
    cin>>s;
    long long n=strlen(s),i,j;
    for(i=n-1;i>=0;i--)
    {
        if(strchr("aeiou", s[i]))
        {
            for(j=0;j<=i;j++)cout<<s[j];
            cout<<endl;
        }
    }
    return 0;
}
