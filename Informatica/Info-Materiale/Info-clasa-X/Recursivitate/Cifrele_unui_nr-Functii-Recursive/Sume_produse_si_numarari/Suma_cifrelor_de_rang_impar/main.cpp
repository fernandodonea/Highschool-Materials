//
//  main.cpp
//  Suma cifrelor de rang impar
//
//  Created by Fernando Donea on 10.11.2021.
//

#include <iostream>
using namespace std;
int k=0;
void f(int n, int &s)
{
    if(n==0)s=0;
    else
    {
        k++;
        f(n/10,s);
        if(k%2==1)s+=n%10;
        k--;
    }
}
int main()
{
    int n,s;
    cin>>n;
    f(n, s);
    cout<<s;
    return 0;
}
