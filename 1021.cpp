#include <iostream>
#include <vector>

using namespace std;

vector<int> n1;
vector<int> n2;


bool busqueda_Binaria(int valor, int tamv){
     int bajo;           //< PosiciГіn mГЎs baja para buscar
     int alto;           //< PosiciГіn mГЎs alta para buscar
     int mitad;          //< Mitad del n2
     int encontrado=0;   //< Se pone a uno si se encuentra el elemento

     bajo=0;
     alto=tamv-1;
     while((bajo<=alto)&&(!encontrado)){
         mitad=(alto+bajo)/2;
         if(valor+n2[mitad]==10000)
             encontrado=1;
          else if(valor+n2[mitad]<10000)
                 alto=mitad-1;
             else
                 bajo=mitad+1;
     }
     if(encontrado)
         return true;
     else
         return false;
 }


int main()
{
    int c1, c2, nro;
    cin>>c1;
    n1 = vector<int>(c1);
    for(int i=0; i<c1; i++)
    {
        cin>>nro;
        n1[i]=nro;
    }
    cin>>c2;
    n2 = vector<int>(c2);
    for(int i=0; i<c2; i++)
    {
        cin>>nro;
        n2[i]=nro;
    }
    for(int i=0;i<c1;i++){
        if(busqueda_Binaria(n1[i],c2)){
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";
    return 0;
}