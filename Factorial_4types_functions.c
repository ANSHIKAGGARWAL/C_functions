//WITH ARGUMENT AND WITHOUT RETURN TYPE

#include<stdio.h>
void factorial(int number){
int output=1;
while(number!=0){
output*=number;
number--;}
printf("\t Factorial is %d",output);
}
int main()
{
int number;
printf("\n\t Enter the number to find the factorial\n");
scanf("%d",&number);
factorial(number);
}

