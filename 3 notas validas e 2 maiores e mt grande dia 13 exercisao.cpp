#include<stdio.h>
int main()
{
	float n1, n2, n3, m, media, menor, nexame;
	
	printf("digite a primeira nota \n");
	
	
	scanf("%f", & n1);
       	
	if(n1 >= 0 && n1 <= 10)
	{
			printf("digite a segunda nota \n");
			scanf("%f", & n2);
			
			if(n2 >= 0 && n2 <= 10)
		{
			printf("digite a terceira nota \n");
			scanf("%f", & n3);
			if(n3 >= 0 && n3 <= 10)
			{
				menor = n1;
				if(n2 < menor)
				{
					n2 = menor;
				}
				if(n3 < menor)
				{
					n3 = menor;
				}
				m = (n1 + n2 + n3 - menor)/2;
			
			   if(m < 4)
			   {
			   		printf("reprovado, sua media eh %f", m);
			   }
			   if(m >= 6)
			   {
			   		printf("aprovado, sua media eh %f", m);
			   }
			   else
			   {
			   	   printf("exame digite a nota do exame \n");
					scanf("%f", & nexame);
			   }
			
					
					if (nexame >= 0 && nexame <= 10)
					{
						
						media = (nexame + m)/2;
						if(media >= 6)
						{
							printf("parabens aprovado ");
						}
						else
						{
								printf("parabens reprovado ");
						}
						
					}
					else
					{
							printf("nota de exame invalida");
					}
					
			}
			else
			{
					printf("nota 3 invalida");
			}
			
		}
		else
		{
			printf("nota 2 invalida");
		}
	 } 
	else
	{
		printf("nota 1 invalida");
	}
	
	
	
}
