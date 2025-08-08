//
//  main.cpp
//  parcurgeri_ex1
//
//  Created by Fernando Donea on 26.01.2022.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[256];
    cin.getline(s, 256);//copiii*sunt***la*zoo
    int n=strlen(s);
    for(int i=0;i<n-1;i++)
    {
        if(s[i]!='*' && s[i]>'a' && s[i]<'z' && s[i]==s[i+1])
            cout<<s[i]<<" "<<s[i]<<'\n';
    }
    return 0;
}
