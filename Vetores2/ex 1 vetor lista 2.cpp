#include<stdio.h>

int main()
{
	
  int V[5], ind, Media;
  Media = 0;
	
	for(ind = 0; ind < 5; ind++)
	{   
		printf("V[%d] =", ind);
		scanf("%d", &V[ind]);
		
		Media =  (Media + V[ind]);
	}
	
	printf("\n");
	Media = Media/5;
  
  printf(" a media eh %d", Media);
	
	
	
}