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
int main()
{
    int exa, acu = 0, intentos, prom, i;
    for (i = 1; i <= 3; i++)
    {
        printf("INGRESE LA CALIFICACION DEL EXAMEN %d\n", i);
        scanf("%d", &exa);
        acu = acu + exa;
    }
    prom = acu / 3;
    printf("CUANTOS INTENTOS LLEVAS?\n");
    scanf("%d", &intentos);
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