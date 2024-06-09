#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int n,m,v,t=0;
    cin>>n>>m;
    vector<long> votos(n,0);
    for(int i=0;i<m;i++){
        cin>>v;
        votos[v-1]++;
        t++;
    }
    cout<<fixed;
    for(int i=0;i<votos.size();i++)
        cout<<setprecision(2)<<((float)votos[i]/t*100)<<'%'<<endl;
    return 0;
}