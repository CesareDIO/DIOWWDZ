//���Ժ���    //����10-20��30-40��50-60�ĺ� 
#include<stdio.h> 

void sum(int begin,int end)
{
	int i;
	int sum=0;
	for(i=begin;i<=end;i++)
	{
		sum+=i;
	}
	printf("%d��%d�ĺ�Ϊ%d",begin,end,sum); 
}

int main (void)
{
	sum(10,20);
	
	sum(30,40);
	
	sum(50,60);
	return 0;	
}
