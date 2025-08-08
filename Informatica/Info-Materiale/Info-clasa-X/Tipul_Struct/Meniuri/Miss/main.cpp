//
//  main.cpp
//  Miss
//
//  Created by Fernando Donea on 09.03.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
struct concurent
{
    char nume[51];
    unsigned zi,luna,an;
    char par[31],ochi[31];
    float g,h;
    int cod;
}v[101];

int n;

//1
void inscriere()
{
    n++;
    cout<<"nume:";cin>>v[n].nume;
    cout<<"data nasterii:";cin>>v[n].zi>>v[n].luna>>v[n].an;
    cout<<"culoare parului:";cin>>v[n].par;
    cout<<"culoare ochi:";cin>>v[n].ochi;
    cout<<"greutate:";cin>>v[n].g;
    cout<<"inaltime:";cin>>v[n].h;
    cout<<"numar concurs";cin>>v[n].cod;
}

//2
void culoareochi()
{
    char x[31];
    cout<<"culoare ochilor:";cin>>x;
    for(int i=1;i<=n;i++)
    {
        if(strcmp(v[i].ochi, x)==0)
            cout<<v[i].nume<<endl;
    }
}

//3
void brunete()
{
    int k=0;
    for(int i=1;i<=n;i++)
    {
        if(strcmp(v[i].par, "bruneta")==0 && v[n].luna==7 && v[i].nume[0]=='A' && v[i].cod%2==0)
        {
            k++;
            cout<<v[i].nume<<" ";
            if(k%2==0)cout<<endl;
        }
    }
}

//4
void ordonare()
{
    int ok;
    do{
        ok=1;
        for(int i=1;i<n;i++)
        {
            if(strcmp(v[i].nume, v[i+1].nume)>0)
            {
                v[0]=v[i];
                v[i]=v[i+1];
                v[i+1]=v[0];
            }
        }
    }while(!ok);
    int k=0,nr=1;
    for(int i=1;i<=n;i++)
    {
        cout<<v[i].nume<<" ";
        k++;
        if(k==nr)
        {
            nr++;
            k=0;
            cout<<endl;
        }
    }
    if(k!=nr)cout<<endl;
}

//5
void inaltime()
{
    float x;
    cout<<"inaltime minima:";cin>>x;
    for(int i=1;i<=n;i++)
    {
        if(v[i].h>x)
            cout<<v[i].nume<<" ";
    }
    
}

//6
void ochisori()
{
    char s[4][20];
    concurent w[101];
    int k=0;
    strcpy(s[0],"verzi");
    strcpy(s[1],"albastri");
    strcpy(s[2],"caprui");
    strcpy(s[3],"negri");
    for(int j=0;j<=3;j++)
    {
        for(int i=1;i<=n;i++)
        {
            if(strcmp(v[i].ochi, s[j])==0)
                w[++k]=v[i];
        }
    }
    for(int i=1;i<=n;i++)v[i]=w[i];
    for(int i=1;i<=n;i++)
        cout<<v[i].nume<<" ";
}

//7
void inaltimemax()
{
    float maxi=0;
    for(int i=1;i<=n;i++)
    {
        if(v[i].h>maxi)maxi=v[i].h;
    }
    for(int i=1;i<=n;i++)
    {
        if(v[i].h==maxi)
            cout<<v[i].nume<<" ";
    }
}

//8
void eliminare()
{
    for(int i=1;i<=n;i++)
    {
        if(v[i].cod%2==1)
        {
            for(int j=i;j<n;j++)
                v[j]=v[j+1];
            i--;n--;
        }
    }
    for(int i=1;i<=n;i++)
        cout<<v[i].nume<<" ";
}

void meniu()
{
    cout<<"1. Inscriere"<<endl;
    cout<<"2. Concurente culoare ohci x"<<endl;
    cout<<"3. Concurente brunete, iulie, nume cu A, cod par"<<endl;
    cout<<"4. Afisare alfabetica"<<endl;
    cout<<"5. Concurente cu inaltimea mai mare de x"<<endl;
    cout<<"6. Medie note iarna"<<endl;
    cout<<"7. Ordonare culoare ochi: verzi, albastri,caprui,verzi"<<endl;
    cout<<"8. Concurente inaltime maxima"<<endl;
    cout<<"9. Eliminare concurente cod impar"<<endl;
    cout<<"10. Iesire";
    cout<<"Optiunea dvs:";
}
int main()
{
    int opt;
    do{
        meniu();
        cin>>opt;
        switch (opt)
        {
            case 1: inscriere(); break;
            case 2: culoareochi(); break;
            case 3: brunete(); break;
            case 4: ordonare(); break;
            case 5: inaltime(); break;
            case 7: ochisori(); break;
            case 8: inaltimemax(); break;
            case 9: eliminare(); break;
        }
    }while(opt!=10);
    return 0;
}




