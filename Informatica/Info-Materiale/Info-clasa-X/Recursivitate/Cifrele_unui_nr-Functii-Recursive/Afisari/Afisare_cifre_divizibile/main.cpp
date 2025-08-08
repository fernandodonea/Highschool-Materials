//
//  main.cpp
//  Afisare cifre divizibile
//
//  Created by Fernando Donea on 14.11.2021.
//

#include <iostream>
using namespace std;
void cif(int n)
{
    if(n<=9)
    {
        if(n%3==0 || n%3==4)cout<<n<<" ";
    }
    else
    {
        int c=n%10;
        if(c%3==0)
        {
            cif(n/10);
            cout<<c<<" ";
        }
        else if(c%4==0)
        {
            cout<<c<<" ";
            cif(n/10);
        }
        else
        {
            cif(n/10);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    cif(n);
    return 0;
}

