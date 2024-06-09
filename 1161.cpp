#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>

using namespace std;
/*
3 - 72,30,50        30,50,72
72,30--->no se puede
72,50--->120

reemplazo 72 y 50 por 60
120,30-->120 (RDO FINAL)
--------------------------
3 - 16,4,9          4,9,16
16,4---->16
16,9---->24
me quedo con 16,4--->16
reemplazo 16 y 4 por 16
16,9---->24

2*sqrt(2*sqrt(x,y)) RECURSIVA...
tantas raices como pares de nros haya (redondear hacia arriba)

Posible solucion:
1 ordenar el vector de mayor a menor
2 resolver el par de (n-1,n) posiciones y almacenarlo en n
3 llamar a la funcion recursiva con (n, n+1)
4 cuando sea fin del vector mostrar la ultima posicion (rdo)
*/
int n;
vector<double> pesos;

double rdo(int idx){
    if(idx>0) return (2*sqrt(pesos[idx]*rdo(idx-1)));
    return  (pesos[idx]);
}
/*
float rdo(int idx){
    if(!idx) return  (pesos[idx]);
    return (2*sqrt(pesos[idx]*rdo(idx-1)));
}
*/
bool comp(double a, double b){///Descendente
    return (a>b);
}

void mostrar(void){
    for(int i=0;i<n;i++){
        cout<<pesos[i]<<' ';
    }
}

int main()
{
    double aux;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>aux;
        pesos.push_back(aux);
    }
    sort(pesos.begin(),pesos.end(),comp);
    //mostrar();
    double sum=aux;
    //printf("%.2f",round(rdo(n-1)));
    if(n>1)
        sum=rdo(n-1); //NO REDONDEARRRRRRRR!!!!!!!!!!!!!
    printf("%.2f",sum);
    return 0;
}