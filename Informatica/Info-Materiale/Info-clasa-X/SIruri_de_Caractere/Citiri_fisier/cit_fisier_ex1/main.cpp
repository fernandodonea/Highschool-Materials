//
//  main.cpp
//  Pb 1
//
//  Created by Fernando Donea on 09.02.2022.
//

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("BAC.TXT");
int main()
{
    char x[25];
    long long n,maxi=0,k=0;
    while(fin>>x)
    {
        n=strlen(x);
        if(n>maxi)
        {
            maxi=n;
            k=1;
        }
        else if(n==maxi)k++;
    }
    cout<<maxi<<" "<<k;
    return 0;
}
