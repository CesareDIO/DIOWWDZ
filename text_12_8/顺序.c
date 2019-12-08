//选择排序法
#include<stdio.h>
 int main()
{
 	int i,j;
 	int a[10];
 	int iTemp;
 	int iPos;
 	printf("为数组元素赋值：\n");
 	
 	for(i=0;i<10;i++)
 	{
 		printf("a[%d]=",i);
 		scanf("%d",&a[i]);
	}
	
	//从高到低排序
	for(i=0;i<9;i++)
	{
		iTemp=a[i];
		iPos=i;
		for(j=j+1;j<10;j++)
		{
			if(a[j]>iTemp)
			{
				iTemp=a[j];
				iPos=j;
			}			 
		}
		a[iPos]=a[i];
		a[i]=iTemp;
		
		for(i=0;i<10;i++)
		{
			printf("%d\t",a[i]);
			if(i==4)
			{
				/printf("\n");
			}
		} 
	} 
	return 0;
}
