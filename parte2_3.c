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
void media(int a);
int main()
{
    int ran;
    printf("INGRESE EL RANGO\n");
    scanf("%d", &ran);
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
        scanf("%d", &b);
        acu = acu + b;
        con++;
    }
    media = acu / con;
    printf("LA MEDIA ARITMETICA DE LOS NUMEROS ES %f", media);
}