
//
//  problemebac.cpp
//  Atestat informatica - Siruri de caractere
//
//  Realizat de Fernando-Emanuel Donea
//

#include "problemebac.h"
#include <iostream>
#include <cstring>
#include <windows.h>
using namespace std;

void stergere()//functie pentru eliberarea continutului consolei
{
    cin.get(); system("CLS");
}

void meniu_principal()
{
    system("CLS");
    cout<<"Probleme cu siruri de caractere date la examenul de bacalaureat"<<endl<<endl;
    cout<<"1. Bac 2024"<<endl;
    cout<<"2. Bac 2023"<<endl;
    cout<<"3. Bac 2022"<<endl;
    cout<<"4. Bac 2021"<<endl;
    cout<<"5. Bac 2020"<<endl;
    cout<<"6. Iesire"<<endl;
    cout<<"Optiunea dvs:";
}


void menu2024()//functie de afisare a meniului cu probleme din anul 2024
{
    stergere();
    cout<<"Probleme din anul 2024"<<endl<<endl;
    cout<<"1. Simulare - 6 martie 2024"<<endl;
    cout<<"2. Modele de subiecte - noiembrie 2023"<<endl;
    cout<<"3. Iesire"<<endl;
    cout<<"Optiunea dvs:";
}
void sim_martie_2024()
{
    stergere();
    cout<<"Un sablon este un text in care cuvintele sunt separate prin cate un spatiu si sunt formate fie numai din litere mici si mari ale alfabetului englez, fie numai din caractere *, in ultimul caz numindu-se cuvinte generice. Lungimea unui cuvant este egala cu numarul de caractere care il compun.Un computer genereaza o fraza pe baza unui astfel de sablon, prin inlocuirea fiecarui cuvant generic cu unul dintre cuvintele de aceeasi lungime, preluat dintr-o lista data. Scrieti un program C/C++ care citeste de la tastatura un numar natural, n (n∈[1,100]), si o lista de n cuvinte, urmata de un sablon de tipul precizat. Fiecare cuvant din lista este format din maximum 10 litere mici si mari ale alfabetului englez si la citire este introdus singur pe linie. sablonul contine maximum 100 de caractere. Programul obtine in memorie si apoi afiseaza pe ecran una dintre frazele care pot fi generate pe baza sablonului si a listei citite sau mesajul imposibil daca nu se poate genera o astfel de fraza."<<endl<<endl;
    cout<<"Exemplu: daca n=6, iar lista de cuvinte este: rece placuta acasa calduta innorata soare"<<endl<<"pentru sablonul 'Era o vreme ******* si ***** din belsug *****' se genereaza fraza:"<<endl<<"Era o vreme placuta si soare din belsug soare"<<endl<<endl;
    unsigned n;
    char s[101],a[101][11];
    cout<<"n=";cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cin.get();
    cout<<"Introduceti sablonul:";
    cin.getline(s,101);

    char *x,t[101],aux[101];
    unsigned long lx,ly;
    bool ok=true;
    x=strtok(s," ");
    t[0]=NULL;
    while(x!=NULL && ok==true)
    {
        strcpy(aux,x);
        if(x[0]=='*')//cuvant generic
        {
            lx=strlen(x);
            for(int i=1;i<=n;i++)
            {
                ly=strlen(a[i]);
                if(lx==ly)
                {
                    strcpy(aux,a[i]);
                }
            }
        }
        if(aux[0]=='*')ok=false;
        strcat(t,aux);
        strcat(t," ");
        x=strtok(NULL," ");
    }
    if(ok==true)
    {
        t[strlen(t)]=NULL;
        strcpy(s,t);
        cout<<t;
    }
    else cout<<"imposibil";
}
void model_sub_2024()
{
    stergere();
    cout<<"Un text are cel mult 100 de caractere, iar cuvintele sale sunt formate numai din litere mici ale alfabetului englez, sunt distincte si sunt separate prin cate un spatiu. Scrieti un program C/C++ care citeste de la tastatura un numar natural n (n∈[1,102]), apoi un text de tipul precizat mai sus, si afiseaza pe ecran cuvinte ale acestuia, pe doua linii separate, astfel incat prima linie sa contina multimea cuvintelor care au mai putin de n litere, iar a doua linie sa contina multimea cuvintelor care au mai mult de n litere. Cuvintele de pe fiecare linie sunt afisate intr-o ordine oarecare, iar daca una dintre cele doua multimi este vida, se afiseaza pe ecran doar mesajul nu exista."<<endl<<endl;
    cout<<"Exemplu: pentru n=3 si textul 'era o apa rece si cu gust bun' se poate afisa pe ecran textul:"<<endl<<"o si cu"<<endl<<"rece gust"<<endl<<endl;
    unsigned long n,lx;
    char s[101];
    cout<<"n=";cin>>n;
    cin.get();
    cout<<"Introduceti sirul:";cin.getline(s,101);

    char *x,a[101],b[101];

    a[0]=NULL;b[0]=NULL;
    x=strtok(s," ");
    while(x!=NULL)
    {
        lx=strlen(x);
        if(lx<n)
        {
            strcat(a,x);
            strcat(a," ");
        }
        else if(lx>n)
        {
            strcat(b,x);
            strcat(b," ");
        }
        x=strtok(NULL," ");
    }
    if(strlen(a)==0 || strlen(b)==0)cout<<"nu exista";//multime vida
    else
    {
        cout<<a<<endl<<b<<endl;
    }

}
void probleme2024()//meniul cu probleme din anul 2024
{
    int opt;
    do
    {
        menu2024();
        cin>>opt;
        switch (opt) {
            case 1:{
                sim_martie_2024();
            }break;
            case 2: {
                model_sub_2024();
            }break;
        }
    }while(opt!=3);
}


