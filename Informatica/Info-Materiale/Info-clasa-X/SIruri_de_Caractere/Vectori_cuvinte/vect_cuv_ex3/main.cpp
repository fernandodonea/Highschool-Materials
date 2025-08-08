//
//  main.cpp
//  Pb 6
//
//  Created by Fernando Donea on 13.02.2022.

#include <iostream>
#include <cstring>
bool rev(char v[][10],int x,int y)
{
    char a[10],b[10];
    strcpy(a, v[x]);
    strcpy(b, v[y]);
    if(strlen(a)!=strlen(b))return false;
    long long n=strlen(a),i,j;
    i=0;j=n-1;
    while(i<n)if(a[i++]!=b[j--])return false;
    return true;
    
}
using namespace std;
int main()
{
    char s[256],v[20][10],*x;
    cin.getline(s, 256);
    int k=0,i,j;
    x=strtok(s," ");
    while(x!=NULL)
    {
        strcpy(v[++k], x);
        x=strtok(NULL," ");
        
    }
    for(i=1;i<k;i++)
    {
        for(j=i+1;j<=k;j++)
        {
            if(rev(v, i, j)==true)
                cout<<v[j]<<" "<<v[i]<<endl;
        }
    }
    return 0;
}
