#include<stdio.h> 

int main()
{
	int line,list;
	char picture[][6]={
	{'*','*','*','*','*','*'},
	{' ','*','*','*','*','*'},
    {' ',' ','*','*','*','*'},
    {' ',' ',' ','*','*','*'},
    {' ',' ',' ',' ','*','*'},
    {' ',' ',' ',' ',' ','*'},
	};
	
	for(line=0;line<6;line++)
	{
		for(list=0;list<6;list++)
		{
		    printf("%c",picture[line][list]);
		}
		printf("\n");
	}					
	return 0;
}
