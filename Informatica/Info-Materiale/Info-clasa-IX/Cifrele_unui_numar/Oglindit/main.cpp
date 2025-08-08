//
//  main.cpp
//  Oglindit
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int n,ogl=0,c;
    cout<<"n=";cin>>n;
    while(n)
    {
        c=n%10;
        n/=10;
        ogl=ogl*10+c;
    }
    cout<<"ogl="<<ogl<<endl;
    return 0;
}
