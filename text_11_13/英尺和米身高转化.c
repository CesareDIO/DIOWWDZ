#include<stdio.h>

int main()

{
    int A;
    int B;
	 
	printf("��ֱ�������ߵ�Ӣ�ߺͳߴ�%d %d",A ,B);	
	
	double foot;
	double inch;
	
	scanf("%lf %Lf",&foot,&inch);
	
	printf("����Ƕ���%f�ף�\n",
	((foot+inch/12)*0.3048));
	
	return 0;
	
} 
