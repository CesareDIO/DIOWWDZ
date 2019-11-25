#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int a=rand()%101;
	int b=rand()%101;
	int c=rand()%101;
	int d=rand()%101;
	int e=rand()%101;
	
	printf("%d %d %d %d %d\n",a,b,c,d,e);    //展示1-100中任意数。 
    
    int sum=a+b+c+d+e;
    
	float ave=sum/5;
	printf("%f",ave);	
	return 0;
} 
