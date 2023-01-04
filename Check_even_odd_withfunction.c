#include<stdio.h>
int result;
int even_odd(int number)
{
	if(number%2==0)
	printf("\t Even Number\n");
	else
	printf("\t Odd Number\n");
}

int main()
{
	int number;
	scanf("%d",&number);
	result=even_odd(number);
	return result;
}
