//
//  main.cpp
//  Zilele Cnrv
//
//  Created by Fernando Donea on 07.03.2022.
//

#include <iostream>
#include <string.h>
using namespace std;

struct elev
{
    char nume[31],prenume[31];
    char clasa[10],adresa[51],simpozion[51],prof[51];
}v[101];
int n;

void inscriere()
{
    n++;
    cout<<"Nume:";cin>>v[n].nume;
    cout<<"Prenume:";cin>>v[n].prenume;
    cout<<"Clasa:";cin>>v[n].clasa;
    cout<<"Email:";cin>>v[n].adresa;
    cin.get();
    cout<<"Simpozion:";cin.getline(v[n].simpozion, 51);
    cout<<"Profesor indrumator:";cin>>v[n].prof;
}
void cautsimp()
{
    char name[31];
    cout<<"Nume:";cin>>name;
    for(int i=1;i<=n;i++)
    {
        if(strcmp(name, v[i].nume)==0)
            cout<<v[i].simpozion<<endl;
    }
}
void indrumator()
{
    char profindr[51];
    cout<<"Profesor indrumator:";cin>>profindr[50];
    for(int i=1;i<=n;i++)
    {
        if(strcmp(v[i].prof, profindr)==0)
            cout<<v[i].nume<<" "<<v[i].prenume<<endl;
    }
}
void retragere()
{
    char name[31];
    cout<<"Nume:";cin>>name;
    for(int i=1;i<=n;i++)
    {
        if(strcmp(name, v[i].nume)==0)
            strcpy(v[i].simpozion, "RETRAS");
    }
}
void ordonare()
{
    int ok;
    do
    {
        ok=1;
        for(int i=1;i<n;i++)
        {
            if(strcmp(v[i].nume, v[i+1].nume)>0 || (strcmp(v[i].nume, v[i+1].nume)==0 && strcmp(v[i].prenume, v[i+1].prenume)>0))
            {
                v[0]=v[i];
                v[i]=v[i+1];
                v[i+1]=v[0];
                ok=0;
            }
                
        }
    }while(!ok);
    for(int i=1;i<=n;i++)
    {
        if(strcmp(v[i].nume, v[i+1].nume)==0 && strcmp(v[i].prenume, v[i+1].prenume)==0)
            i++;
        else cout<<v[i].nume<<" "<<v[i].prenume<<endl;
    }
}
void emailcnrv()
{
    char s[50];
    for(int i=1;i<=n;i++)
    {
        strcpy(s, v[i].nume);
        strcat(s, ".");
        strcat(s, v[i].prenume);
        strcat(s, "@romanvoda.ro");
        cout<<v[i].nume<<" "<<v[i].prenume<<" ";
        if(strcasecmp(v[i].adresa, s)==0)
            cout<<"ADRESA CNRV"<<endl;
        else cout <<"NEVALID"<<endl;
    }
}
void multesimp()
{
    int k=0;
    int ok;
    do
    {
        ok=1;
        for(int i=1;i<n;i++)
        {
            if(strcmp(v[i].nume, v[i+1].nume)>0 || (strcmp(v[i].nume, v[i+1].nume)==0 && strcmp(v[i].prenume, v[i+1].prenume)>0))
            {
                v[0]=v[i];
                v[i]=v[i+1];
                v[i+1]=v[0];
                ok=0;
            }
                
        }
    }while(!ok);
    
    for(int i=1;i<n;i++)
    {
        ok=0;
        if(strcmp(v[i].nume, v[i+1].nume)==0 && strcmp(v[i].prenume, v[i+1].prenume)==0)
        {
            ok=1;i++;
        }
        else
        {
            if(ok==1)k++;
        }
    }
    cout<<"Numar elevi:"<<k<<endl;
}
void ordclasa()
{
    int ok;
    do
    {
        ok=1;
        for(int i=1;i<n;i++)
        {
            if(strcmp(v[i].nume, v[i+1].nume)>0 || (strcmp(v[i].nume, v[i+1].nume)==0 && strcmp(v[i].prenume, v[i+1].prenume)>0))
            {
                v[0]=v[i];
                v[i]=v[i+1];
                v[i+1]=v[0];
                ok=0;
            }
                
        }
    }while(!ok);
    do
    {
        ok=1;
        for(int i=1;i<n;i++)
        {
            if(strcmp(v[i].clasa, v[i+1].clasa)>0)
            {
                v[0]=v[i];
                v[i]=v[i+1];
                v[i+1]=v[0];
                ok=0;
            }
        }
    }while(!ok);
    for(int i=1;i<=n;i++)
        cout<<v[i].clasa<<" "<<v[i].nume<<" "<<v[i].prenume<<endl;
}
void compsc()
{
    cout<<"Computer Science:"<<endl;
    for(int i=1;i<=n;i++)
    {
        if(strcmp(v[i].simpozion, "Computer Science")==0)
            cout<<v[i].nume<<" "<<v[i].prenume<<endl;
    }
}
void meniu()
{
    cout<<"1. Inscriere elev"<<endl;
    cout<<"2. Afisare simpozion elev"<<endl;
    cout<<"3. Elevi prof indrumator"<<endl;
    cout<<"4. Retragere elev simpozioane"<<endl;
    cout<<"5. Ordonare alfabetica elevi"<<endl;
    cout<<"6. Verificare adrese cnrv"<<endl;
    cout<<"7. Elevi la mai multe simpozioane"<<endl;
    cout<<"8. Elevi ordonati clase"<<endl;
    cout<<"9. Participanti Computer Science"<<endl;
    cout<<"10. Iesire"<<endl;
    cout<<"Optiunea dvs:";
}
int main()
{
    int opt;
    do
    {
        meniu();
        cin>>opt;
        switch (opt)
        {
            case 1: inscriere(); break;
            case 2: cautsimp(); break;
            case 3: indrumator(); break;
            case 4: retragere(); break;
            case 5: ordonare(); break;
            case 6: emailcnrv(); break;
            case 7: multesimp(); break;
            case 8: ordclasa(); break;
            case 9: compsc(); break;
        };
        
    }while(opt!=10);
    return 0;
}
