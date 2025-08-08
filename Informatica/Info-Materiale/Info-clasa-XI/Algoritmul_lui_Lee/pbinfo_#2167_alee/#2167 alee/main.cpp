//
//  main.cpp
//  #2167 alee
//
//  Created by Fernando Donea on 30.09.2022.
//

#include <fstream>
using namespace std;
ifstream fin("alee.in");
ofstream fout("alee.out");
struct pozitie
{
    int x,y;
}c[40000];//coada
int a[200][200],n;
void citire(int &m, int &xs, int &ys, int &xf, int &yf)
{
    int x,y;
    fin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        fin>>x>>y;//coordonatele celor m copaci
        a[x][y]=-1;//marcam copacii cu -1
    }
    fin>>xs>>ys>>xf>>yf;
}
bool interior(int x, int y)
{
    if(x>=1 && y>=1 && x<=n && y<=n)
        return true;
    else return false;
}
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
void lee(int xs, int ys)
{
    int p,u,xv,yv;
    p=u=1;
    c[u].x=xs;
    c[u].y=ys;
    a[xs][xs]=1;
    while(u<=p)
    {
        int x,y;
        x=c[u].x;
        y=c[u].y;
        for(int i=0;i<=3;i++)
        {
            xv=dx[i]+x;
            yv=dy[i]+y;//pavaje posibile
            if(interior(xv, yv)==true && a[xv][yv]==0)
            {
                //elemente noi in coada
                p++;
                c[p].x=xv;
                c[p].y=yv;
                a[xv][yv]=a[x][y]+1;
            }
        }
        u++;
    }
}
int main()
{
    int m,xs,ys,xf,yf;
    citire(m, xs, ys, xf, yf);
    lee(xs, ys);
    fout<<a[xf][yf];
    fin.close();
    fout.close();
    return 0;
}
