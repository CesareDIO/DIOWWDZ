#include<stdio.h> 
#include<math.h>
 
int main(void) 

{
	int x=0;
	printf("����������һ��������%d",x); 
	int t=x;
	int a;
	int b;
	int c;
	int d;
	
	a=x/100;
	b=x%100;
	c=b/10;
	d=c%10;
	
	int i=1;
	while (t>=1)
	{
		t=t/10;
		i++;
	 } 
	printf("���x��λ����%d",i);
	
	if (i>3)                                       
	{
		printf("������������Ϲ���"); 
	}
	if (i=3)
	{
		if (x=pow(a,3)+pow(c,3)+pow(d,3))
		{
			printf("�������Ϊˮ�ɻ���"); 
		}
		else 
		{
			printf("�������Ϊˮ�ɻ���"); 
		}
	}
	else (i>=0&&i<=3);
	{
		printf("������������Ϲ���"); 
	}	
	return 0;
}
