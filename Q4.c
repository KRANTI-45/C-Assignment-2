/* . Write a program to find maximum of two numbers using
a. If – else
b. conditional operator.*/



/*a. If – else


# include<stdio.h>
 int main ()
 {
   int num1,num2 ;
   printf("Enter the first num : ");
   scanf("%d",&num1);
   printf("Enter the second  num : ");
   scanf("%d",&num2);
if (num1>num2)
   printf("Fisrt number is maximum\n");
else
   printf("Second number is maximun\n");



 return 0;
 }
*/

//b.conditional operator


# include<stdio.h>
 int main ()
 {
   int num1,num2 ;
   printf("Enter the first num : ");
   scanf("%d",&num1);
   printf("Enter the second  num : ");
   scanf("%d",&num2);
   ((num1>num2) ? printf ("Fisrt number is maximum\n") :  printf("Second number is maximun\n"));

   return 0 ;

   }
