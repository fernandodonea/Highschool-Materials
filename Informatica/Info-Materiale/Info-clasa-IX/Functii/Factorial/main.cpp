//
//  main.cpp
//  functie factorial
//
//  Created by Fernando Donea on 24.11.2020.
//

#include <iostream>
using namespace std;
int factorial(int n)
{
    int i,p;
    p=1;
    for(i=1;i<=n;i++)
    p*=i;
    return p;
}
int main()
{
    int n,k,C,x;
    cout<<"n=";cin>>n;
    cout<<"k=";cin>>k;
    x=n-k;
    C=factorial(n)/(factorial(k)*factorial(x));
    cout<<"C="<<C<<endl;
    return 0;
    
}
