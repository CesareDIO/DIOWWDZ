#include<stdio.h>

int main ()
{
    int amount;
    int price;
    
    printf("��������(Ԫ):");
	scanf("%d", &price) ;
	
	printf("������Ʊ��(Ԫ)");
	scanf("%d", &amount) ;
	
	int change=amount - price;
	
	printf("����%d��Ԫ��.\n",change) ;
	
	return 0;
}
