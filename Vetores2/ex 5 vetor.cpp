#include<stdio.h>	

int main()
{
	
  int V[10], ind, procura,i;

	for(ind = 0; ind <10;  ind++)
	{   
		printf("V[%d] =", ind);
		scanf("%d", &V[ind]);
		
	
	}
       
		scanf("%d", &procura);
		for(i =0; i <= 10; i++)	
		{
				if(procura == V[i])
				{
					printf("o numero foi encontrado e eh %d e fica na posicao %d", procura, i);
					break;
				}
			
				
		}
		
				if(procura != V[i])
				{
					printf("seu numero nao pertence a lista");
				}

	

}
