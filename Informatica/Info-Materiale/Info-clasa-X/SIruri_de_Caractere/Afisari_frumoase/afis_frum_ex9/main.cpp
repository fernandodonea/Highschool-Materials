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
    char s[51];
    cin>>s;//abbc
    long long n=strlen(s),i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)cout<<s[j];
        }
        cout<<endl;
    }
    /*
     bbc
     abc
     abc
     abb
     */
    return 0;
}
