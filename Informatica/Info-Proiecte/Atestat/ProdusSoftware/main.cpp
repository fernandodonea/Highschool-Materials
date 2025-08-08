//
//  main.cpp
//  Atestat informatica - Siruri de caractere
//
//  Realizat de Fernando-Emanuel Donea
//

#include <iostream>
#include "problemebac.h"
using namespace std;
int main()
{
   int opt;
    do
    {
        meniu_principal();
        cin>>opt;
        switch (opt) {
            case 1:{
                probleme2024();
                }break;
            case 2:{
                probleme2023();
                }break;
            case 3:{
                probleme2022();
                }break;
            case 4:{
                probleme2021();
                }break;
            case 5:{
                probleme2020();
            }break;

        }
    }while(opt!=6);
    return 0;
}
