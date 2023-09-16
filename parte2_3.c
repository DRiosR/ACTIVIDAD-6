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
int main()
{
    int ran,num,i,con=0;
    float media,acu=0;
    printf("INGRESE EL RANGO\n");
    scanf("%d",&ran);
    printf("INGRESE %d NUMEROS\n",ran);
    for(i=0;i<ran;i++)
    {
        scanf("%d",&num);
        acu=acu+num;
        con++;
    }
    media=acu/con;
    printf("LA MEDIA ARITMETICA DE LOS NUMEROS ES %f",media);
    return 0;

}