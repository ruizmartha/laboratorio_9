#include <stdio.h>
#define DIM 3
void main () {
	int a[100][100], suma=0, i, j;
	printf("introduzca los valores de la matriz 3x3\n");
	for(i=0; i<DIM; i++)
	{
		for(j=0; j<DIM; j++)
		{
			printf("\nEl valor en la Posicion [%d][%d]: ", i, j);
		    scanf("%d", &a[i][j]);
		}
	}
	for(i=0; i<DIM; i++)
	{
		for(j=0; j<DIM; j++)
		{
			if(i==j)
			{
				suma=suma+a[i][j];
			}
        }
	}
	printf("\nLa suma es: \t%d", suma);
}
