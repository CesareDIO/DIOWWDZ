//ˮ���̶�ϲ���Ѹ�ͷ���ˮ������ǰ�棬��ͷС��ˮ�����ں��档������һ��ƻ������ƻ�����������浽����a[]�У�a={3,8,5,3,2}�����ڰ�����ƻ�����������Ӵ�С���С� 
#include<stdio.h>
int main()
{
	int i,j;
	int iPow;
	int iTemp;
    int a[5];
	printf("������������Ԫ�أ�\n"); 
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
