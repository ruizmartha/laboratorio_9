#include<stdio.h>
#define T 3

void main(){
	int a,b,c,g,suma=0;
	int m[100][100];

	for(a=0;a<T;a++){
		for(b=0;b<T;b++){
			printf("Introduzca el valor de la matriz [%d,%d]= ",a,b);
			scanf("%d",&m[a][b]);
		}
	}
	for(a=0;a<T;a++){
		for(b=0;b<T;b++){
				suma=suma+m[a][b];
		}
	}
		printf("El resultado es= %d",suma);
}
