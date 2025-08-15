#include <iostream>
using namespace std;
int baza2(int n)
{
    int c,idk=0,p=1;
    while(n)
    {
        c=n%2;
        n/=2;
        idk=idk+p*c;
        p*=10;
    }
    return idk;
}