void menu2023()
{
    stergere();
    cout<<"Probleme din anul 2023"<<endl<<endl;
    cout<<"1. Simulare - 29 martie 2023"<<endl;
    cout<<"2. Iesire"<<endl;
    cout<<"Optiunea dvs:";
}
void sim_martie_2023()
{
    stergere();
    cout<<"Intr-un text de cel mult 100 de caractere cuvintele sunt separate prin cate un spatiu si sunt formate din litere mari ale alfabetului englez, iar daca sunt scrise prescurtat sunt urmate de caracterul . (punct). Textul reprezinta denumirea stiintifica a unei pasari si doar cuvintele din multimea {FAMILIA, GENUL, SPECIA}, specifice sistemului de clasificare a organismelor, sunt mereu prescurtate, prin eliminarea ultimelor lor litere."<<endl;
    cout<<"Scrieti un program C/C++ care citeste de la tastatura un text de tipul precizat si construieste in memorie, apoi afiseaza pe ecran denumirea stiintifica, in care pentru cuvintele specifice sistemului de clasificare a organismelor se pastreaza doar primele trei litere, scrise cu litere mici, si urmate de punct, ca in exemplu."<<endl<<endl;
    cout<<"Exemplu: pentru textul 'FAMIL. PHASIANIDAE GEN. MELEAGRIS SP. GALLOPAVO' sau pentru textul 'FAM. PHASIANIDAE G. MELEAGRIS SPECI. GALLOPAVO' se obtine "<<endl<<"'fam. PHASIANIDAE gen. MELEAGRIS spe. GALLOPAVO'"<<endl<<endl;
    char s[101];
    cout<<"Introduceti sirul:";cin.getline(s,101);
    unsigned long n;
    char t[101],*x;
    t[0]=NULL;
    x=strtok(s," ");
    while(x!=NULL)
    {
        n=strlen(x)-1;
        if(x[n]=='.')
        {
            if(x[0]=='F')strcat(t,"fam. ");
            else if(x[0]=='S')strcat(t,"spe. ");
            else if(x[0]=='G')strcat(t,"gen. ");
        }
        else
        {
            strcat(t,x);
            strcat(t," ");
        }
        x=strtok(NULL," ");
    }
    t[strlen(t)-1]=NULL;
    strcpy(s,t);
    cout<<s;
}
void probleme2023()
{
    int opt;
    do
    {
        menu2023();
        cin>>opt;
        switch (opt) {
            case 1:{
                sim_martie_2023();
            }break;
        }
    }while(opt!=2);
}

