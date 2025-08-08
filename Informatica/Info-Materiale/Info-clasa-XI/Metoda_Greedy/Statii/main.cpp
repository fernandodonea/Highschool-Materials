//
//  main.cpp
//  Statii
//
//  Created by Fernando Donea on 21.09.2022.
//

#include <fstream>
using namespace std;
ifstream fin("STATII.IN");
ofstream fout("STATII.OUT");
int main()
{
    int n,x,v[101];
    fin>>n>>x;
    for(int i=1;i<n;i++)
    {
        fin>>v[i];
    }
    fout<<1<<" ";
    int s=0;
    for(int i=1;i<n;i++)
    {
        s+=v[i];
        if(s>x)
        {
            fout<<i+1<<" ";
            s=0;
        }
    }
    fin.close();
    fout.close();
    return 0;
}
