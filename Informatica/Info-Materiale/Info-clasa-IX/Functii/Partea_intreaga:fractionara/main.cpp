//
//  main.cpp
//   fracționara
//
//  Created by Fernando Donea on 22.05.2021.
//

#include <iostream>
#include <cmath>
//Funcția floor (double) este inclusa in biblioteca cmath;
//Funcția floor () din C ++ returnează cea mai mare valoare posibilă care este mai mică sau egală cu argumentul dat.

//Partea intreagă a unui număr
int intrg(double n)
{
    int x;
    x=floor(n);
    return x;
}

//Partea fracționară a unui număr
double fract(double n)
{
    double x;
    x=n-floor(n);
    return x;
}


