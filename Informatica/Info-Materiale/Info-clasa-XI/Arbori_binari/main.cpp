//
//  main.cpp
//  Teorie Arbori Binari
//
//  Created by Fernando Donea on 15.05.2023.
//

#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("fisier.in");
ofstream fout("fisier.out");
struct nod
{
    int info;
    nod *st, *dr;
}*rad;
void creare(nod *&rad)
{
    int x;
    fin>>x;
    if(x==-1)rad=NULL;
    else
    {
        rad=new nod;
        rad->info=x;
        creare(rad->st);
        creare(rad->dr);
    }
}
void rsd(nod *rad)//Parcurgerea în preordine (RSD)
{
    if(rad!=NULL)
    {
        fout<<rad->info<<" ";
        rsd(rad->st);
        rsd(rad->dr);
    }
}
void srd(nod *rad)//Parcurgerea în inordine (SRD)
{
    if(rad!=NULL)
    {
        srd(rad->st);
        fout<<rad->info<<" ";
        srd(rad->dr);
    }
}
void sdr(nod *rad)
{
    if(rad!=NULL)
    {
        sdr(rad->st);
        sdr(rad->dr);
        fout<<rad->info<<" ";
    }
}
int main()
{
    creare(rad);
    fout<<"RSD:";rsd(rad);
    fout<<endl<<"SRD:";srd(rad);
    fout<<endl<<"SDR:";sdr(rad);
}



