//Prueba de divisibilidad
#include <stdio.h>

int main()
{
    int n,d;

    printf("Introduzca dos enteros: ");
    scanf("%d %d",&n,&d);

    if(n%d==0)
        printf("%d es divisible por %d\n",n,d);
    else 
        printf("%d no es divisible por %d\n",n,d);
    
    return 0;
}