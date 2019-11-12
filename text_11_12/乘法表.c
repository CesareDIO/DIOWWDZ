#include<stdio.h> 

int main(void)
{
	int i;
	int j;
	
	for(i=1;i<=9;i++)                                    //1x1=1
	{                                                    //1x2=2  2x2=4	                                                     
	                                                     //1x3=3  2x3=6 3x3=9
		for(j=1;j<=i;j++)
		  {
		  	printf("%d*%d=%2d ",i,j,i*j); 
		  }
		   printf("\n");
	} 
	
	
	return 0;
}
