//
//  main.cpp
//  Suma, numărul divizorilor în mod eficient
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int main()
{
    int n,i,j,s=0,k=0;
    cout<<"n=";cin>>n;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            k++;s+=i;
            j=n/i;
            if(i!=j)
            {
                k++;
                s+=j;
            }
        }
    }
    cout<<"S="<<s<<endl<<"K="<<k<<endl;
    return 0;
    
}
