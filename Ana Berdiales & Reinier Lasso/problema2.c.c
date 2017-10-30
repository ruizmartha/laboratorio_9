#include<stdio.h>
#define A 3
void main ()
{
	int v[A][A],i,j,m=1;
	for(i=0;i<A;i++)
	{
	for(j=0;j<A;j++)
	{
	printf("Introduzca los valores de la matriz: [%d,%d]\n ",i,j);
	scanf("%d",&v[i][j]);
	}
    }
    if (v[i][j]==1||v[i][j]==0)
    printf(" es identidad");
    else 
    printf(" no es identidad");
}
