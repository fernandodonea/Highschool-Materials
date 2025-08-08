//
//  main.cpp
//  ex 2
//
//  Created by Fernando Donea on 02.02.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[256],t[256],*x;
    cin.getline(s, 256);
    t[0]=NULL;
    x=strtok(s," ,.");
    while(x!=NULL)
    {
        if(!strchr("AEIOUaeiou", x[0]))
        {
            strcat(t,x);
            strcat(t," ");
        }
        x=strtok(NULL, " .,");
    }
    t[strlen(t)-1]=NULL;
    cout<<t;
    return 0;
}
