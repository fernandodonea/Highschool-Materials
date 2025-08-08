//
//  main.cpp
//  Calculul cmmdc a n numere
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int cmmdc(int a,int b)
{
    while(b!=0)
    {int r=a%b;a=b;b=r;}
    return a;
}
int main()
{
    int n,i,x=1,a,b;
    cout<<"n=";cin>>n;
    cin>>a;
    for(i=2;i<=n;i++)
    {
        cin>>b;
        x=cmmdc(a, b);
        a=x;
    }
    cout<<"cmmdc="<<x;
    return 0;
}
