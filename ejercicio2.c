#include<stdio.h>
#include<stdlib.h>
void leer(int m[2][3]);
void mult4(int a[2][3]);
void mult3(int b[2][3]);
void mostrar(int c[2][3]);

int main(){
int m[2][3];

leer(m);
mult4(m);
mult3(m);
printf("\n");
mostrar(m);
return 0;
}
void leer(int m[2][3])
{
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Ingrese la matriz f%d c%d: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
        printf("M[%d][%d]=%d, ",i,j,m[i][j]);
        }
}
}
void mult4(int a[2][3])
{
int i,j;
  for(i=0;i<1;i++){
        for(j=0;j<3;j++){
        a[i][j]*=4;
        }
}
}
void mult3(int b[2][3])
{
int i,j;
  for(j=2;j<3;j++){
        for(i=0;i<2;i++){
        b[i][j]*=3;
        }
}
}
void mostrar (int c[2][3])
{
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
        printf("nM[%d][%d]=%d, ",i,j,c[i][j]);
        }
}
}