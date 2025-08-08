//
//  main.cpp
//  Afis cif par cif imp
//
//  Created by Fernando Donea on 14.11.2021.
//

#include <iostream>
using namespace std;
void cif(int n)
{
    int c;
    if(n<=9)
    {
        cout<<n<<" ";
    }
    else
    {
        c=n%10;
        if(c%2==0)
        {
            cout<<c<<" ";
            cif(n/10);
        }
        else
        {
            cif(n/10);
            cout<<c<<" ";
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

