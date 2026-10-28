#include<stdio.h>


int main(){
	
	printf("digite as suas 2 notas ");
	
	
	int n1;
	int n2;
	int media;
	
	scanf("%d", &n1);
	scanf("%d", &n2);
	
    media = (n1 + n2)/2;
   
    if(media >= 7)
	{
	
	printf("APROBADO");
	
	}
	else
	{
		if(media < 4)
		{
			
			printf("rePROVADO");
		}
		else
		{
			
		 printf("EXAME");
		}
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}



