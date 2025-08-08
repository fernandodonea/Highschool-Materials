//
//  main.cpp
//  Ultima cifra para
//
//  Created by Fernando Donea on 14.11.2021.
//

#include <iostream>
using namespace std;
void upara(int n)
{
    if(n<=9)
    {
        if(n%2==1)cout<<-1;
        else cout<<n;
    }
    else
    {
        int c=n%10;
        if(c%2==0)cout<<c<<" ";
        else upara(n/10);
    }
}
int main()
{
    int n;
    cin>>n;
    upara(n);
    return 0;
}
