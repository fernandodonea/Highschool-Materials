//
//  main.cpp
//  Scrierea unui număr ca sumă de termeni ai șirului lui Fibonacci;
//
//  Created by Fernando Donea on 06.05.2021.
//

#include <iostream>
using namespace std;
int fibonacios(int n)
{
    int a,b,c;
    a=0;b=1;c=0;
    while(a+b<n)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}
int main()
{
    int n,x;
    cout<<"n=";cin>>n;
    while(n>0)
    {
        x=fibonacios(n);
        cout<<x<<" ";
        n-=x;
    }
    return 0;
}
