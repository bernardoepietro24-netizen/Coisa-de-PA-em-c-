#include<stdio.h>	

int main()
{
	
  int V[10], ind, Pares;
  Pares = 0;
	
	for(ind = 0; ind <10;  ind++)
	{   
		printf("V[%d] =", ind);
		scanf("%d", &V[ind]);
		
		if(V[ind] % 2 == 0)
		{
			Pares = Pares +1;
		}
	
	}
 printf("sao %d numeros pares", Pares);
	

	

}
