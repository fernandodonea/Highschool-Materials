//
//  main.cpp
//  Generarea combinărilor
//
//  Created by Fernando Donea on 17.11.2022.
//

#include <stdio.h>
int n,m,st[10];
void afis()
{
    for(int i=1;i<=m;i++)
        printf("%d ", st[i]);
    printf("\n");
}
int valid(int k)
{
    for(int i=1;i<=k-1;i++)
    {
        if(st[i]==st[k])//st[k]-indicele elementului
            return 0;
    }
    if(st[k]<st[k-1])return 0;//elemente in ordine crescatoare
    return 1;
}
int solutie(int k)
{
    if(k==m)return 1;
    else return 0;
}
void bkt(int k)
{
    for(int i=1;i<=n;i++)
    {
        st[k]=i;
        if(valid(k)==1)
        {
            if(solutie(k)==1)afis();
            else bkt(k+1);
        }
    }
}
int main()
{
    scanf("%d %d",&n,&m);
    bkt(
        1);
    return 0;
}
