//
//  main.cpp
//  Pb 5
//
//  Created by Fernando Donea on 10.02.2022.
//

//afiseaza cuvintele comune din doua siruri

#include <iostream>
#include <cstring>
using namespace std;
void cuv(char s[], char a[][15], int &k)
{
    char *x;
    k=0;
    x=strtok(s, " ");
    while(x!=NULL)
    {
        strcpy(a[++k], x);
        x=strtok(NULL, " ");
    }
}
int main()
{
    char a[256],b[256];
    cin.getline(a, 256);
    cin.getline(b, 256);
    int n,m,i,j;
    char s[20][15],t[20][15];
    cuv(a, s, n);
    cuv(b, t, m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(strcmp(s[i], t[j])==0)
                cout<<s[i]<<" ";
        }
    }
    return 0;
}
