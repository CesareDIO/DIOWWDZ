#include<stdio.h>

int main(void)

{
//��ʼ��
   int price;
   int bill;
//�����Ʊ��
   printf("��������(Ԫ��");
   scanf("%d",&price);
   printf("������Ʊ�棨Ԫ��");
   scanf("%d",&bill);
//Calculate
   if(bill>=price)
   {
    printf("����%d��Ԫ��\n",bill-price);
   }
   else
   {
   printf("����Ǯ����");
   }
   return 0;
}
