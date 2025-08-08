//
//  main.cpp
//  Pb 6
//
//  Created by Fernando Donea on 26.01.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[256];
    cin.getline(s, 256);//ele sunt eleve in clasa a opta
    long long n=strlen(s);
    int k=0,i,v=0;
    if(strchr("aeiou", s[0]))v++;
    k++;
    for(i=1;i<n;i++)
    {
        if(s[i]==' ')
        {
            k++;
            if(strchr("aeiou", s[i+1]))v++;
        }
    }
    cout<<k<<" "<<v;//7 5
    return 0;
}
