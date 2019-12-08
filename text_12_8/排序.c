//水果商都喜欢把个头大的水果摆在前面，个头小的水果放在后面。现在有一箱苹果，将苹果的重量保存到数组a[]中，a={3,8,5,3,2}。现在把这箱苹果按照重量从大到小排列。 
#include<stdio.h>
int main()
{
	int i,j;
	int iPow;
	int iTemp;
    int a[5];
	printf("向数组中输入元素：\n"); 
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	} 
	for(i=0;i<4;i++)
	{
		iTemp=a[i];
		iPow=i;
		for(j=i+1;j<5;j++)
		{
			if(a[j]>iTemp)
			{
				iTemp=a[j];
				iPow=j;
			}
		}
		a[iPow]=a[i];
		a[i]=iTemp;
	} 
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
} 
