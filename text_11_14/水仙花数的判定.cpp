#include<stdio.h> 
#include<math.h>
 
int main(void) 

{
	int x=0;
	printf("请输入任意一个整数：%d",x); 
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
	printf("输出x的位数：%d",i);
	
	if (i>3)                                       
	{
		printf("输出的数不符合规则"); 
	}
	if (i=3)
	{
		if (x=pow(a,3)+pow(c,3)+pow(d,3))
		{
			printf("输出的数为水仙花数"); 
		}
		else 
		{
			printf("输出的数为水仙花数"); 
		}
	}
	else (i>=0&&i<=3);
	{
		printf("输出的数不符合规则"); 
	}	
	return 0;
}
