// RiosRodriguezDaniel 372800
// 11-sep-23
/*
PARTE 2
1.- El profesor de una materia desea conocer la cantidad de sus alumnos que no tienen
derecho al examen de nivelación.
Diseñe un programa en C que lea las calificaciones obtenidas en
las 5 unidades por cada uno de los 40 alumnos y escriba la cantidad de ellos que no
tienen derecho al examen de nivelación ( Los promedios menores de 50 no tiene derecho
a examen de nivelación) .
*/
// R.R.D_act6_2_932
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int validar(char mensaje[], int ri, int rf);
int main()
{
    int i,j, prom, cali,acu;
    int unidades=5, alumnos=2;
    for(i=1;i<=alumnos;i++)
    {
        prom=0;
        acu=0;
        printf("INGRESE LAS 5 CALIFICACIONES DE CADA UNIDAD\n");
        for(j=0;j<unidades;j++)
        {
            cali=validar("",0,100);
            acu=acu+cali;
        }
        prom=acu/unidades;
        printf("EL PROMEDIO DEL ALUMNO ^%d^ ES=%d\n ",i,prom);
        if(prom<50)
        {
            printf("///NO TIENE DERECHO A EXAMEN DE NIVELACION///\n");
        }
    }
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