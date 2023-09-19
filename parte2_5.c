// RiosRodriguezDaniel 372800
// 11-sep-23
/*
PARTE 2
5.- Un alumno solo puede cursar la misma asignatura
en un máximo de 3 veses, si el alumno reprueba durante
sus intentos deberá repetir la materia, y si en su tercera
ocasión no aprueba se le dará de baja académica.
Elabore una función donde basada en sus 3 exámenes parciales
calcular el promedio y basado en su promedio final, se deberá
enviar mensaje al alumno de repetir materia, aprobado o baja temporal.
*/
// R.R.D_act6_2_932

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int validar(char mensaje[], int ri, int rf);
int main()
{
    int exa, acu = 0, intentos, prom, i;
    for (i = 1; i <= 3; i++)
    {

        exa = validar("INGRESE LA CALIFICACION DEL EXAMEN\n", 0, 100);
        acu = acu + exa;
    }
    prom = acu / 3;
    intentos = validar("CUANTOS INTENTOS LLEVAS?\n", 1, 3);
    if (prom > 60 && intentos < 3)
    {
        printf("APROBASTE\n");
    }
    if (prom < 60 && intentos < 3)
    {
        printf("REPETIR MATERIA\n");
    }
    if (intentos >= 3 && prom > 60)
    {
        printf("BAJA TEMPORAL\n");
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
