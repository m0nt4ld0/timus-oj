#include <stdio.h>

int contarSignos(const char *);
void factorial(int, int,int);

int main()
{
    int nro,rdo,cant=0;
    char linea[21];
    scanf("%d %[^\n]",&nro,linea);
    cant=contarSignos(linea);
    rdo=nro;
    factorial(nro,rdo,cant);
    return 0;
}

void factorial(int nro, int rdo,int cant){
    if(nro-cant<1){
        printf("%d",rdo);
        return;
    }
    nro-=cant;
    rdo*=(nro>0)?nro:nro*(-1);
    factorial(nro,rdo,cant);
}

int contarSignos(const char *cad){
    int cont=0;
    while(*cad){
        if(*cad=='!')
            cont++;
        cad++;
    }
    return cont;
}