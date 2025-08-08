//
//  main.cpp
//  Clasa vector
//
//  Created by Fernando Donea on 04.05.2023.
//

#include <iostream>
using namespace std;
class vectorr
{
public:
    int n,v[101];
    vectorr();
    vectorr(int , int );
    void citire();
    void afisare();
    int maxim();
    void ordonare();
    bool cautsecv(int );
    bool cautbin(int );
};
vectorr::vectorr()
{
    n=0;
    for(int i=1;i<=101;i++)
        v[i]=0;
}
vectorr::vectorr(int m, int val)
{
    n=m;
    for(int i=1;i<=n;i++)
        v[i]=val;
}
void vectorr::citire()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
}
void vectorr::afisare()
{
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
int vectorr::maxim()
{
    int maxi=-1;
    for(int i=1;i<=n;i++)
        if(v[i]>maxi)maxi=v[i];
    return maxi;
}
void vectorr::ordonare()
{
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(v[i]>v[j])
            {
                int aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
            
        }
    }
}
bool vectorr::cautsecv(int x)
{
    for(int i=1;i<=n;i++)
        if(v[i]==x)return true;
    return false;
}
bool vectorr::cautbin(int x)
{
    int st,dr,mij;
    st=1;dr=n;
    while(st<=dr)
    {
        mij=(st+dr)/2;
        if(v[mij]==x)return true;
        else if(x<v[mij])dr=mij-1;
        else st=mij+1;
    }
    return false;
}
int main()
{
    vectorr a;
    a.citire();
    a.afisare();
    cout<<a.maxim()<<endl;
    a.ordonare();a.afisare();
    int x;
    cin>>x;
    if(a.cautsecv(x)==true && a.cautbin(x)==true)
        cout<<"DA";
    else cout<<"NU";

    return 0;
}
