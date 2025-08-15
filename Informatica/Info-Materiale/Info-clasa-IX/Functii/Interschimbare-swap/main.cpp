//
//  main.cpp
//  Interschimbare - swap
//
//  Created by Fernando Donea on 17.06.2021.
//
// "&" - adresa
// void - funcția nu are motiv să returneze ceva, și nu ar trebui să returneze nimic, i.e. returnează void
//
/*
 If your function has no reason to return something, it shouldn't return anything, i.e., it should return void. There is no point in giving a function which doesn't produce any result an artificial return value.
 */

#include <iostream>
using namespace std;
void interschimbare(int &a, int &b)
{
    int aux;
    aux=a;
    a=b;
    b=aux;
}
int main()
{
    int n,m;
    cin>>n>>m;
    interschimbare(n, m);
    cout<<n<<" "<<m;
    return 0;
}
