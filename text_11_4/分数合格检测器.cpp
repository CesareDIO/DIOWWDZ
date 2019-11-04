#include<stdio.h>
int main(void)

{
	int score;
	int point; 
	
	printf("please input your score:");
	scanf("%d",&score);
	
	printf("plesae input the poinat:");
	scanf("%d",&point);
	
	if (score>point) 
    {
		printf("Congratulations,you are successful"); 
	}
	else
	{
		printf("i am so sorry,you need try again");
	}
	return 0;
 } 
