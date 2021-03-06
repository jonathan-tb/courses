/*El programa ASIGCADS.c lee n leineas de texto, reserva memoria segun la longitud de la linea leida,
cuenta las vocales de cade linea e imprime cada linea y el numero de vocales que tiene */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define N 10

void salida (char *[],int *);
void entrada (char *[]);
int vocales(char *);

int main()
{
    char *cad[N];
    int j, voc[N];

    entrada (cad);
    //cuenta de vocales por cada linea
    for(j=0; j<N; j++)
        voc[j] = vocales(cad[j]);
    salida(cad,voc);
    return 0;
}
void entrada(char *cd[])
{
    char B[121];
    int j, tam;

    printf("\n\tEscribe %d lineas de texto\n",N);
    for(j=0;j<N;j++)
    {
        gets(B);
        tam = (strlen(B)+1)*sizeof(char);
        cd[j] = (char *)malloc(tam);
        strcpy(cd[j],B);
    }
}
int vocales (char *c)
{
    int k,j;
    //cuentas vocales de la cadena c
    for(j=k=0; j<strlen(c);j++)
        switch (tolower(*(c+j)))
        {
            case 'a':;
            case 'e':;
            case 'i':;
            case 'o':;
            case 'u':k++;
        }
    return k;
}
void salida(char *cd[],int *v)
{
    int j;

    puts("\n\tSalida de las lineas junto al numero de vocales");
    for(j=0; j<N;j++)
    {
        printf("%s : %2d\n",cd[j],v[j]);
    }
}