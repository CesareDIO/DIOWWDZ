#include<stdio.h>

int main(void)

{
	int i;
	int count=0;
	int number[100];
	int x;
	double sum;
	
	printf("please input number:");
	scanf("%d",&x);
	while (x!=-1)
	{
		number[count]=x;
		count++;
		sum+=x;
		scanf("%d",&x);	
	}
		if(count>0)
		{   
		    double average=sum/count;
		    printf("%f",average);
			for(i=0;i<count;i++)
			{
				if(number[i]>average)
				{
					printf("%d",number[i]);					
				}
			}
		}      		
	return 0;
}
