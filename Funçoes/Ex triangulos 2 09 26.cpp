#include<stdio.h>

int ehTriangulo(int n1, int n2, int n3)
{
	if((n1 + n2 > n3) && (n2 + n3 > n1 )&& (n1 + n3 > n2))
	{
		
		return 1;
	}
	else
	{
		return 0;
	}
	
}


int main()
{
	int n1, n2, n3;
		scanf("%d%d%d", &n1, &n2, &n3);
		
		
        if (ehTriangulo(n1, n2, n3) == 1)
          {
          	printf("Forma triangulo ");
		  }
        else{  	printf(" NAO Forma triangulo "); }
		
		  
			

	
	}