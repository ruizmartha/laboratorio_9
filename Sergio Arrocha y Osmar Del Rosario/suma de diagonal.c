#include<stdio.h>
#define NF 3
void main(){
  int i,p,sum,matriz[NF][NF];
	
	for(i=0;i<NF;i++)
	{	
	for(p=0;p<NF;p++)
		{
		printf("ingrese los valores [%d,%d]:",i,p);		
		 scanf("%d",&matriz[i][p]);	
}
		printf("\n");
}
for(i=0;i<NF;i++)
{
	for(p=0;p<NF;p++)
	{
		printf("%d\t",matriz[i][p]);
		}	
		printf("\n");
}
	printf("\n\n la diagonal es: ");
printf("\n\n");
	
		for(i=0;i<NF;i++)
	{
		for(p=0;p<NF;p++)
		{
			if(i==p)
			{
		sum+=matriz[i][p];
		 
printf("%d\t",matriz[i][p] );

			}
	
}
}
	printf("el total de los valores de la diagonal de las matrices :%d \n",sum);
}


		
		
	
		
