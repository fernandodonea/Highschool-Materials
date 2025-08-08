//
//  main.cpp
//  Pb 1
//
//  Created by Fernando Donea on 26.01.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[31];
    cin>>s;//proba
    long long n=strlen(s),i,j;
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<=i;j++)cout<<s[j];
        cout<<endl;
    }
    /*proba
    prob
    pro
    pr
    p*/
    return 0;
}
