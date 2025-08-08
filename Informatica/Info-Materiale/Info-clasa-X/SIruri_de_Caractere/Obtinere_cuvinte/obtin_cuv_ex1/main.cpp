//
//  main.cpp
//  ex 1
//
//  Created by Fernando Donea on 03.02.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[256],x[40];
    cin.getline(s,256);//Calculati valoarea expresiei
    int i,k=0;
    x[0]=NULL;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]!=' ')
        {
            if(!strchr(x, s[i]) && s[i]>='a' && s[i]<='z')
            {
                x[k++]=s[i];
                x[k]=NULL;
            }
        }
    }
    for(i=0;i<k;i++)
        cout<<x[i]<<" ";
    //a l c u t i v o r e x p s
    return 0;
    
}
