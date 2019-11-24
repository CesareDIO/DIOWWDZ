#include<stdio.h> 

int main(void)
{
	char cChar1,cChar2,cChar3;
	
	cChar1='=';
	cChar2='^';
	cChar3='_';
	
	putchar(cChar1);
	putchar(cChar2);
	putchar(cChar3);                //=^_^=
	putchar(cChar2);
	putchar(cChar1);
	
	return 0;
}
