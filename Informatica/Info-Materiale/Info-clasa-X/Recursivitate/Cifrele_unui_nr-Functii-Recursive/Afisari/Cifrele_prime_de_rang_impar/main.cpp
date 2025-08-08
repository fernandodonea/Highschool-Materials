//
//  main.cpp
//  Cifrele prime de rang impar
//
//  Created by Fernando Donea on 14.11.2021.
//

#include <iostream>
using namespace std;
int prim(int n)
{
    if(n==2 || n==3 || n==5 || n==6)return 1;
    else return 0;
}
int verif(int n)
{
    if(n<=9)return 1;
    else
    {
        int c;
        c=n/10%10;
        if(prim(c)==1)return 0;
        else return verif(n/100);
    }
}
int main()
{
    int n;
    cin>>n;
    if(verif(n)==1)cout<<"DA";
    else cout<<"NU";
    return 0;
}

