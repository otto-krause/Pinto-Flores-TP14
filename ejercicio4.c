#include <stdio.h>
#include <stdlib.h>
void main() {

    float colectivos[3][12], importe, recaudacionLinea[3], recaudacionCoche[12], recaudacionGeneral = 0;
    int i, x, linea, continuar, coche;

    for (i = 0; i < 3; i++) {
        recaudacionLinea[i] = 0;
        for (x = 0; x < 12; x++){
            colectivos[i][x] = 0;
            recaudacionCoche[x] = 0;
        }
    }

    do {
        printf("Continuar? (Si = 1 | No = 0): ");
        scanf("%d", &continuar);
        if (continuar != 0) {
            printf("Ingresar linea ( 1 - 3): ");
            scanf("%d", &linea);

            printf("Ingresar coche ( 1 - 12): ");
            scanf("%d", &coche);
            
            printf("Ingresar recaudacion: ");
            scanf("%f", &importe);
            colectivos[linea-1][coche-1] += importe;
        }
    } while (continuar != 0);
    
    for (i = 0; i < 3; i++) {
        for (x = 0; x < 12; x++){
            recaudacionLinea[i] += colectivos[i][x];
            recaudacionCoche[x] += colectivos[i][x];
            recaudacionGeneral += colectivos[i][x];
        }
    }
    
    printf("Recuadacion total: %.2f\n", recaudacionGeneral);
    printf("Recuadacion Linea 1: %.2f\n", recaudacionLinea[0]);
    printf("Recuadacion Linea 2: %.2f\n", recaudacionLinea[1]);
    printf("Recuadacion Linea 3: %.2f\n\n", recaudacionLinea[2]);
    for (x = 0; x < 12; x++){
        printf("Recuadacion Coche %d: %.2f\n", x+1, recaudacionCoche[x]);
    }

    system("pause");
}