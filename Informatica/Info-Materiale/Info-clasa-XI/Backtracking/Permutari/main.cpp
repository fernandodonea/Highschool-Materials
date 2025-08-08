//
//  main.cpp
//  Generarea Permutărilor
//
//  Created by Fernando Donea on 17.11.2022.
//

#include <stdio.h>
int n,st[11];//stiva
int valid(int k)
{
    int i;
    for(int i=1;i<=k-1;i++)
    {
        if(st[k]==st[i])
            return 0;
    }
    return 1;
}
int solutie(int k)
{
    if(k==n)return 1;
    else return 0;
}
void afisare(int k)
{
    for(int i=1;i<=n;i++)
        printf("%d",st[i]);
    printf("\n");
}
void bkt(int k)
{
    int i;//local obligatoriu
    for(i=1;i<=n;i++)
    {
        st[k]=i;
        if(valid(k)==1)
        {
            if(solutie(k)==1)
                afisare(k);
            else bkt(k+1);
        }
    }
}
int main()
{
    scanf("%d",&n);
    bkt(1);
    return 0;
}

