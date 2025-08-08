//
//  main.cpp
//  Pb 5
//
//  Created by Fernando Donea on 26.01.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[256];
    cin.getline(s,256);//maine este proba la informatica
    long long n=strlen(s);
    if(islower(s[0]))
        s[0]-=32;
    if(islower(s[n-1]))
        s[n-1]-=32;
    
    for(int i=0;i<n-1;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            if(s[i-1]==' ' || s[i+1]==' ')
                s[i]=s[i]-32;
        }
    }
    cout<<s;
    return 0;
    
}

