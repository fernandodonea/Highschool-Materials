//
//  main.cpp
//  Pb 12
//
//  Created by Fernando Donea on 26.01.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[256];
    cin.getline(s, 256);//Universitatea de Arte Plastice BUCURESTI
    long long n=strlen(s);//U
    if(isupper(s[0]))cout<<s[0];
    for(int i=1;i<n;i++)
    {
        if(s[i]>='A' && s[i]<='Z' && s[i-1]==' ')
            cout<<s[i];//APB
    }
    //UAPB
    return 0;
}
