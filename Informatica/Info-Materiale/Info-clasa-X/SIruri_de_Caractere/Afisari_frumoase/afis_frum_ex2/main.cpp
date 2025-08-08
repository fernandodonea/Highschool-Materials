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
    char s[51];
    cin.getline(s, 51);//BACALAUREAT
    long long n=strlen(s),i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
            cout<<s[j];
        cout<<endl;
    /*
     B
     BA
     BAC
     BACA
     BACAL
     BACALA
     BACALAU
     BACALAUR
     BACALAURE
     BACALAUREA
     BACALAUREAT
     */
    
    return 0;
}

