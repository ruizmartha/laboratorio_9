#include<stdio.h>
#define M 3
void main ()
{
int i,j, a[M][M],id;
printf ("Introduzca los valores \n");
for (i=0; i<M; i++)
{
	for (j=0; j<M; j++)
	{
		printf ("Introduzca los valores de la matriz [%d,%d]:",i,j);
		scanf ("%d", &a[i][j]);
		
	}
}
id=1;
      for (i=0; i<M; i++)  
	  {
	for (j=0; j<M; j++)
	{
	    	if ((i==j && a[i][j]!=1))
		    {
		    	id=0;
		    }
		    	else if  ((i!=j && a[i][j]!=0))
		    	{
		    	id=0;
		        }
        }
    }
		    	
			 if (id==1)
		    	{
		    		printf ("Es identidad\n");
				
				for (i=0; i<M; i++)
                {
	                for (j=0; j<M; j++)
	                {
                        printf ("%d\t", a[i][j]);
		            }
		            printf ("\n");
				}
		    
	           }  
	           else 
	           {
	           	printf (" No es identidad");
			   }
		}

