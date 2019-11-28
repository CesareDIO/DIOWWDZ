#include<stdio.h>

int main()
{
	int start;
	scanf("%d",&start);
	switch(start){
	case 1:
	    printf("******\n");
	case 2:
	    printf(" *****\n");
	case 3:
	    printf("  ****\n");
	case 4:
	    printf("   ***\n");
	case 5:
	    printf("    **\n");
	case 6:
		printf("     *\n");
	    break;
	}
	return 0;
} 
