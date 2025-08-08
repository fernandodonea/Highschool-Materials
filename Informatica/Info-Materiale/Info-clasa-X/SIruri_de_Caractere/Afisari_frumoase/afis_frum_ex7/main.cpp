//
//  main.cpp
//  Pb 7
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
        if(strchr("aeiou",s[i]))
        {
            for(j=i;j<n;j++)cout<<s[j];
            cout<<endl;
        }
    }
    return 0;
}
