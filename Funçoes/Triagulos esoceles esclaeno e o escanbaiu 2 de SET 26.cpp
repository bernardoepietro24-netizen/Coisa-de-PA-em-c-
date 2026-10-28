#include<stdio.h>


int ehTriangulo(int n1, int n2, int n3)
{
		if((n1 ==n2) && (n2 == n3) )
		{
				return 0;
		}
	else if((n1 + n2 > n3) && (n2 + n3 > n1 )&& (n1 + n3 > n2) && (n1 == n2) ||(n2 == n3) || (n1 == n3))
	{
	
		
		return 1;		
		
	}
  
	
}
int A(int n1, int n2, int n3)
{
	if((n1 == n2) && (n1 == n3))
	
	{
		
		return 1;
	}
  else
  {
  		return 0;
  }

}
int B(int n1, int n2, int n3)
{
	if((n1 + n2 > n3) && (n2 + n3 > n1 )&& (n1 + n3 > n2) && (n1 != n2) && (n2 != n3))
	
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
		
		if ((n1 + n2 > n3) && (n2 + n3 > n1 )&& (n1 + n3 > n2))
		{
				printf("Forma triangulo ");
			if (ehTriangulo(n1, n2, n3) == 1)
          {
          	printf(" triangulo isosceles ");
		  }
		  if(A(n1,n2,n3) == 1)
		  {
		  		printf(" triangulo Equilatero ");
		  }
		  
		  
		  if(B(n1,n2,n3)==1)
		    {
		  		printf(" triangulo Escaleno ");
		  }
		  
		}
        
        else{  	printf(" NAO Forma triangulo "); }
		
		  
			

	
	}