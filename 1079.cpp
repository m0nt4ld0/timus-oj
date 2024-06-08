#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a(200000,-1);
    int idx=-1, //Indice (ingreso 1 в‰¤ n в‰¤ 99999)
        mv, //Maximo valor
        c=1; //inicio i (para llenar solo lo necesario del vector)
    a[0]=0;
    a[1]=1;
    while(idx!=0){
        cin>>idx;
        for(int i=c;i<=idx;i++){
            a[2*i]=a[i];
            a[2*i+1]=a[i]+a[i+1];
        }
        c=idx;
        for(int i=0;i<=idx;i++){
            if(!i||a[i]>mv)
                mv=a[i];
        }
        if(idx)
            cout<<mv<<endl;
    }
    return 0;
}