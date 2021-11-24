#include <stdio.h>
#include <stdlib.h>


int main()
{
    int matriz[101][4]={0}, nuev=0, I=0, J=0, cont=0, Leg=0, Trim=0, prom=0;

    for (I=1;I<=10;I++)
    {
        printf("Ingresar las 3 notas del alumno %d:\n", I);

        for (J=1;J<=3;J++)
        {
            printf("Trimestre (%d): ", J);
            scanf("%d", &matriz[I][J]);
        }
        printf("\n");
    }

    printf("¿Desea cambiar alguna nota? (Si=1|No=2): ");
    scanf("%d", &cont);

    while (cont==1)
    {
        system("cls");
        
        printf("Ingresar el numero de legajo y el bimestre que desea cambiar:\n");
        printf("Legajo (N):\n");
        scanf("%d", &Leg);
        printf("Trimestre (N):\n");
        scanf("%d", &Trim);

        nuev=matriz[Leg][Trim];

        printf("Ingrese la nueva nota: ");
        scanf("%d", &matriz[Leg][Trim]);
        printf("\nEsta seguro de cambiar la nota %d por la nota %d? (Si=1|No=2):\n", nuev, matriz[Leg][Trim]);
        scanf("%d", &cont);

        if (cont==1)
        {
            system("cls");
            printf("Continuar? (1=Si|2=No): ");
            scanf("%d", &cont);
            if (cont==1)
            {
                system("cls");
                continue;
            }
            else
            {
            }
        }
        else
        {
            matriz[Leg][Trim]=nuev;

            printf("Continuar? (1=Si|2=No): ");
            scanf("%d", &cont);

            if (cont==1)
            {
                system("cls");
                continue;
            }
            else
            {
            }
        }
    }

    system("cls");

    for (I=1;I<=10;I++)
    {
        prom=(matriz[I][1]+matriz[I][2]+matriz[I][3])/3;

        printf("N Legajo\tTrimestre 1\tTrimestre 2\tTrimestre 3\tPromedio\n");
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n\n", I, matriz[I][1], matriz[I][2], matriz[I][3], prom);
    }
    return 0;
}

