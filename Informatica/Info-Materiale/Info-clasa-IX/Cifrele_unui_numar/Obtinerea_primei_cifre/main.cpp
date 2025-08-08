//
//  main.cpp
//  Obtinerea primei cifre
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int n,p;
    cout<<"n=";cin>>n;
    while(n>9)n/=10;
    p=n;
    cout<<"Prima cifra este "<<p<<endl;
    return 0;
    
}
