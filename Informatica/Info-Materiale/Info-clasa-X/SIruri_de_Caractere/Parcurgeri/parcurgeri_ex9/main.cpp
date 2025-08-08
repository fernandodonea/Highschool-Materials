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
    char s[256];
    cin.getline(s, 256);
        //Voi lua 9 la matematica si 10 la informatica
    long long n=strlen(s);
    int i,k=0;
    for(i=0;i<n;i++)
    {
        if(s[i]>='a' && s[i]<'z')
            k++;
    }
    cout<<k;//32
    return 0;
}
