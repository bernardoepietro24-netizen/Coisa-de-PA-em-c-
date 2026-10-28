#include<stdio.h>
int main()
{
	int  n, v, s;
	s = 0;
	
	for(v = 1; v <= 10; v++)
	{
		scanf("%d", & n);
		s = n + s;
		
	}
	printf("%d", s);
	
}

