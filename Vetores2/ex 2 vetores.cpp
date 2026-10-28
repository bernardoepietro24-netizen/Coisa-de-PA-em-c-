#include<stdio.h>

int main()
{
	
  int V[8], ind, Maior;
  Maior = 0;
	
	for(ind = 0; ind <8;  ind++)
	{   
		printf("V[%d] =", ind);
		scanf("%d", &V[ind]);
		
		if(Maior <= V[ind])
		{
			Maior = V[ind];
		}
	
	
	}
	
   printf("o maior eh %d", Maior);
	

}
