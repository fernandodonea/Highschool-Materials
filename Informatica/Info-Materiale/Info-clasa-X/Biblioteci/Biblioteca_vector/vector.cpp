//
//  vector.cpp
//  Biblioteca vector
//
//  Created by Fernando Donea on 14.03.2022.
//

#include "vector.hpp"
#include <iostream>
using namespace std;
void citire(int v[], int &n)
{
    cout<<"n=";cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
}
void afisare(int v[], int &n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<v[i]<<" ";
    }
}
int maxim(int v[], int &n)
{
    int maxi=v[1];
    for(int i=2;i<=n;i++)
    {
        if(v[i]>maxi)maxi=v[i];
    }
    return maxi;
}
int minim(int v[], int &n)
{
    int mini=v[1];
    for(int i=2;i<=n;i++)
    {
        if(v[i]<mini)mini=v[i];
    }
    return mini;
}
void ordonare(int v[], int &n)
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

