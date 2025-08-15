#include <iostream>
using namespace std;
int sumdiv(int n)
{
    int s=0,i,j;
    for(i=1;i*i<=n;i++)

    {
        if(n%i==0)
        {
            s+=i;
            j=n/i;
            if(i!=j)s+=j;
        }
    }
    return s;
}

