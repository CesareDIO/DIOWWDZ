//��ά�������жԻ�
#include<stdio.h>
int main(void)
{
	int i,j;
	int a[2][3]; 
	int b[3][2];  
	
	printf("�������ά���飺\n") ; 
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]=",i,j);         //printf("a��ά�����е�����");
			scanf("%d",&a[i][j]);
		}
	}
	printf("�����ά���飺\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");        //֮ǰδ�� 
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			b[j][i]=a[i][j];
		}
    }
	printf("���ת�ú�Ķ�ά���飺\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");     //֮ǰδ�� 
	}
	return 0;
} 
