//
//  main.cpp
//  Verif cifre ord cresc
//
//  Created by Fernando Donea on 14.11.2021.
//

#include <iostream>
using namespace std;
int verif(int n)
{
    if(n<=9)return 1;
    else
    {
        if(n%10>n/10%10)return 0;
        else return verif(n/10);
    }
}
int main()
{
    int n;
    cin>>n;
    if(verif(n)==1)cout<<"DA";
    else cout<<"nup";
    return 0;
}

