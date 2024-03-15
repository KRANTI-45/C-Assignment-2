/*Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
reversed number is same as entered number it is called palindrome).*/

# include <stdio.h>
int main ()
{
int num,original,rem,rev=0 ;
printf("enter the 5 digit number:\n"  );
scanf("%d",&num);
original=num;
while(num!=0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;

}

if (original==rev)
  printf("%d is palindrome.\n",original);
else
  printf("%d is not palindrome.\n",original);


  return 0 ;
   }
