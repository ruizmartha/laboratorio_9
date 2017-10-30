#include<stdio.h>
#define A 3
void main ()
{
	int i,j,s, a[A][A];
	for(i=0;i<A;i++)
	{
		for (j=0;j<A;j++)
		{
	printf("Introduzca los valores de la matriz[%d,%d]\n",i,j);
	scanf("%d",&a[i][j]);
        }  
	printf("\n");
	}
	for(i=0;i<A;i++)
	{
		for(j=0;j<A;j++)
		{
			if(i==j)
			{
			 s+=a[i][j];
		    }
		}
	}
     printf("El resultado de la suma de la diagonal principal es: %d\t",s);
}



