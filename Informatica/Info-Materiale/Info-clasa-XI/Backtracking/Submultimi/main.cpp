//
//  main.cpp
//  Generarea sumultimilor
//
//  Created by Fernando Donea on 17.11.2022.
//

#include <stdio.h>
int n,st[10];
void afis(int k)
{
    for(int i=1;i<=k;i++)
        printf("%d ", st[i]);
    printf("\n");
}
void bkt(int k)
{
    for(int i=st[k-1]+1;i<=n;i++)
    {
        st[k]=i;
        if(k<=n)
        {
            afis(k);
            bkt(k+1);
        }
        
    }
}
int main()
{
    scanf("%d",&n);
    bkt(1);
    return 0;
}
