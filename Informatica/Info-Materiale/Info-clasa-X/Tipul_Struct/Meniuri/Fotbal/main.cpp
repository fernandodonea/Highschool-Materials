//
//  main.cpp
//  Fotbal
//
//  Created by Fernando Donea on 09.03.2022.
//

#include <iostream>
#include <cstring>
using namespace std;

struct fotbal
{
    char echipa1[51],echipa2[51];
    unsigned nrgol1,nrgol2;
}v[101];

int n;

void adaugare()
{
    n++;
    cout<<"echipa 1:"; cin>>v[n].echipa1;
    cout<<"echipa 2:"; cin>>v[n].echipa2;
    cout<<"numar goluri echipa 1:"; cin>>v[n].nrgol1;
    cout<<"numar goluri echipa 2:"; cin>>v[n].nrgol2;
}


void punctaj()
{
    char x[51];
    int i,s=0;
    cout<<"echipa: ";cin>>x;
    for(i=1;i<=n;i++)
    {
        if(strcmp(x,v[i].echipa1)==0)
        {
            if(v[i].nrgol1>v[i].nrgol2) s=s+3;
            else    if(v[i].nrgol1==v[i].nrgol2)    s=s+1;
        }
        else if(strcmp(x,v[i].echipa2)==0)
        {
            if(v[i].nrgol2>v[i].nrgol1) s=s+3;
            else if(v[i].nrgol2==v[i].nrgol1)   s=s+1;
        }
    }
    cout<<"punctaj: "<<s<<endl;
}

void egalitate()
{
    for(int i=1; i<=n; i++)
    {
        if(v[i].nrgol1==v[i].nrgol2)
            cout<<v[i].echipa1<<" "<<v[i].echipa2<<'\n';
    }
}


void pronosport()
{
    for(int i=1;i<=n;i++)
    {
        cout<<v[i].echipa1<<", "<<v[i].echipa2<<", ("<<v[i].nrgol1<<"x"<<v[i].nrgol2<<")"<<endl;
    }
    
}


void pct(char x[51])
{
    int s=0;
    for(int i=1;i<=n;i++)
    {
        if(strcmp(x,v[i].echipa1)==0)
        {
            if(v[i].nrgol1>v[i].nrgol2) s=s+3;
            else    if(v[i].nrgol1==v[i].nrgol2)    s=s+1;
        }
        else if(strcmp(x,v[i].echipa2)==0)
        {
            if(v[i].nrgol2>v[i].nrgol1) s=s+3;
            else if(v[i].nrgol2==v[i].nrgol1)   s=s+1;
        }
    }
    cout<<"punctaj:"<<s<<endl;
}
void vict(char x[51])
{
    int W=0,L=0,E=0;
    for(int i=1;i<=n;i++)
    {
        if(strcmp(x,v[i].echipa1)==0)
        {
            if(v[i].nrgol1>v[i].nrgol2)
                W++;
            else if(v[i].nrgol1==v[i].nrgol2)
                E++;
            else L++;
                
        }
        else if(strcmp(x,v[i].echipa2)==0)
        {
            if(v[i].nrgol2>v[i].nrgol1)
                W++;
            else if(v[i].nrgol2==v[i].nrgol1)
                E++;
            else L++;
        }
    }
    cout<<"victorii:"<<W<<endl;
    cout<<"egaluri:"<<E<<endl;
    cout<<"infrangeri:"<<L<<endl;
}
void goleveraj(char x[51])
{
    int W=0,L=0;
    for(int i=1;i<=n;i++)
    {
        if(strcmp(x,v[i].echipa1)==0)
        {
            W+=v[i].nrgol1;
            L+=v[i].nrgol2;
        }
        else if(strcmp(x,v[i].echipa2)==0)
        {
            W+=v[i].nrgol2;
            L+=v[i].nrgol1;
            
        }
    }
    cout<<"golaveraj:"<<(float)W/L<<endl<<endl;
    
}
void clasament()
{
    char s[50][51];
    int k=0,i,j;
    for(i=1;i<=n;i++)
    {
        strcpy(s[++k], v[i].echipa1);
        strcpy(s[++k], v[i].echipa2);
    }
    for(i=1;i<k;i++)
    {
        for(j=i+1;j<=k;j++)
        {
            if(strcmp(s[i], s[j])>0)
            {
                strcpy(s[0], s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], s[0]);
            }
        }
    }
    for(i=1;i<k;i++)
    {
        if(strcmp(s[i], s[i+1])==0)
        {
            for(j=i;j<=k;j++)
            {
                strcpy(s[j], s[j+1]);
            }
            i--;k--;
        }
    }
    for(i=1;i<=k;i++)
    {
            cout<<s[i]<<endl;
            pct(s[i]);
            vict(s[i]);
            goleveraj(s[i]);
    }
}

void meniu()
{
    cout<<"1. Adaugare partida"<<endl;
    cout<<"2. Punctaj total"<<endl;
    cout<<"3. Numarul partidelor terminate in egalitate"<<endl;
    cout<<"4. Pronosport"<<endl;
    cout<<"5. Clasament"<<endl;
    cout<<"6. Iesire"<<endl;
    cout<<" Optiunea dumneavoastra: ";
}
int main()
{
    int opt;;
    do
    {
      meniu();
      cin>>opt;
      switch(opt)
      {
          case 1: adaugare();  break;
          case 2: punctaj();   break;
          case 3: egalitate(); break;
          case 4: pronosport(); break;
          case 5: clasament(); break;
      }
    }while(opt!=6);
    return 0;
}
