//
//  main.cpp
//  Pb 3
//
//  Created by Fernando Donea on 10.02.2022.
//

//afiseaza cuvintele din fraza in ordine alfabetică

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[256],v[21][21],*x;
    cin.getline(s, 256);
    int k=0,i,j;
    x=strtok(s, " ");
    while(x!=NULL)
    {
        strcpy(v[++k], x);
        x=strtok(NULL, " ");
    }
    cout<<k;
    for(i=1;i<k;i++)
    {
        for(j=i+1;j<=k;j++)
        {
            if(strcmp(v[i], v[j])>0)
            {
                strcpy(v[0], v[i]);
                strcpy(v[i], v[j]);
                strcpy(v[j], v[0]);
            }
        }
    }
    for(i=1;i<=k;i++)cout<<v[i]<<endl;
    return 0;
}
