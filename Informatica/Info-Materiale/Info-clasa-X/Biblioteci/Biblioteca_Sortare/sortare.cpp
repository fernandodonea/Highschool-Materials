//
//  sortare.cpp
//  Biblioteca Sortare
//
//  Created by Fernando Donea on 15.03.2022.
//

#include "sortare.hpp"
#include <iostream>
void sortnaiva(int v[], int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(v[i]>v[j])
            {
                v[0]=v[i];
                v[i]=v[j];
                v[j]=v[0];
            }
        }
    }
}
void bubblesort(int v[], int n)
{
    int ok;
    do
    {
        ok=1;
        for(int i=1;i<n;i++)
        {
            if(v[i]>v[i+1])
            {
                v[0]=v[i];
                v[i]=v[i+1];
                v[i+1]=v[0];
                ok=0;
            }
        }
        
    }while(!ok);
}
void sortselectie(int v[], int n)
{
    int mini,p;
    for(int i=1;i<n;i++)
    {
        mini=v[i];
        p=i;
        for(int j=i+1;j<=n;j++)
        {
            if(v[i]<mini)
            {
                mini=v[j];
                p=j;
            }
        }
        v[0]=v[i];
        v[i]=v[p];
        v[p]=v[0];
    }
}
void 

