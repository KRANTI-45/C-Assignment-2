/*1. Write a program to accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message.*/
# include<stdio.h>
int main()
{

   float num1,num2,div;
   printf("Enter the num1=  \n");
   scanf("%f",&num1);
   printf("Enter the num2= \n");
   scanf("%f",&num2);

   if(num2 !=0)
     {
         div=num1/num2;
   
         printf("divison of %.2f and %.2f is: %.2f\n",num1,num2,div);
     }

	else
		printf("Divide by zero error\n");


 return 0;
}




