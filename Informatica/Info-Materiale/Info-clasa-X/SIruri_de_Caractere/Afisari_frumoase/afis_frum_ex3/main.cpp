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
    char s[51];
    cin>>s;//EXAMEN
    long long n=strlen(s),i,j;
    for(i=n-1;i>=0;i--)
    {
        for(j=i;j<n;j++)
            cout<<s[j];
        cout<<endl;
    }
    /*
     N
     EN
     MEN
     AMEN
     XAMEN
     EXAMEN
    */
    return 0;
}
