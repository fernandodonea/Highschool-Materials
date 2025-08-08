//
//  main.cpp
//  Pb 8
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
    long long n=strlen(s),i;
    bool ok=true;
    for(i=0;i<n && ok==true;i++)
    {
        if(!strchr("0123456789",s[i]))
            ok=false;
    }
    if(ok==true)cout<<"Corect";
    else cout<<"Incorect";
    
    return 0;
}
