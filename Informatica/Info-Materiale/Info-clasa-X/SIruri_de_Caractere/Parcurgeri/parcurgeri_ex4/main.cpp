//
//  main.cpp
//  Pb 4
//
//  Created by Fernando Donea on 26.01.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[256];
    cin.getline(s, 256);
    long long n=strlen(s);
    if(islower(s[0]))s[0]-=32;
    for(int i=1;i<n;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            if(s[i-1]==' ')
                s[i]=toupper(s[i]);
        }
    }
    cout<<s;
    return 0;
    
}
