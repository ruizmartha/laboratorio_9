#include<stdio.h>
#define MAT 3
void main(){
int f, c, matriz[MAT][MAT];
for (f=0;f<MAT;f++){
for (c=0;c<MAT;c++){
	printf("Introduzca el valor en la posicion ");
	printf("[%d][%d]:", f,c);
	scanf("%d",& matriz[f][c]);
	printf("\n");
}
}	
for (f=0;f<MAT;f++){
for (c=0;c<MAT;c++){
	printf("%d \t", matriz[f][c]);	
}
printf("\n");
}
printf("\n");

while(matriz[f][c]==1){


if((f==c)!=1){
	printf("La matriz no es identida");
}else
if(matriz[f][c]==0){
	
printf("La matriz no es identidad");
}
}
	printf("La matriz es identidad");
}
