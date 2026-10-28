#include<stdio.h>

int main()
{
	
  int V[5], ind;
	
	for(ind = 0; ind < 5; ind++)
	{   
		printf("V[%d] =", ind);
		scanf("%d", &V[ind]);
	}
	
	printf("\n");
	for(ind = 0; ind < 5; ind++)
	{
		printf("V[%d] = %d \n", ind, V[ind]);
	}
	
	
	
	
}