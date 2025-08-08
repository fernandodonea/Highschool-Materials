//
//  main.cpp
//  Pb 11
//
//  Created by Fernando Donea on 26.01.2022.
//

#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;
ifstream fin("BAC.TXT");
int main()
{
    char s[256];
    cin>>s;//algoritmi
    int k;//5
    cin>>k;
    for(int i=1;i<=k;i++)
        cout<<s[k-1];
    return 0;//rrrrr
}

