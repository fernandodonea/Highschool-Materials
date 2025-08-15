#include <iostream>
using namespace std;
bool aprim(int n)
{
    int p,f=2,k=0;
    bool ok=true;
    while(n>1 and ok==true)
    {
        p=0;
        while(n%f==0)
        {
            n/=f;
            p++;
        }
        if(p>0)k++;
        if(k>2)ok=false;
        if(p>1)ok=false;
        f++;
        if(f*f>n)f=n;
    }
    if(k!=2)return false;
    if(ok==true)return true;
    else return false;
}
