//
//  main.cpp
//  Pb 3
//
//  Created by Fernando Donea on 26.01.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[256];
    cin.getline(s, 256);//Ana sustine bacul la informatica
    long long n=strlen(s),i;
    if(isalpha(s[0]))cout<<s[0];
    for(i=1;i<n;i++)
    {
        if(isalpha(s[i]) && s[i-1]==' ')
            cout<<s[i];//Asbli
    }
    return 0;
}
