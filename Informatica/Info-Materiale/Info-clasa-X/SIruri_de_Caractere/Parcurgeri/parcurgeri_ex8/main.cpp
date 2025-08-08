//
//  main.cpp
//  Pb 8
//
//  Created by Fernando Donea on 26.01.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[256],c1,c2;
    cin>>c1>>c2;//a ^ o
    cin.getline(s, 256);//hocus pocus preparatus
    cout<<s<<endl;
    long long n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if(s[i]==c1)
            s[i]=c2;
        else if(s[i]==c2)
            s[i]=c1;
    }
    cout<<s;//hacus pacus preporotus
    return 0;
}

