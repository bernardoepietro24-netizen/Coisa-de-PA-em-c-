#include<stdio.h>

int main()
{
	
  int V[10], ind, Media, Maior,menor,aprovados, reprovados,pocicaoM,pocicao;
  Media = 0;
  Maior = 0;
	menor = 0;
	aprovados =0;
	reprovados = 0;
	
	for(ind = 0; ind < 10; ind++)
	{   
		printf("V[%d] =", ind);
		scanf("%d", &V[ind]);
		
			if(menor >= V[ind])
		{
			menor = V[ind];
				pocicao = ind;
		}
			if(Maior <= V[ind])
		{
			pocicaoM = ind;
			Maior = V[ind];
		}
		
			if(V[ind] >= 6)
		{
			aprovados = aprovados+1;
		}
			if(V[ind] < 6)
		{
			reprovados = reprovados+1;
		}
		
		
		
		Media =  (Media + V[ind]);
	}
		printf("\n");
	Media = Media/10;
  
  printf(" a media da turma eh %d \n", Media);
	  printf(" a maior nota eh %d e a posicao foi %d \n", Maior, pocicaoM);
	    printf(" a menor nota eh %d e a posicao foi %d \n", menor, pocicao);
	    
	  printf(" teve %d  reprovados \n", reprovados);
	  	  printf(" teve %d aprovados \n", aprovados);
}