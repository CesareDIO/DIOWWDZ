#include<stdio.h>

int main(void)

{
//初始化
   int price;
   int bill;
//输入金额及票面
   printf("请输入金额(元）");
   scanf("%d",&price);
   printf("请输入票面（元）");
   scanf("%d",&bill);
//Calculate
   if(bill>=price)
   {
    printf("找您%d（元）\n",bill-price);
   }
   else
   {
   printf("您的钱不够");
   }
   return 0;
}
