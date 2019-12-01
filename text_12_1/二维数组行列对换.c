//二维数组行列对换
#include<stdio.h>
int main(void)
{
	int i,j;
	int a[2][3]; 
	int b[3][2];  
	
	printf("请输入二维数组：\n") ; 
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]=",i,j);         //printf("a二维数组中的数：");
			scanf("%d",&a[i][j]);
		}
	}
	printf("输出二维数组：\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");        //之前未加 
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			b[j][i]=a[i][j];
		}
    }
	printf("输出转置后的二维数组：\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");     //之前未加 
	}
	return 0;
} 
