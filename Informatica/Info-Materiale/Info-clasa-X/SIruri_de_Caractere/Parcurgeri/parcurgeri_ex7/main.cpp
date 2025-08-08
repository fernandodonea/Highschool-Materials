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
    char a[201],b[201];
    cin.getline(a, 201);//diamant
    cin.getline(b, 201);//pierdut
    long long n=strlen(a);
    int i;
    for(i=0;i<n;i++)
    {
        if(strchr("aeiou", a[i]) && strchr("aeiou", b[i]))
            cout<<'*';
        else if(!strchr("aeiou", a[i]) && !strchr("aeiou", b[i]))
            cout<<'#';
        else cout<<'?';
        //#**#??#
    }
    return 0;
}

