//
//  main.cpp
//  Generarea Aranj cu vector caracteristic
//
//  Created by Fernando Donea on 17.11.2022.
//
// Generarea aranjamentelor folosind vector vector caracteristic
// - mai eficient ca timp
#include <stdio.h>
int n,m,st[10],c[10];
void afis()
{
    for(int i=1;i<=m;i++)
        printf("%d ",st[i]);
    printf("\n");
}
void bkt(int k)
{
    for(int i=1;i<=n;i++)
    {
        if(c[i]==0)
        {
            c[i]=1;
            st[k]=i;
            if(k==m)afis();
            else bkt(k+1);
            c[i]=0;
        }
    }
}
int main()
{
    scanf("%d %d", &n, &m);
    bkt(1);
    return 1;
}

