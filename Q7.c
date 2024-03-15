/* 7. Write a program to display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years.
a. Without using logical operators
b. Using logical operators
c. Conditional operator  */

// A.without using logical operators.
/*
# include<stdio.h>
int main()
{
   int year,leap_year=366,Not_leap_year=365;
   
   printf("Enter the year: \n");
   scanf("%d",&year);
  if(year%4==0)
      printf("%d is the leap year and it has %d days.\n",year,leap_year);
  else if (year%400==0)
      printf("%d is the leap year and it has %d days.\n",year,leap_year);

 else 
    
      printf("%d is the not leap year and it has %d days.\n",year,Not_leap_year);
return 0;
}
// B.Using logical operators

# include<stdio.h>
int main()
{
   int year,leap_year=366,Not_leap_year=365;

   printf("Enter the year: \n");
   scanf("%d",&year);
  if((year%4==0) || (year%400==0))
      printf("%d is the leap year and it has %d days.\n",year,leap_year);

  else

      printf("%d is the not leap year and it has %d days.\n",year,Not_leap_year);
return 0;
}
*/


// C.Conditional operator

# include<stdio.h>
int main()
{
   int year,leap_year=366,Not_leap_year=365;

   printf("Enter the year: \n");
   scanf("%d",&year);
((year%4==0) || (year%400==0)?printf("%d is the leap year and it has %d days.\n",year,leap_year):printf("%d is the not leap year and it has %d days.\n",year,Not_leap_year));

return 0 ;

}
   
