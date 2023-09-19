// RiosRodriguezDaniel 372800
// 11-sep-23
/*
PARTE 2
3. Realizar función en C para un programa que sirva para
leer n cantidad de números dentro de un rango dado por el
usuario, desplegar la suma de los números y la media aritmética
de los números válidos dentro del rango.
*/
// R.R.D_act6_2_932
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int validar(char mensaje[], int ri, int rf);
void media(int a);
int main()
{
    int ran;
    ran = validar("INGRESE EL RANGO:\n", 0, 1111);
    media(ran);
    return 0;
}
void media(int a)
{

    int i, b;
    float media, acu = 0, con = 0;
    printf("INGRESE %d NUMEROS\n", a);
    for (i = 0; i < a; i++)
    {
        b = validar("", 0, 1000000);
        acu = acu + b;
        con++;
    }
    media = acu / con;
    printf("LA MEDIA ARITMETICA DE LOS NUMEROS ES %f", media);
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