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
    char s[256],lit[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cin.getline(s, 256);//LA BACALAUREAT SUBIECTELE AU FOST USOARE
    int fr[27]={0},i;
    for(i=0;i<27;i++)
    {
        if(!strchr("AEIOU", lit[i]))
        {
            if(strchr(s, lit[i]))
                fr[i]=1;
        }
    }
    for(i=0;i<26;i++)
    {
        if(fr[i]>0)
            cout<<lit[i]<<" ";
    }
    //B C F L R S T
    return 0;
}
