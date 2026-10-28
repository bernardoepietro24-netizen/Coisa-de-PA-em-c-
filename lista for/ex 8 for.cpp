#include<stdio.h>
int main()
{
	int s, v, n;
	s = 0;
	
	for(v =1; v <=8; v++)
	{
		scanf("%d", & n);
		s = n+s;
		
		
		}	
	
	s = s/8;
	printf("%d", s);
	
	
}