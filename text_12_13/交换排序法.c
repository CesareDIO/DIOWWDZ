//交换排序法 
#include<stdio.h>

int main()
{
	int i,j;
	int max;
	int a[10];
	
	printf("向数组中输入元素:\n");
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	 } 
	 
	 for(i=0;i<10;i++)
	 {
	 	for(j=i+1;j<10;j++)
	 	{
	 		if (a[j]>a[i])
	 		{
	 			max=a[i];
	 			a[i]=a[j];
	 			a[j]=max;
			 }
		 }
		 
	 }
	 
	 for(i=0;i<10;i++)
	 {
	 	printf("%d\t",a[i]);
	 	if (i==4)
	 		printf("\n");
	 }
	return 0;
}
