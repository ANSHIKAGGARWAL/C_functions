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

//WITH ARGUMENT AND WITH RETURN TYPE
#include<stdio.h>
int factorial(int number){   //DECLARING FUNCTION
int output=1;
while(number!=0){            //DEFINING FUNCTION
output*=number;
number--;}
//printf("\t Factorial is %d",output);
return output;
}
int main()
{
int number,calling_factorial;//DECLARING LOCAL VARIABLE
printf("\n\t Enter the number to find the factorial\n");
scanf("%d",&number);
calling_factorial=factorial(number);//CALLING FUNCTION
printf("\t FACTORIAL IS %d",calling_factorial);
return 0;
}
