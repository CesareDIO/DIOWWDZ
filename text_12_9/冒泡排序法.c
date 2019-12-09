//冒泡排序法 
#include<stdio.h>
int main()
{
	int i,j;
	int Max;
	int a[10];
	printf("请向数组中的元素赋值：\n");	
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);		
	}	
	for(i=1;i<10;i++)
	{
		for(j=9;j>=i;j--)
		{
			if(a[j]<a[j-1])
			{
				Max=a[j-1];
				a[j-1]=a[j];
				a[j]=Max;
			 } 
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
		if(i==4)
		{
			printf("\n"); 
		}
	}
	return 0;
 } 
