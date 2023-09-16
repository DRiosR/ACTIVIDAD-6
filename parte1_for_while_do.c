// RiosRodriguezDaniel 372800
// 11-sep-23
/*
PARTE 1
REALIZA LOS SIGUIENTES EJERCICIOS EN C SUBIR UN PROGRAMA QUE LLAME LOS 3 EJERCICIOS Y CON CADA UNA DE LAS SENTENCIAS.
MENÚ
    1.- FIBONACCI
    2.- FACTORIAL
    3.- CANTIDAD DE DÍGITOS
1.- PROGRAMA QUE PREGUNTE LA CANTIDAD DE VECES QUE DESEA QUE SE REALICE EL PROGRAMA DE FIBONACCI
2.- PROGRAMA QUE PIDA UN NÚMERO Y DESPLEGAR LA SALIDA DE FACTORIAL DE UN NÚMERO DADO.
    EJEMPLO
    5 * 4 =20
    20* 3 = 60
    60*2 =120
FACTORIAL DE 5 = 120
3.- PROGRAMA QUE PIDA UN NÚMERO Y DESPLEGAR LA CANTIDAD DE DÍGITOS QUE TIENE EL NÚMERO.
    EJEMPLO
    25 TIENE 2 DÍGITOS 1
    2578 TIENE 5 DÍGITOS
( NOTA REPETIR LOS PROGRAMAS CON for( ) , while( ), do{ }while() )
*/
// R.R.D_act6_1_932
#include <stdio.h>
int main()
{
    int act, i, ciclo;
    // act1
    int n, ante = 0, despu = 1, suma;
    // act2
    int fac, nfac;
    // act3
    int num, acu;
    printf("INGRESA EL NUMERO DE ACTIVIDAD\n1.- FIBONACCI\n2.- FACTORIAL\n3.- CANTIDAD DE DÍGITOS\n");
    scanf("%d", &act);

    switch (act)
    {
    case 1:
        printf("QUE CICLO QUIERES\n1=for\n2=while\n3=do\n");
        scanf("%d", &ciclo);
        switch (ciclo)
        {
        case 1:
            printf("CUANTAS VECES QUIERES REPETIR EL PROGRAMA\n");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                suma = ante + despu;
                printf("%d, ", ante);
                ante = despu;
                despu = suma;
            }
            break;
        case 2:
            printf("CUANTAS VECES QUIERES REPETIR EL PROGRAMA\n");
            scanf("%d", &n);
            i = 0;
            while (i != n)
            {
                suma = ante + despu;
                printf("%d, ", ante);
                ante = despu;
                despu = suma;
                i++;
            }
            break;

        case 3:
            printf("CUANTAS VECES QUIERES REPETIR EL PROGRAMA\n");
            scanf("%d", &n);
            i = 0;
            do
            {
                suma = ante + despu;
                printf("%d, ", ante);
                ante = despu;
                despu = suma;
                i++;
            } while (i != n);
            break;
        }
        break;

    case 2:
        printf("QUE CICLO QUIERES\n1=for\n2=while\n3=do\n");
        scanf("%d", &ciclo);
        switch (ciclo)
        {
        case 1:
            printf("INGRESE UN NUMERO\n");
            scanf("%d", &nfac);
            fac = nfac;
            for (i = 1; i < nfac; i++)
            {
                fac = fac * i;
            }
            printf("El factorial de %d es %d\n", nfac, fac);
            break;
        case 2:
            printf("INGRESE UN NUMERO\n");
            scanf("%d", &nfac);
            fac = nfac;
            i = 1;
            while (i < nfac)
            {
                fac = fac * i;
                i++;
            }
            printf("El factorial de %d es %d\n", nfac, fac);
            break;
        case 3:
            printf("INGRESE UN NUMERO\n");
            scanf("%d", &nfac);
            fac = nfac;
            i = 1;
            do
            {
                fac = fac * i;
                i++;
            } while (i < nfac);
            printf("El factorial de %d es %d\n", nfac, fac);
            break;
        }
        break;
    case 3:
        printf("QUE CICLO QUIERES\n1=for\n2=while\n3=do\n");
        scanf("%d", &ciclo);
        switch (ciclo)
        {
        case 1:
            printf("ingresa un numero\n");
            scanf("%d", &num);
            for (i = 1; i <= num; i = i * 10)
            {

                acu++;
            }
            printf("%d tiene %d digitos", num, acu);
            break;
        case 2:
            printf("ingresa un numero\n");
            scanf("%d", &num);
            i = 1;
            while (i <= num)
            {
                acu++;
                i = i * 10;
            }
            printf("%d tiene %d digitos", num, acu);

            break;

        case 3:
            printf("ingresa un numero\n");
            scanf("%d", &num);
            i = 1;
            do
            {
                acu++;
                i = i * 10;
            } while (i <= num);
            printf("%d tiene %d digitos", num, acu);
            break;
        }
        break;
    }
}
