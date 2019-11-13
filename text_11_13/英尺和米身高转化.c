#include<stdio.h>

int main()

{
    int A;
    int B;
	 
	printf("请分别输入身高的英尺和尺寸%d %d",A ,B);	
	
	double foot;
	double inch;
	
	scanf("%lf %Lf",&foot,&inch);
	
	printf("身高是多少%f米，\n",
	((foot+inch/12)*0.3048));
	
	return 0;
	
} 
