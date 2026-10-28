#include<stdio.h>

int main()
{
	
  int V[5], ind, S;
	S = 0;
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
	
		for(ind = 0; ind < 5; ind++)
	{
		S = S +V[ind];
	}
	printf("soma =%d", S);
	
}