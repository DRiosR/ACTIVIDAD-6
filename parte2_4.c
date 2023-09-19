// RiosRodriguezDaniel 372800
// 11-sep-23
/*
PARTE 2
4- En los cabos la embarcación finisterra que tiene
fondo de cristal, solo sale a navegar con un máximo
de 10 turistas o un máximo de 700 kilos de pasajeros.
(preguntar el peso a cada turista) con un máximo de 15%
de sobrepeso. desplegar el promedio de peso de los turistas
y cual de los 2 condiciones se cumplió.
*/
// R.R.D_act6_2_932
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int validar(char mensaje[], int ri, int rf);
int main()
{
    int peso, turista, i, con, pmax = 700, psobre;
    turista=validar("CUANTOS TURISTAS SON?\n",0,100);
    printf("CUANTO PESA CADA TURISTA?\n");
    for (i = 1; i <= turista; i++)
    {
       peso=validar("",0,10000);
        con = con + peso;
    }
    if (turista <= 10)
    {
        printf("LA CONDICION DE LOS TURISTAS SE CUMPLIO\nTURISTAS=%d\n", turista);
    }
    else
    {
        printf("LA CONDICION DE LOS TURISTAS NO SE CUMPLIO\nTURISTAS=%d\n", turista);
    }
    if (con < pmax)
    {
        printf("LA CONDICION DE PESO SE CUMPLIO\nPESO=%d\n", con);
    }
    else
    {
        psobre = pmax + (pmax * .15);
        if (con > pmax && con < psobre)
        {
            printf("LA CONDICION DE PESO SE CUMPLIO PERO CON SOBRE PESO \nPESO=%d\n", con);
        }
        else
        {
            printf("LA CONDICION DE PESO NO SE CUMPLIO \nPESO=%d\n", con);
        }
    }
    return 0;
}
int validar(char mensaje[], int ri, int rf)
{
    char calificacion[100];
    int num;
    do
    {
        printf("%s ", mensaje);
        fflush(stdin);
        gets(calificacion);
        num = atoi(calificacion);
        if (num < ri || num > rf)
        {
            printf("INGRESE EL NUMERO OTRA VEZ PORFAVOR\n");
        }
    } while (num < ri || num > rf);
    return num;
}
