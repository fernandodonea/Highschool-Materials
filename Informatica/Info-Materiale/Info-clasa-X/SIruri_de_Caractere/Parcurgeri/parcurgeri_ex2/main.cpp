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
    char s[21];
    cin>>s;
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a' && s[i]<='z')
            s[i]-=32;
    }
    cout<<s;
    return 0;
}
