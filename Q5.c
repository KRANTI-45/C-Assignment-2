/* Write a program to find maximum of three numbers using
a. If – else
b. conditional operator.




a.If -else

# include<stdio.h>
int main ()
{
int num1,num2,num3;
printf ("Enter the num1 :  ");
scanf("%d",&num1);
printf ("Enter the num2 :  ");
scanf("%d",&num2);
printf ("Enter the num3 :  ");
scanf("%d",&num3);
 if (num1>num2)
 { 
   if (num1>num3)
       {
       printf("num1  is max : ");
	   }
     else
	   {
       printf("num3 is max :  ");
	   }
}

else  
{
   if (num2>num3)
       {
       printf("num2 is max : ");
	   }
     else
	   {
       printf("num3 is max :  ");
	   }
}	   

return 0;
 }

 

  b.conditional operator*/


#include<stdio.h>

int main()
{
int max;
int num1,num2,num3;
printf ("Enter the num1 :  ");
scanf("%d",&num1);
printf ("Enter the num2 :  ");
scanf("%d",&num2);
printf ("Enter the num3 :  ");
scanf("%d",&num3);

max=(num1>num2)?((num1>num3)? num1  : num3) : ( (num2>num3)? num2 : num3) ;

printf("Maximum number is :%d\n",max);


return 0;
 }
