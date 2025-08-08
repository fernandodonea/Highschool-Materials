//
//  main.cpp
//  Pb 7
//
//  Created by Fernando Donea on 13.02.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
void afis(char v[][10],int a)
{
    long long i,n;
    n=strlen(v[a]);
    for(i=0;i<n-2;i++)
        cout<<v[a][i];
    cout<<" ";
}
int main()
{
    char s[256],v[20][10],*x;
    cin.getline(s, 256);
    int n=0;
    x=strtok(s, " ");
    while(x!=NULL)
    {
        strcpy(v[++n], x);
        x=strtok(NULL, " ");
    }
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        if(strstr(v[i], "#S"))
        {
            for(j=1;j<=n;j++)
            {
                if(strstr(v[j], "#P"))
                {
                    for(k=1;k<=n;k++)
                    {
                        if(strstr(v[k], "#C"))
                        {
                            afis(v, i);
                            afis(v, j);
                            afis(v, k);
                            cout<<endl;
                        }
          
                    }
                }
            }
        }
    }
    return 0;
}
