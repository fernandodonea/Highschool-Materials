//
//  main.cpp
//  Pb 2
//
//  Created by Fernando Donea on 26.01.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[256];
    cin>>s;
    int n,m;
    n=strlen(s);
    m=n/2;
    if(n%2==1)
        cout<<s[m];
    else cout<<s[m-1]<<s[m];
        
    return 0;
    
}
