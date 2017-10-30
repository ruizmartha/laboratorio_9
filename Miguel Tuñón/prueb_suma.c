#include<stdio.h>
#define NF 3
void main ()
{
	int i,j,k[NF][NF];
	int s[NF][NF],g;
	
	for(i=0;i<NF;i++)
	{
		for(j=0;j<NF;j++)
		{
			printf("Introduzca los valores de la matriz [%d,%d]",i,j);
         	scanf("%d",&k[i][j]);
		}
   }
    
	for(i=0;i<NF;i++)
	{
	for(j=0;j<NF;j++)
		{
			printf("%d \t",k[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=0;i<NF;i++){
		for(j=0;j<NF;j++){
			s[i][j]=0;
		}
	}
	
	for(i=0;i<NF;i++){
		for(j=0;j<NF;j++){
			for(g=0;g<NF;g++){
				s[i][j]=k[g][j]+k[i][g];
			}
		}
	}
	
	for(i=0;i<NF;i++){
		for(j=0;j<NF;j++){
			printf("La suma diagonal es:%d\n",s[i][j]);
		}
	}
	
	
  
}
