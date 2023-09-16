// RiosRodriguezDaniel 372800
// 11-sep-23
/*
PARTE 2
2.- Realiza una función en C que imprima las tablas de multiplicar del 1 al 10
EJEMPLO:
TABLA DEL 1
1 * 1 = 1
1 * 2 = 2
1*10 = 10
PRESIONA UNA TECLA PARA CONTINUAR.
NOTA: Utilizar limpiar pantalla, esperar tecla
*/
// R.R.D_act6_2_932
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i, j, resultado;
    for (i = 1; i <= 10; i++)
    {
        system("cls");
        for (j = 1; j <=10; j++)
        {
            resultado = j * i;
            printf("%d * %d = %d\n", i, j, resultado);
        }
        printf("\nPRESIONA UNA TECLA PARA CONTINUAR.\n");
        getch();
    }

    return 0;
}