void menu2022()
{
    stergere();
    cout<<"Probleme din anul 2022"<<endl<<endl;
    cout<<"1. Bacalaureat sesiunea august - septembrie - 18 august 2022"<<endl;
    cout<<"2. Simulare - 30 martie 2022"<<endl;
    cout<<"3. Iesire"<<endl;
    cout<<"Optiunea dvs:";
}
void bac_august_2022()
{
    stergere();
    cout<<"Se considera o vocala oarecare a alfabetului englez, notata cu v, si o consoana oarecare a alfabetului englez, notata cu c. Litera v se numeste vocala prietena a lui c daca in sirul literelor alfabetului englez, ordonat lexicografic, v il precede pe c, iar intre v si c nu exista nicio vocala. Se considera vocale literele a, e, i, o, u. Exemplu: e este vocala prietena pentru consoanele f, g si h, dar nu este vocala prietena pentru consoanele d si j."<<endl;
    cout<<"Un elev vrea sa transmita unui prieten o parola, codificata. Parola este formata dintr-un singur cuvant de cel mult 50 de caractere, litere mici ale alfabetului englez, cel putin una fiind consoana. Codificarea se face prin inlocuirea fiecarei consoane cu vocala sa prietena, ca in exemplu."<<endl;
    cout<<"Scrieti un program C/C++ care citeste de la tastatura un cuvant, reprezentand o parola de tipul precizat si determina, in memorie, forma codificata a acesteia. Programul afiseaza pe ecran parola codificata obtinuta."<<endl<<endl;
    cout<<"Exemplu: pentru parola 'rame' se afiseaza 'oaie', iar pentru parola 'sport' se afiseazã 'ooooo'"<<endl<<endl;

    char s[51];
    cout<<"Introduceti parola:";cin>>s;
    unsigned long n;
    n=strlen(s)-1;
    for(int i=0;i<=n;i++)
    {
        if('u'<=s[i])
            s[i]='u';
        else if('o'<=s[i])
            s[i]='o';
        else if('i'<=s[i])
            s[i]='i';
        else if('e'<=s[i])
            s[i]='e';
        else s[i]='a';
    }
    cout<<s;
    cin.get();
}
void sim_martie_2022()
{
    stergere();
    cout<<"Un text, de cel mult 250 de caractere, reprezinta o lista cu date de identificare ale invitatilor la o petrecere; fiecare invitat are un prenume si un nume, care apar in lista in aceasta ordine, urmate de simbolul ; (punct si virgula), ca in exemplu. Numele si prenumele sunt formate din cate un singur cuvant, compus din litere mari ale alfabetului englez, si sunt separate printr-un spatiu."<<endl;
    cout<<"Scrieti un program C/C++ care citeste de la tastatura un text de tipul precizat mai sus apoi, de pe randul urmator, un cuvant, x, si afiseaza pe ecran, separate prin cate un spatiu, numele tuturor invitatilor care au prenumele x, ca in exemplu, sau mesajul NU daca nu exista astfel de invitati."<<endl<<endl;
    cout<<"Exemplu: daca lista este DAN MARIS; DANILA PREPELEAC; DAN POPA; EDANA DAN; si cuvantul x este DAN se afiseaza pe ecran MARIS POPA"<<endl<<endl;
    char s[251],x[251];
    cout<<"Introduceti lista invitatilor:";cin.getline(s, 251);
    cout<<"Prenumele x=";cin>>x;

    char *p,aux[251];
    bool ok=false,gasit=false;
    p=strtok(s," ");
    while(p!=NULL)
    {
        if(strcmp(p, x)==0)
        {
            ok=true;
            gasit=true;
        }
        else if(gasit==true)
        {
            strcpy(aux,p);
            aux[strlen(aux)-1]=NULL;
            cout<<aux<<" ";
            gasit=false;
        }
        p=strtok(NULL, " ");
    }
    cin.get();
}
void probleme2022()
{
    int opt;
    do
    {
        menu2022();
        cin>>opt;
        switch (opt) {
            case 1:
                bac_august_2022();
                break;
            case 2:
                sim_martie_2022();
            default:
                break;
        }
    }while(opt!=3);

}


void menu2021()
{
    stergere();
    cout<<"Probleme din anul 2021"<<endl<<endl;
    cout<<"1. Bacalaureat sesiunea iunie-iulie 2021 - 30 iunie 2021"<<endl;
    cout<<"2. Iesire"<<endl;
    cout<<"Optiunea dvs:";
}
void bac_iulie_2021()
{
    stergere();
    cout<<"Scrieti un program C/C++ care citeste de la tastatura doua numere naturale n si k, apoi n cuvinte, separate prin Enter. Fiecare cuvant este format din cel mult 10 caractere, numai litere mici ale alfabetului englez, iar numerele citite sunt din intervalul [1,20]."<<endl;
    cout<<"Programul afiseaza pe ecran, pe linii separate, primele k cuvinte dintre cele citite pentru care ultima litera este o vocala, sau doar mesajul nu exista daca nu exista k astfel decuvinte. Se considera vocale literele a, e, i, o, u."<<endl<<endl;
    cout<<"Exemplu: n=5, k=2 si cuvintele 'norii cumulus pluteau pe cer' se va afisa pe ecran pe doua linii distincte 'norii pluteau'"<<endl<<endl;
    unsigned n,k;
    cout<<"n=";cin>>n;
    cout<<"k=";cin>>k;

    char a[21][11],x[11];
    unsigned long lx,nr=0;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        lx=strlen(x)-1;
        if(strchr("aeiou",x[lx])!=NULL)
        {
            strcpy(a[++nr],x);
        }
    }
    if(nr<k)cout<<"NU EXISTA";
    else for(int i=1;i<=k;i++)
        cout<<a[i]<<endl;
    cin.get();
}
void probleme2021()
{
    int opt;
    do
    {
        menu2021();
        cin>>opt;
        switch (opt) {
            case 1:
                bac_iulie_2021();
                break;
            default:
                break;
        }
    }while(opt!=2);
}


