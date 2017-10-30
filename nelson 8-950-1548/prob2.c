/*2.	Programa que  verifica la matriz de identidad, defina el tamaño de la matriz, al final imprime si la matriz introducida es una matriz identidad o no.
Como el producto de matrices sólo tiene sentido si sus dimensiones son compatibles, existen infinitas matrices identidad dependiendo de las dimensiones. In,
 la matriz identidad de tamaño n, se define como la matriz diagonal que tiene valor 1 en cada una de las entradas de la diagonal principal, y 0 en el resto.*/
#include<stdio.h>
#define N 3
void main(){
	int mat1[N][N],i,j;
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
	 if(i==j && mat1[i][j]==1){
	 	printf("es identidad");
	 }	

	   else if (i==j && mat1[i][j]!=0){
	 	printf("no es identidad");
	 }

	    else if (i==j && mat1[i][j]!=1){
	 	printf("no es identidad");
  }


}
}
}

