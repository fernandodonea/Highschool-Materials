#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("piese.in");
int n;

// structura unei piese; Autor: Bejenaru Cosmin
struct song
{
    char nume[101],artist[101],album[101],gen[101];
    struct
    {
        float durata;
        unsigned cod;
        long long streams;
    }inf;
    char fav;
}v[1001];

int k;

// structura unui playlist; Autor: Donea Fernando
struct colaj
{
    char p[21][51];
    int nr;
    float durata;
}a[1001];

//afisara incadrata; Autor: Bejenaru Cosmin
void afisare(char v[], char a[])
{
    cout<<"| "<<setw(20)<<left<<v<<" ";
    cout<<setw(20)<<right<<a<<" |";
    cout<<endl;
}

//cautarea codului unei piese folosind cautare binara; Autor: Donea Fernando
int cautarebinara(int c)
{
    int st,dr,m;
    st=1;dr=n;
    while(st<=dr)
    {
        m=(st+dr)/2;
        if(c==v[m].inf.cod)
        {
            return m;
        }
        else if(c<v[m].inf.cod)
            dr=m-1;
        else st=m+1;
    }
    return -1;
}

//citirea piselor din fisier; Autor: Bejenaru Cosmin
void citirefisier()
{
    fin>>n;
    for(int i=1;i<=n;++i)
    {
        fin.get();
        fin.getline(v[i].nume, 100);
        fin.getline(v[i].artist, 100);
        fin.getline(v[i].album, 100);
        fin.getline(v[i].gen, 100);
        fin>>v[i].inf.durata;
        fin>>v[i].inf.cod;
        fin>>v[i].inf.streams;
        fin>>v[i].fav;
        fin.get();
    }
    cout<<"Fisierul a fost citit. Executati:)";
}

//ordonarea piselor in ordine alfabetica; Autor: Bejenaru Cosmin
void ordonarealfa()
{
    int ok;
    do
    {
        ok=1;
        for(int i=1;i<n;++i)
        {
            if(strcmp(v[i].nume, v[i+1].nume)>0)
            {
                v[0]=v[i];
                v[i]=v[i+1];
                v[i+1]=v[0];
                ok=0;
            }
        }
        
    }while(!ok);
}

//ordonarea piselor in ordinea crescatoarea a codului; Autor: Donea Fernando
void ordonareacod()
{
    bool ok;
    do
    {
        ok=true;
        for(int i=1;i<n;i++)
        {
            if(v[i].inf.cod>v[i+1].inf.cod)
            {
                v[0]=v[i];
                v[i]=v[i+1];
                v[i+1]=v[0];
                ok=false;
            }
        }
        
    }while(ok==false);
}

//ordonarea piselor in ordinea descrescatoare a streamurilor; Autor: Donea Fernando
void ordonarestreams()
{
    bool ok;
    do
    {
        ok=true;
        for(int i=1;i<n;i++)
        {
            if(v[i].inf.streams<v[i+1].inf.streams)
            {
                v[0]=v[i];
                v[i]=v[i+1];
                v[i+1]=v[0];
                ok=false;
            }
        }
        
    }while(ok==false);
}

//afisarea tuturor pieselor din librarie; Autor: Bejenaru Cosmin
void afisarelibrarie()
{
    for(int i=1;i<=n;++i)
    {
        afisare(v[i].nume, v[i].artist);
    }
}

//afisarea pieselor unui artist: Autor: Bejenaru Cosmin
void afisareartist()
{
    char s[101];
    cout<<"Artist: ";
    cin.getline(s, 100);
    for(int i=1;i<=n;++i)
    {
        if(strcmp(s, v[i].artist)==0)
        {
            afisare(v[i].nume, v[i].album);
        }
    }
}

//afisarea tuturor piselor dintr-un gen muzical; Autor: Bejenaru Cosmin
void afisaregen()
{
    char s[101];
    cout<<"Gen muzical: ";
    cin.getline(s, 100);
    for(int i=1;i<=n;++i)
    {
        if(strcmp(s, v[i].gen)==0)
        {
            afisare(v[i].nume, v[i].artist);
        }
    }
    
}

