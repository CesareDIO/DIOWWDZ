#include<stdio.h> 
#include<math.h> 
int main()
{
	double height;
	double weight;
	scanf("%2lf\n",&weight);
    scanf("%2lf\n",&height);     
    double BMI=weight/(height*height);
    printf("%2lf",BMI);
                     	
	return 0;
}
