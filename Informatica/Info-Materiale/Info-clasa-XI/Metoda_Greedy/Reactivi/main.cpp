//
//  main.cpp
//  Reactivi
//
//  Created by Fernando Donea on 30.09.2022.
//
//
//Într-un laborator de analize chimice se utilizează N reactivi. Fiecarui reactiv x, i se precizează intervalul de temperatură [minx, maxx] în care trebuie să se încadreze temperatura de stocare a acestuia.
//Scrieţi un program care să determine numărul minim de frigidere necesare pentru stocarea reactivilor chimici.

#include <fstream>
using namespace std;
ifstream fin("reactivi.in");
ofstream fout("reactivi.out");
struct temp{
    int x,y;
}r[10001],f[10001];
void citire(int &n, temp r[])
{
    fin>>n;
    for(int i=1;i<=n;i++)
    {
        int a,b;
        fin>>r[i].x>>r[i].y;
    }
}
//ordonam cresc dupa temperatura maxima
void ordo(int n, temp r[])
{
    bool ok;
    do{
        ok=true;
        for(int i=1;i<n;i++)
        {
            if(r[i].y>r[i+1].y)
            {
                ok=false;
                temp aux=r[i];
                r[i]=r[i+1];
                r[i+1]=aux;
            }
        }
    }while(ok==false);
}
void intersectie(temp react, temp fridge, temp &c)
{
    int maxi,mini;
    if(react.x>fridge.x)maxi=react.x;
    else maxi=fridge.x;
    if(react.y<fridge.y)mini=react.y;
    else mini=fridge.y;
    c.x=maxi;
    c.y=mini;
}
void greedy(int n, temp r[])
{
    int k,ok,j;
    temp v;
    f[1]=r[1]; k=1;//primul obiect in primul frigider
    for(int i=2;i<=n;i++)
    {
        ok=0;
        for(int j=1;j<=k;j++)//parcurgem frigiderele
        {
            intersectie(r[i], f[j], v);
            if(v.x<=v.y)
            {
                f[j]=v; ok=1;//daca intervalul interesctiei este valid am gasit un frigider si setam temperatura
            }
        }
        if(ok==0)
        {
            //daca intersectia este nula adaugam un frigider nou
            f[++k]=r[i];
        }
    }
}

