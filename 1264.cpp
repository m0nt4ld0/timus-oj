#include <stdio.h>
int main()
{
    int j,orden, nro, seg=0;
    scanf("%d %d",&orden,&nro);
    for(;orden>0;orden--)
        for(j=0;j<=nro;j++)
            seg++;
    printf("%d",seg);
    return 0;
}