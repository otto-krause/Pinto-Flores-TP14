#include<stdio.h>
#include<stdlib.h>
#include <stdio.h>

int main(){
  int a[2][3];
  for(int i = 0; i < 2; i++){
    for (int f = 0; f < 3; f++){
      printf("ingrese el valor de la fila %d y la columna %d: ", i+1, f+1);
      scanf("%d", &a[i][f]);
    }
  }
  for(int i = 0; i < 2; i++){
    for (int f = 0; f < 3; f++){
      printf("%d\t", a[i][f]);
    }
    putchar('\n');
  }
}