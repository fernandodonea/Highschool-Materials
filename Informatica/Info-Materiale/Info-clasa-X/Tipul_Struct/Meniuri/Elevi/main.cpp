//
//  main.cpp
//  Elevi
//
//  Created by Fernando Donea on 07.03.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
struct elev
{
    char nume[31],prenume[31];
    float medie;
    int zi,luna,an;
    char sex;
}v[101];
int n;
void adaugare()
{
    n++;
    cout<<"nume:";cin>>v[n].nume;
    cout<<"prenume:";cin>>v[n].prenume;
    cout<<"medie:";cin>>v[n].medie;
    cout<<"zi:";cin>>v[n].zi;
    cout<<"luna:";cin>>v[n].luna;
    cout<<"an:";cin>>v[n].an;
    cout<<"sex:";cin>>v[n].sex;
}
void afisare()
{
    int ok;
    do{
        ok=1;
        for(int i=1;i<n;i++)
        {
            if(v[i].medie>v[i+1].medie)
            {
                v[0]=v[i];
                v[i]=v[i+1];
                v[i+1]=v[0];
                ok=0;
            }
        }
    }while(!ok);
    for(int i=1;i<=n;i++)
        cout<<v[i].nume<<" "<<v[i].prenume<<v[i].medie<<endl;
}
void iulie4()
{
    for(int i=1;i<=n;i++)
    {
        if(v[i].zi==4 && v[i].luna==7)
            cout<<v[i].nume<<" "<<v[i].prenume<<'\n';
    }
}
void iarna()
{
    for(int i=1;i<=n;i++)
    {
        if(v[i].luna==12 || v[i].luna==1 || v[i].luna==2)
            cout<<v[i].nume<<" "<<v[i].prenume<<endl;
    }
}
void mediemin()
{
    float mini=11;
    for(int i=1;i<=n;i++)
    {
        if(v[i].medie<mini)mini=v[i].medie;
    }
    for(int i=1;i<=n;i++)
    {
        if(v[i].medie==mini)
            cout<<v[i].nume<<" "<<v[i].prenume<<endl;
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
            if(v[i].medie<v[i+1].medie || (v[i].medie==v[i+1].medie && strcmp(v[i].nume, v[i+1].nume)>0))
            {
                v[0]=v[i];
                v[i]=v[i+1];
                v[i+1]=v[0];
                ok=0;
            }
        }
    }while(!ok);
    for(int i=1;i<=n;i++)
        cout<<v[i].nume<<" "<<v[i].prenume<<" "<<v[i].medie<<endl;
}
void eliminare()
{
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=n;i++)
    {
        if(v[i].medie>=a && v[i].medie<=b)
        {
            for(int j=i;j<n;j++)
            {
                v[j]=v[j+1];
            }
            i--;n--;
        }
    }
}
void afisaremax()
{
    float maxi=0;
    for(int i=1;i<=n;i++)
    {
        if(v[i].medie>maxi)maxi=v[i].medie;
    }
    for(int i=1;i<=n;i++)
    {
        if(v[i].medie==maxi)
            cout<<v[i].nume<<" "<<v[i].prenume<<" "<<v[i].zi<<" "<<v[i].luna<<" "<<v[i].an<<endl;
    }
}
void mgenerala()
{
    float mg=0;
    for(int i=1;i<=n;i++)
    {
        mg+=v[i].medie;
    }
    mg/=n;
    cout<<mg<<endl;
}
void primul990()
{
    int ok=0;
    for(int i=1;i<=n && ok==0;i++)
    {
        if(v[i].medie==9.9)
        {
            cout<<v[i].nume<<" "<<v[i].prenume<<endl;
            ok=1;
        }
    }
    if(ok==0)cout<<"NU EXISTA";
}
void afismf()
{
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(strcmp(v[i].nume, v[j].nume)>0)
            {
                v[0]=v[i];
                v[i]=v[i+1];
                v[i+1]=v[0];
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(v[i].sex=='F')
            cout<<v[i].nume<<" "<<v[i].prenume<<endl;
    }
    cout<<endl;
    for(int i=n;i>=1;i--)
    {
        if(v[i].sex=='B')
            cout<<v[i].nume<<" "<<v[i].prenume<<endl;
    }
}
void meniu()
{
    cout<<"1. Adauga elev"<<endl;
    cout<<"2. Afisare crescatoare medie"<<endl;
    cout<<"3. Afisare nascuti 4 iulie"<<endl;
    cout<<"4. Afisare nascuti iarna"<<endl;
    cout<<"5. Afisare elevi medie minima"<<endl;
    cout<<"6. Ordonare descrescator medie"<<endl;
    cout<<"7. Eliminare elevi interval [a,b]"<<endl;
    cout<<"8. Afisare elevi medie maxima"<<endl;
    cout<<"9. Medie generala"<<endl;
    cout<<"10. Elev medie 9.90"<<endl;
    cout<<"11. Afisare fete baieti"<<endl;
    cout<<"12. Iesire"<<endl;
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
            case 1:
                adaugare();
                break;
            case 2:
                afisare();
                break;
            case 3:
                iulie4();
                break;
            case 4:
                iarna();
                break;
            case 5:
                mediemin();
                break;
            case 6:
                ordonare();
                break;
            case 7:
                eliminare();
                break;
            case 8:
                afisaremax();
                break;
            case 9:
                mgenerala();
                break;
            case 10:
                primul990();
                break;
            case 11:
                afismf();
                break;
        };
    }while(opt!=12);
    return 0;
}

