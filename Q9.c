/*9. Write a program to display number of days in the given month and year using
a. Using If else ladder.
b.Using logical operators.

 B.Using logical operators

# include<stdio.h>
int main()
{
  int month, year;
  printf("Enter the month: \n" );
  scanf("%d",&month);
  printf("Enter the year : \n" );
  scanf("%d", &year);
  if ( month==2 && (year%400==0 || ( year!=100 && year%4==0)))
   {
      printf("The month have 29 days\n");
   }
  else if (month==2) 
 {
  printf("The month have 28 days\n");
  }
   else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10|| month==12)
{

      printf("The month have 31 days\n");
}

else if(month==4 || month==6 || month==9 || month==11)
{

    printf("The month have 30 days\n");
}
else
{

  printf("Invalid month");
}
return 0;

}
*/
// A.using If else ladder


# include<stdio.h>
int main()
{
  int month, year;
  printf("Enter the month: \n" );
  scanf("%d",&month);
  printf("Enter the year : \n" );
  scanf("%d", &year);

  if ( month==2 && (year%400==0 || ( year!=100 && year%4==0)))
   {
      printf("The month have 29 days\n");
   }
  else if (month==2) 
  {
  printf("The month have 28 days\n");
  }
  else if (month==1) 
  {
  printf("The month have 30 days\n");
  }

  else if (month==3) 
  {
  printf("The month have 31 days\n");
  }

  else if (month==4) 
  {
  printf("The month have 30 days\n");
  }

  else if (month==5) 
  {
  printf("The month have 31 days\n");
  }
  else if (month==6) 
  {
  printf("The month have 30 days\n");
  }

  else if (month==7) 
  {
  printf("The month have 31  days\n");
  }
  else if (month==8) 
  {
  printf("The month have 31 days\n");
  }
  else if (month==9) 
  {
  printf("The month have 30 days\n");
  }
  else if (month==10) 
  {
  printf("The month have 31 days\n");
  }
  else if (month==11) 
  {
  printf("The month have 30 days\n");
  }
  
  else if (month==12) 
  {
  printf("The month have 31 days\n");
  }
  
else
{

  printf("Invalid month");
}
return 0;

}
  














