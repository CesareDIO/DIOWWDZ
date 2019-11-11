#include<stdio.h>
#define PAI 3.14
#include<math.h>
int main(void)

{
	double fRadius;
	double fResult;
	printf("请输入圆的半径");
	scanf("%lf",&fRadius);
	
	fResult=pow(fRadius,2)*PAI;
	printf("圆的面积：%lf\n",fResult);
	
	return 0;
 } 
