#include<stdio.h>
int search(int key,int a[],int len)
{
	int ret=-1;
	for(int i=0;i<len;i++)
	{
		if(key==a[i])
		{
			ret=i;
			break;
		}
	}
	return ret;
}
int main(void)
{   
    int a[]={1,2,3,4,5,6,76,34,39,897,56,122};
    printf("ÇëÊäÈë£º%d",a);
    search(a,sizeof a[]/sizeof a[0],a+1);
    
	return 0;
} 
