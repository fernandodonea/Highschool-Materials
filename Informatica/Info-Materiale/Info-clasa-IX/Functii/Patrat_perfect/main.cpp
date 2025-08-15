#include <iostream>
#include <cmath>
using namespace std;
bool perf(int n)
{
    int p=(int)sqrt((double)n);
    if(n==p*p)
        return true;
    else
        return false;
    return 0;
}
