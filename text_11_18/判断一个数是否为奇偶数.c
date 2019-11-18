 #include<stdio.h>
 
 int main(void)
 
 {
    int number;
    printf("请输入数字:");
    scanf("%d",&number);
    
 	if(number%2==0)
 	{
 	 printf("该数为偶数"); 
	 }
	 else
	 {
	 printf("该数为奇数");
     }
 	return 0;
} 
