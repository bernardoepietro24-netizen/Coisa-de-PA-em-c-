#include<stdio.h>

int main(){
	
	printf("digite suas 2 notas");
    printf("\n");
	printf("\n");
	
	int n1, n2, med;	
	
	scanf("%d", &n1);
	scanf("%d", &n2);
	
	med = (n1 + n2 ) /2;
	
	printf("sua media eh %d",med);
	printf("\n");
	printf("\n");
	
	if(med < 5)
	
	{
		printf("reprovado!!");
	}
	else
	{
		
		printf("aprovado!!");
	}
	
	
}
