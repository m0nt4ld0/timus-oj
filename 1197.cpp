#include <iostream>

using namespace std;

int resolver(int fila,int c)
{
    int tot=0;
    if(fila+2<=8 && c+1<=8) tot++;
    if(fila+2<=8 && c-1>0)  tot++;
    if(fila-2>0 && c+1<=8)  tot++;
    if(fila-2>0 && c-1>0) tot++;

    if(c+2<=8 && fila+1<=8) tot++;
    if(c+2<=8 && fila-1>0)  tot++;
    if(c-2>0 && fila+1<=8)  tot++;
    if(c-2>0 && fila-1>0) tot++;
    return tot;
}

int main()
{
    int n,c,fila;
    char f;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>f>>c;
        fila=f-'a'+1;
        cout<<resolver(fila,c)<<endl;
    }
    return 0;
}