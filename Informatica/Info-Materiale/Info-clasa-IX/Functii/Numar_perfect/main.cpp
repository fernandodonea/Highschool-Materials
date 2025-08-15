#include <iostream>
using namespace std;
bool perf(int n)
{
    int s=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)s+=i;
    }
    if(s==n)return true;
    return false;
}
