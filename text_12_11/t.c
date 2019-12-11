/*某班学习委员整理获得奖学金排名， 
总成绩=智育成绩*60%+德育成绩*30%+体育成绩*10%
使用冒泡排序法将班级前12名同学的成绩进行排名。*/ 
#include<stdio.h> 

int main()
{
	float score[12];
	int i,j;
	int a,b,c,d;
	int q[12],w[12],e[12],r[12];
	int max;
	int A[12];
	
	printf("请输入智育成绩：\n");
	for(a=0;a<12;a++)
	{
		printf("q[%d]=",a);
		scanf("%d",&q[a]); 
	} 
	printf("\n");
	
	printf("请输入德育成绩：\n");
	for(b=0;b<12;b++)
	{
		printf("q[%d]=",b);
		scanf("%d",&w[b]); 
	} 
	printf("\n");
	
	printf("请输入体育成绩：\n");
	for(c=0;c<12;c++)
	{
		printf("q[%d]=",c);
		scanf("%d",&e[c]); 
	} 
	printf("\n");
	
	printf("计算总分：\n"); 
	for(a=0,b=0,c=0;a<12,b<12,c<12;a++,b++,c++)
	{    
		for(d=0;d<12;d++)
		{
			score[d]=q[a]*0.6+w[b]*0.3+e[c]*0.1;
		}
	}
	printf("输出计算后所得的总分数组：\n");
	for(d=0;d<12;d++)
	{
		printf("%.2f\t \n",score[d]);
	}
	
	printf("向数组中输入元素：\n");
	for(i=0;i<12;i++);
	{
		printf("A[%d]=",i);
		scanf("%d",&A[i]);
	}
	
	for(i=1;i<12;i++)
	{
		for(j=11;j>=i;j--)
		{
			if (A[j]<A[j-1])
			{
				max=A[j-1];
				A[j-1]=A[j];
				A[j]=max;
			}
		}
	 }
	 for(i=0;i<12;i++)
	{
	    printf("%d\t",A[i]);
	    if(i==5)
	    printf("\n");
	} 
	return 0;
 } 


