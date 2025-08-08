//
//  main.cpp
//  Numarul de cifre dintr-un nr
//
//  Created by Fernando Donea on 10.11.2021.
//

#include <iostream>
using namespace std;
int nrcif(int n)
{
    if(n<=9)return 1;
    else return nrcif(n/10)+1;
}
int main()
{
    int n;
    cin>>n;
    cout<<nrcif(n);
    return 0;
}

