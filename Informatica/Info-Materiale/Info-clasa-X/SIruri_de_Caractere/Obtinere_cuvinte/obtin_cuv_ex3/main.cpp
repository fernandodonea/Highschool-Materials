//
//  main.cpp
//  ex 3
//
//  Created by Fernando Donea on 02.02.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[256],*x;
    int S,P,C;
    cin.getline(s,256);
    //Iuliana#S Razvan#S invata#P Andrei#S joaca#P bine#C
    x=strtok(s, " ");
    S=P=C=0;
    while(x!=NULL)
    {
        if(x[strlen(x)-2]=='#')
        {
            if(x[strlen(x)-1]=='S')S++;
            if(x[strlen(x)-1]=='P')P++;
            if(x[strlen(x)-1]=='C')C++;
        }
        x=strtok(NULL, " ");
    }
    cout<<S<<" "<<P<<" "<<C<<endl;
    // 3 subiecte, 2 predicate, 1 compliment
    return 0;
    
}
