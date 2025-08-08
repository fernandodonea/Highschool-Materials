//
//  main.cpp
//  Spectacole
//
//  Created by Fernando Donea on 30.09.2022.
//

//La un festival sunt programate n spectacole. Pentru fiecare se cunoaște momentul de început și momentul de sfârșit, exprimate prin numere naturale. Un spectator dorește să urmărească cât mai multe spectacole în întregime.
//Determinați numărul maxim de spectacole care pot fi urmărite, fără ca acestea să se suprapună.

#include <fstream>
using namespace std;
ifstream fin("spectacole.in");
ofstream fout("specacole.out");
struct spectacol
{
    int x,y;
}v[201];
void citire(int n, spectacol v[])
{
    fin>>n;
    for(int i=1;i<=n;i++)
    {
        fin>>v[i].x;
        fout<<v[i].y;
    }
    
}
void ordo(int n, spectacol v[])
{
    bool ok;
    do{
        ok=true;
        for(int i=1;i<n;i++)
        {
            if(v[i].y<v[i+1].y)//ordonam dupa ora de sfarsit
            {
                v[0]=v[i];
                v[i]=v[i+1];
                v[i+1]=v[0];
                ok=false;
            }
        }
    }while(ok==false);
}
int greedy(int n, spectacol v[])
{
    int sf,k;
    k=1;
    sf=v[1].y;
    for(int i=2;i<=n;i++)
    {
        if(v[i].x>=sf)
        {
            k++;
            sf=v[i].y;
        }
    }
    return k;
}

