//
//  main.cpp
//  Pb 2
//
//  Created by Fernando Donea on 09.02.2022.
//

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("x.txt");
ifstream gin("y.txt");
int main()
{
    char x[16],y[16];
    fin>>x;
    gin>>y;
    int i=1,j=1;
    while(i<=7 && j<=7)
    {
        if(strcmp(x, y)<0)
        {
            cout<<x<<" ";
            fin>>x;i++;
        }
        else
        {
            cout<<y<<" ";
            gin>>y;j++;
        }
    }
    while(i<=7)
    {
        cout<<x<<" ";
        fin>>x;
        i++;
    }
    while(j<=7)
    {
        cout<<y<<" ";
        gin>>y;
        j++;
    }
    return 0;
    
}
