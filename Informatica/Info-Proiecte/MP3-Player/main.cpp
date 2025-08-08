//
//  main.cpp
//  Music Player
//
//  Created by Fernando Donea on 05.04.2022.
//

#include <iostream>
#include <fstream>
#include "playlistformat.hpp"
using namespace std;
int main()
{
    echipamotto();
    logo();
    int opt;
    bool ok=false;
    do{
        meniu();
        cin>>opt;
        cin.get();
        switch(opt)
        {
            case 1: {citirefisier(); ok=true; stergere();} break;
            case 2: {
                if(ok==true)afisarelibrarie();
                else cout<<"Selectati optiunea 1 mai intai";
                stergere();
            }break;
            case 3: {
                if(ok==true)afisareartist();
                else cout<<"Selectati optiunea 1 mai intai";
                stergere();
            }break;
            case 4: {
                if(ok==true)afisaregen();
                else cout<<"Selectati optiunea 1 mai intai";
                stergere();
            }break;
            case 5: {
                if(ok==true)afisarefavorite();
                else cout<<"Selectati optiunea 1 mai intai";
                stergere();
            }break;
            case 6: {
                if(ok==true)afisarealfa();
                else cout<<"Selectati optiunea 1 mai intai";
                stergere();
            }break;
            case 7: {
                if(ok==true)creareplaylist();
                else cout<<"Selectati optiunea 1 mai intai";
                stergere();
            }break;
            case 8: {
                if(ok==true)afisareplaylist();
                else cout<<"Selectati optiunea 1 mai intai";
                stergere();
            }break;
            case 9: {
                if(ok==true)topten();
                else cout<<"Selectati optiunea 1 mai intai";
                stergere();
            }break;
        }
    }while(opt!=10);
    return 0;
}
