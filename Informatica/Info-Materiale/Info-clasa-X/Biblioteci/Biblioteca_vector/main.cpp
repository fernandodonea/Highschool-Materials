//
//  main.cpp
//  Biblioteca vector
//
//  Created by Fernando Donea on 14.03.2022.
//

#include <iostream>
#include "vector.hpp"
using namespace std;
int main()
{
    int v[101],n;
    citire(v, n);
    ordonare(v, n);
    ordonare(v, n);
    afisare(v, n);
    cout<<endl<<maxim(v, n)<<" "<<minim(v, n);
    return 0;
}


