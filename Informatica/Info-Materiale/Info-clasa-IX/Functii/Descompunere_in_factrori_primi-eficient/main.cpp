#include <iostream>
using namespace std;
int factoriprimi(int n)
{
    int p,f;
    f=2;
    while(n>1)
    {
        p=0;
        while(n%f==0)
        {
            n/=f;
            p++;
        }
        if(p>0)cout<<f<<"^"<<p<<endl;
        f++;
        if(f*f>n)f=n;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    cout<<factoriprimi(n);
    return 0;
}
