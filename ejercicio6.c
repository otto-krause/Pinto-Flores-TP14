#include <stdio.h>
#include <stdlib.h>


int main()
{

    int matriz[21][7]={0}, Hab_tot=0, I=0, J=0;

    printf("Ingresar la cantidad de habitantes que hay por departamento: \n");

    for (I=1;I<=20;I++)
    {
        printf("Piso nro%d\n", I);
        for (J=1;J<=6;J++)
        {
            printf("Departamento nro%d: ", J);
            scanf("%d", &matriz[I][J]);

            matriz[I][0]=matriz[I][0]+matriz[I][J];
        }
        Hab_tot=Hab_tot+matriz[I][0];
        matriz[I][0]=matriz[I][0]/6;
        system("cls");

    }

    printf("La cantidad de habitantes en total es: %d\n", Hab_tot);

    printf("El promedio de habitantes por piso es:\n");

    for (I=1;I<=20;I++)
    {
        printf("Piso nro%d\t%d\n", I, matriz[I][0]);
    }
}