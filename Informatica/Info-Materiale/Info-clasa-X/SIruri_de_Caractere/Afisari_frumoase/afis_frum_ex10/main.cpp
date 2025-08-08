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
    char s[12],voc[]="aeiou";
    cin>>s;
    long long n=strlen(s),i,j;
    for(i=0;i<=4;i++)
    {
        if(strchr(s, voc[i]))
        {
            for(j=0;j<n;j++)
            {
                if(s[j]!=voc[i])cout<<s[j];
            }
            cout<<endl;
        }
    }
    
    return 0;
}
