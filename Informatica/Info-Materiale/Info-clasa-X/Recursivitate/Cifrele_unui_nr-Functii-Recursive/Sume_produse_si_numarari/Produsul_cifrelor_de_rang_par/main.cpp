//
//  main.cpp
//  Produsul cifrelor de rang par
//
//  Created by Fernando Donea on 10.11.2021.
//

#include <iostream>
using namespace std;
int k=0;
void prod(int n, int &p)
{
    if(n==0)p=1;
    else
    {
        k++;
        prod(n/10, p);
        if(k%2==0)p*=n%10;
        k--;
    }
}
int main()
{
    int n,p;
    cin>>n;
    prod(n, p);
    cout<<p;
}
