//
//  main.cpp
//  Construire număr - scrierea in baza 10
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int x,c,y=0,p=1;
    cout<<"x=";cin>>x;
    while(x)
    {
        c=x%10;x/=10;
        y=y+p*c;
        p*=10;
    }
    cout<<"y="<<y;
    return 0;
}
