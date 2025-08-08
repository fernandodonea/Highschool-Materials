//
//  main.cpp
//  Pb 5
//
//  Created by Fernando Donea on 26.01.2022.
//

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ofstream fout("BAC.TXT");
int main()
{
    char s[31];
    cin>>s;
    long long n=strlen(s),i,j;
    for(i=n-1;i>=0;i--)
    {
        for(j=i;j<n;j++)fout<<s[j];
        fout<<endl;
    }
    fout.close();
    return 0;
}
