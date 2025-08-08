//
//  main.cpp
//  Construire numar - 2x oglindit
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int n,nr=0,ogl=0,c;
    cout<<"n=";cin>>n;
    while(n)
    {
        c=n%10;
        n/=10;î
        ogl=ogl*10+c;
    }
    while(ogl)
    {
        c=ogl%10;
        ogl/=10;
        nr=nr*10+c;
    }
    cout<<"nr="<<nr;
    return 0;
}
