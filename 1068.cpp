#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d",&n);
    for(i=(n>0)?(n-1):(n+1); (n>0)?(i>=1):(i<=1) ;(n>0)?(i--):(i++))
        n+=i;
    printf("%d",n);
    return 0;
}