//afisarea piselor favorite; Autor: Donea Fernando
void afisarefavorite()
{
    cout<<"Favorite:"<<endl;
    for(int i=1;i<=n;i++)
    {
        if(v[i].fav=='D')
        {
            afisare(v[i].nume, v[i].artist);
        }
    }
}

//afisarea librarie in ordine alfabetica; Autor: Donea Fernando
void afisarealfa()
{
    ordonarealfa();
    afisarelibrarie();
}

//crearea unui playlist; Autor: Donea Fernando
void creareplaylist()
{
    ordonareacod();
    k++;
    int c,x;
    cout<<"Nume playlist: ";
    cin.getline(a[k].p[0], 100);
    cout<<"Nr piese:";cin>>a[k].nr;
    for(int i=1;i<=a[k].nr;i++)
    {
        cout<<"Cod:";cin>>c;
        x=cautarebinara(c);
        if(x==-1)
        {
            cout<<"!! Cod incorect !!"<<endl;
            i--;
        }
        else
        {
            a[k].durata+=v[x].inf.durata;
            strcpy(a[k].p[i], v[x].nume);
        }
    }
        
}

//afisarea playlist-urilor disponibile si selectarea unui playlist; Autor: Donea Fernando
void afisareplaylist()
{
    int x;
    for(int i=1;i<=k;i++)
    {
        cout<<i<<". "<<a[i].p[0]<<endl;
    }
    cout<<"Selectare playlist: ";cin>>x;cin.get();
    cout<<endl;
    cout<<setw(20)<<a[x].p[0]<<endl;
    cout<<setw(32)<<a[x].durata<<" min"<<endl;
    for(int i=1;i<=a[x].nr;i++)
    {
        cout<<"| "<<setw(40)<<left<<a[x].p[i]<<" |"<<endl;
    }
}

//top 10 HITURI; Autor: Bejenaru Cosmin
void topten()
{
    ordonarestreams();
    for(int i=1;i<=10;++i)
    {
        cout<<"| "<<setw(20)<<left<<v[i].nume<<" ";
        cout<<setw(20)<<right<<v[i].inf.streams<<" |";
        cout<<endl;
    }
}

//reimprospatarea consolei; Autor: Donea Fernando
void stergere()
{
    cin.get(); system("CLS");
}

//afisarea numelui echipei si a motto-ului; Autor: Donea Fernando
void echipamotto()
{
    cout<<"Baietii cu "<<endl;
    cout<<"_   _    __   ___          , "<<endl;
    cout<<"| V |   |__)   __|   |  |    "<<endl;
    cout<<"|   |   |     ___|   |__|    "<<endl;
    cout<<endl;
    cout<<"Motto: Ai n ai playlist, faci proiectu'"<<endl;
    stergere();
}

//afisarea logo-ului; Autor: Donea Fernando
void logo()
{
    cout<<" - - - - - - - - - -"<<endl;
    cout<<"|                   |"<<endl;
    cout<<"|       ,--------,  |"<<endl;
    cout<<"|      /         /  |"<<endl;
    cout<<"|     /         /   |"<<endl;
    cout<<"|   ***      ***    |"<<endl;
    cout<<"|   ***      ***    |"<<endl;
    cout<<"|                   |"<<endl;
    cout<<" - - - - - - - - - -"<<endl;
    stergere();
}

//afisarea meniului; Autor: Bejenaru Cosmin
void meniu()
{
    cout<<"1. Citire piese din fisier"<<endl;
    cout<<"2. Afisare librarie"<<endl;
    cout<<"3. Afisare melodii dupa artist"<<endl;
    cout<<"4. Afisare melodii dupa gen muzical"<<endl;
    cout<<"5. Afisare melodii favorite"<<endl;
    cout<<"6. Ordonare alfabetica a pieselor"<<endl;
    cout<<"7. Creare playlist"<<endl;
    cout<<"8. Afisare playlist"<<endl;
    cout<<"9. Top 10 hituri"<<endl;
    cout<<"10. Iesire"<<endl;
    cout<<"Opt dvs: ";

}


