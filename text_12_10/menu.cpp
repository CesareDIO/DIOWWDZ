#include<stdio.h>
#define A "you are selling to consumer"
#define B "you are buying something into store"
#define C "checking the store"
#define D "the Progarm is out"
#define E "You put a wrong selection" 
int main()
{
	int select=1;
	
	while(select!=0)
	{
		printf("-------Menu--------------\n");
		printf("-------Sell-------------1\n");
		printf("-------Buy--------------2\n");
		printf("-------ShowProduct------3\n");
		printf("-------Out--------------0\n");
	
	
	scanf("%d",&select);
	switch(select)
	{
		case 1:
			printf("A");
			break;
		case 2:
			printf("B");
			break;
		case 3:
			printf("C");
			break;
		case 0:
			printf("D");
			break;
		default:
			printf("E");
			break;
	}
	} 
 	return 0;
}
