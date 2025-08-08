//
//  main.cpp
//  Pb 6
//
//  Created by Fernando Donea on 26.01.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[256];
    cin.getline(s, 256);//azi este examen de bacalaureat
    long long n=strlen(s);
    if(s[0]>='a' && s[0]<='z')
        s[0]-=32;
    for(int i=1;i<n;i++)
    {
        if(s[i]>='a' && s[i]<='z' && s[i-1]==' ')
            s[i]=s[i]-32;
    }
    cout<<s;//Azi Este Examen De Bacalaureat
    return 0;
    
}
