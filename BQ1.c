/* . Write a program to display number of days in the given month and year using switch case
statement. */

# include<stdio.h>
int main ()
{
  int month,year  ;
  printf("Enter the month\n: ");
  scanf("%d",&month);
switch (month)
{
  case 1:
  case 4:
  case 6:
  case 9:
  case 11:
       printf("Month having 30 days\n");
       break;
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
  case 3:
       printf("Month having 31 days\n");
	   break;
  case 2: printf("Enter the year\n: ");
          scanf("%d",&year);

         if( (year%400==0) || ( year !=100 && year%4==0))
           printf("Month having 29 days\n");
	     else
		  printf("Month hving 28 days\n");  
       break;
  default:printf("Invalid month\n");
}

return 0;
}
  
 