void menu2020()
{
    stergere();
    cout<<"Probleme din anul 2020"<<endl<<endl;
    cout<<"1. Bacalaureat sesiunea iunie - iulie 2020"<<endl;
    cout<<"2. Bacalaureat sesiunea august - septembrie 2020"<<endl;
    cout<<"3. Iesire"<<endl;
    cout<<"Optiunea dvs:";

}
void bac_iulie_2020()
{
    stergere();
    cout<<"Numim rotire spre stanga a unui cuvant format din cel putin trei litere operatia prin care prima sa litera se muta la final, iar toate celelalte litere se muta cu o pozitie spre stanga.";
    cout<<"Exemplu: in urma rotirii spre stanga a cuvantului ilumina se obtine cuvantul luminai."<<endl;
    cout<<"Un text are cel mult 100 de caractere, iar cuvintele sale sunt formate din litere mici ale alfabetului englez si sunt separate prin cate un spatiu. Scrieti un program C/C++ care citeste de la tastatura un text de tipul mentionat mai sus si il transforma in memorie prin rotirea spre stanga a fiecarui cuvant al sau format din cel putin trei litere, ca in exemplu. Programul afiseaza pe ecran textul obtinut sau mesajul nu exista, daca in text nu exista niciun cuvant de cel putin trei litere."<<endl<<endl;
    cout<<"Exemplu: pentru textul 'un palc mic de scolarite ilumina sala' se afiseaza pe ecran 'un alcp icm de colarites luminai alas'"<<endl<<endl;
    char s[101];
    cout<<"Introduceri sirul:";cin.getline(s,101);
    bool ok=false;
    char *x,t[101],aux;
    t[0]=NULL;
    x=strtok(s," ");
    while(x!=NULL)
    {
        unsigned long lx;
        lx=strlen(x);
        if(lx>=3)
        {
            ok=true;
            aux=x[0];
            for(int i=0;i<lx-1;i++)
                x[i]=x[i+1];
            x[lx-1]=aux;
        }
        strcat(t,x);
        strcat(t," ");
        x=strtok(NULL," ");
    }
    if(ok==false)cout<<"nu exista";
    else
    {
        t[strlen(t)-1]=NULL;
        strcpy(s,t);
        cout<<s;
    }
}
void bac_august2020()
{
    stergere();
    cout<<"Doua cuvinte distincte se numesc in oglinda daca fiecare dintre ele se obtine prin citirea literelor celuilalt de la dreapta la stanga."<<endl;
    cout<<"Exemplu: animate si etamina sunt in oglinda, iar pentru cuvantul reper nu exista un cuvant cu care sa fie in oglinda."<<endl;
    cout<<"Se considera un text cu cel mult 100 de caractere, in care cuvintele sunt formate din litere mici ale alfabetului englez si sunt separate prin cate un spatiu. Scrieti un program C/C++ care citeste de la tastatura un text de tipul mentionat mai sus si il transforma in memorie, inlocuind fiecare cuvant cu numar impar de litere cu acel cuvant cu care el este in oglinda, daca acesta exista, ca in exemplu. Programul afiseaza pe ecran textul obtinut sau mesajul nu exista, daca in text nu s-a inlocuit niciun cuvant."<<endl<<endl;
    cout<<"Exemplu: pentru textul 'era o selectie reper de desene animate prezenta' se obtine textul 'are o selectie reper de desene etamina prezenta'"<<endl;
    cout<<"pentru textul 'un reper pentru desene' se afiseaza pe ecran mesajul nu exista"<<endl<<endl;
    char s[101];
    cout<<"Introduceti sirul:";cin.getline(s,101);
    bool ok=false;
    unsigned long lx;
    char *x,t[101],y[101];
    x=strtok(s," ");
    while(x!=NULL)
    {
        lx=strlen(x);
        if(lx%2==1)
        {
            strcpy(y,x);
            for(int i=0;i<lx/2;i++)
            {
                char aux=y[i];
                y[i]=y[lx-1-i];
                y[lx-1-i]=aux;
            }
            strcat(t,y);
            strcat(t," ");
            if(strcmp(x, y)!=0)ok=true;
        }
        else
        {
            strcat(t,x);
            strcat(t," ");
        }
        x=strtok(NULL," ");
    }
    t[strlen(t)-1]=NULL;
    strcpy(s,t);
    if(ok==true)cout<<s;
    else cout<<"nu exista";
}
void probleme2020()
{
    int opt;
    do
    {
        menu2020();
        cin>>opt;
        switch (opt) {
            case 1:{
                bac_iulie_2020();
            }break;
            case 2:{
                bac_august2020();
            }break;
            default:
                break;
        }

    }while(opt!=3);
}
