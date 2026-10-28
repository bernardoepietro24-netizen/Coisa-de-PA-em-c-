#include<stdio.h>	

int main()
{
	
  int V[10], ind, Posi,i,nulo,nega;
  Posi =0;
  nega =0;
  nulo=0;

	for(ind = 0; ind <10;  ind++)
	{   
		printf("V[%d] =", ind);
		scanf("%d", &V[ind]);
		
	if(V[ind] > 0) 
	{
		Posi = Posi+1;
	}
		if(V[ind] < 0) 
	{
		nega = nega+1;
	}
	if(V[ind] == 0)
	{
		nulo = nulo+1;
	}
	
	
	
	}
       printf("a lista tem %d positivos %d negativos e %d nulos", Posi, nega, nulo);
	
	

}
