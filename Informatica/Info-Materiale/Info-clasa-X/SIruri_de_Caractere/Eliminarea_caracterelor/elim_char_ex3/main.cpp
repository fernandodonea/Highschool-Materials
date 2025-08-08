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
    char s[31];
    cin>>s;
    int n=strlen(s),i,j,ok=1;
    for(i=0;i<n-1 && ok==1;i++)
    {
        if(!strchr("aeiou", s[i]))
        {
            for(j=i+1;j<n && ok==1;j++)
            {
                if(!strchr("aeiou", s[j]))
                {
                    if(s[i]>s[j])ok=0;
                }
                
            }
        }
            
    }
    if(ok==1)cout<<"DA";
    else cout<<"NU";
    return 0;
}
