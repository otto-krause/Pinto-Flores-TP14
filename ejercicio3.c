#include<stdio.h>
#include<stdlib.h>
void mult(int a[2][3]);

int main()
{
int i,j,m[2][3],men,sum=0;

for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Ingrese la matriz f%d c%d: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
mult(m);

men=m[0][0];
for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            sum=sum+m[i][j];
            if(m[i][j]<men){
                men=m[i][j];
            }
        }
}
printf("La suma de todo el vector es: %d\n",sum);
printf("El menor valor de la matriz es:%d\n",men);
    for(i=0;i<2;i++){
            printf("\n");
        for(j=0;j<3;j++){

        printf("%d ",m[i][j]);
        }
    }
return 0;
}

void mult(int a[2][3])
{
int i,j;
  for(i=0;i<1;i++){
        for(j=0;j<3;j++){
        a[i][j]*=4;
        }
  }
  for(j=2;j<3;j++){
        for(i=0;i<2;i++){
        a[i][j]*=3;
        }
}
}