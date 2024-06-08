#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int cn; //Cantidad de numeros
    cin>>cn;
    vector<int> n(cn);
    for(int i=0;i<cn;i++)
        cin>>n[i];
    sort(n.begin(), n.end());
    ///Ordenar el vector de numeros
    string hashtags;
    cin>>hashtags;
    int cc; //Cantidad de consultas
    cin>>cc;
    vector<int> q(cc); //Queries
    for(int i=0;i<cc;i++)
        cin>>q[i];
    for(int i=0;i<cc;i++)
        cout<<n[q[i]-1]<<endl;
    return 0;
}