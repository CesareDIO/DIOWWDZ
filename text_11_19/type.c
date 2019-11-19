#include<stdio.h> 


int main(void)
{
	int type;
	scanf("%d",&type);
	switch (type)
	{
	case 1:
		printf("hello!");
		break;
	case 2:
		printf("good morning!");
		break;
	case 3:
		printf("good evening!");
		break;
	case 4:
		printf("good bye!");
		break;
	default:
	   printf("good bye!");
	   break;										
	}					
	return 0;
}
