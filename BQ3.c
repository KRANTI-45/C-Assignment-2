/*Write a program to accept Employee Id , Department No, Designation from user and display
output with reference to following tables
DeptNoDept NameDsgnCodeDesignation
10Marketing'M'Manager
20Management'S'Supervisor
30Sales's'Security Officer
40Designing'C'Clerk
Example:
If input given is
Employee Id
: 101
Dept No
: 30
Designation Code
: M
Then output should be:
Employee with employee id 101 is working in "Sales" department as "Manager". */

# include<stdio.h>
int main ()
{
int id,Dept_no;
char Desination ;

printf("Enter the Employee Id\n");
scanf("%d",&id);
printf("Enter the Dept No\n");
scanf("%d",&Dept_no);
printf("Enter the Designation code\n");
scanf("%*c%c",&Desination);

switch (Dept_no)
{
  case 10 : printf("Employee with employee id %d is working in \"Markting\" department as",id);
           break;

  case 20 :printf("Employee with employee id %d is working in \"Management\" department as",id);
           break;

  case 30 :printf("Employee with employee id %d is working in \"Sales\" department as",id);
           break;

  case 40 :printf("Employee with employee id %d is working in \"Designing\" department as",id);
           break;
  }
  switch (Desination)
{
  case 'M' : printf("\"Manager\"\n");
           break;
  case 'S' : printf("\"Supervisor\"\n");
           break;
  case 's' : printf("\"Secuirty Officer\"\n");
           break;
  case 'C' : printf("\"Clerk\"\n");
           break;

  }


  
return 0;
}
