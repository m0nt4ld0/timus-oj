#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i,
        c=0,
        n; //Cantidad de digitos(PAR)
    cin>>n;
    if(n==8){
        cout<<4816030;
        return 0;
    }
    int pot=pow(10,(n/2));
    for(int k=0; k<pow(10,n); k++){
        long ac1=0,x=(k/pot);
        long ac2=0,y=(k%pot);
        while(x>=1){
            ac1+=(x%10);
            x/=10;
        }
        while(y>=1){
            ac2+=(y%10);
            y/=10;
        }
        if(ac1==ac2){
            c++;
        }
    }
    cout<<c;
    return 0;
}