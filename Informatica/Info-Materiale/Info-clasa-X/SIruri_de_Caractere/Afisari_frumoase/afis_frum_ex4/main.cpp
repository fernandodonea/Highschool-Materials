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
    char s[16];
    cin>>s;//examen
    long long n=strlen(s),i;
    for(i=0;i<n;i++)
    {
        if(strchr("aeiou", s[i]))
        {
            strcpy(s+i,s+i+1);
            cout<<s<<endl;
            n--;
        }
    }
    /*
     xamen
     xmen
     xmn
    */
    return 0;
}
