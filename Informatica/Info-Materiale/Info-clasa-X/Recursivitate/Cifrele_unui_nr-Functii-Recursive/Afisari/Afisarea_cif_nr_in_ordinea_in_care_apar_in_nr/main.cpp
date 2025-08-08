//
//  main.cpp
//  Afisarea cif nr in ordinea in care apar in nr
//
//  Created by Fernando Donea on 14.11.2021.
//

#include <iostream>
using namespace std;
void cif(int n)
{
    if(n<=9)cout<<n<<" ";
    else
    {
        cif(n/10);
        cout<<n%10<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    cif(n);
    return 0;
}
