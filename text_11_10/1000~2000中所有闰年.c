#include<stdio.h>

int main(void)
{
	int year;
	scanf("%d",&year); 		   
    if((year%4==0)&&(year%100==0)||(year%400))
    {
	printf("是润年"); 
    }
    else
    {
   	printf("不是润年"); 
	}	
	return 0; 
 } 
