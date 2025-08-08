//
//  main.cpp
//  Produsul cartezian
//
//  Created by Fernando Donea on 17.11.2022.
//

#include <stdio.h>
int n,m,st[10];
void citire()
{
    scanf("%d %d",&n,&m);
}
void afis()
{
    for(int i=1;i<=m;i++)
        printf("%d ", st[i]);
    printf("\n");
}
void bkt(int k)
{
    for(int i=1;i<=n;i++)
    {
        st[k]=i;
        if(k==m)afis();
        else bkt(k+1);
    }
}
int main()
{
    scanf("%d %d",&n,&m);
    bkt(
        1);
    return 0;
}

