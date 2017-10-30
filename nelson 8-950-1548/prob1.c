/*	Realizar un programa que sume y muestre el resultado de la diagonal de una matriz, defina el tamaño de la matriz */
#include<stdio.h>
#define N 3
void main(){
	int mat1[N][N],dp,i,j;
	
	printf("\n matriz 1 \n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
		printf("introduzca el numero [%d,%d]:  ",i,j);
		scanf("%d",&mat1[i][j]);	
		}
	}
      
	   printf("\n matriz 1 \n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
		printf("%d \t",mat1[i][j]);	
		}
		printf("\n");
	}
	
     for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(i==j)
		dp += mat1[i][j];
		}
	 }
      printf("la suma de la diagonal principal es: %d \n ",dp);
}

     
