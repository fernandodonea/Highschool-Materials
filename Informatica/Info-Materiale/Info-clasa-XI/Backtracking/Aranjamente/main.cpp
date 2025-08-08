//
//  main.cpp
//  Generarea Aranjamentelor
//
//  Created by Fernando Donea on 17.11.2022.
//
// Aranjamente de n elemente luate cate m
#include <stdio.h>
int st[10],n,m;
void afisare()
{
    for(int i=1;i<=m;i++)
        printf("%d ",st[i]);
    printf("\n");
}
int valid(int k)
{
    for(int i=1;i<=k-1;i++)
    {
        if(st[k]==st[i])
            return 0;
    }
    return 1;
}
int solutie(int k)
{
    if(k==m)return 1;
    else return 0;
}
void bkt(int k)
{
    int i;
    for(int i=1;i<=n;i++)
    {
        st[k]=i;
        if(valid(k)==1)
        {
            if(solutie(k)==1)afisare();
            else bkt(k+1);
        }
    }
}
int main()
{
    scanf("%d %d",&n,&m);
    bkt(1);
    return 0;
}
