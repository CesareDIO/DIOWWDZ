#include<stdio.h>

int main(void)
{
	int n=0;
	int x;
	
	scanf("%d",&x);
	
	x/=10;
	++n;
    while(x>0)
	{
		x/=10;
		++n ;
	}
	printf("%d\n",n);
	
	return 0;
 } 
