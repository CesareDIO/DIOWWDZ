#include<stdio.h>
#define PAI 3.14
#include<math.h>
int main(void)

{
	double fRadius;
	double fResult;
	printf("������Բ�İ뾶");
	scanf("%lf",&fRadius);
	
	fResult=pow(fRadius,2)*PAI;
	printf("Բ�������%lf\n",fResult);
	
	return 0;
 } 
