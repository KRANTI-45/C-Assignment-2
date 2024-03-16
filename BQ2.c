/*2. Write a program to crate four function calculator. Four functions are +, - , *, /  */


# include<stdio.h>
int main ()
{
  char opr ;
  int operand1,operand2 ;
  int ans ;
  printf("Enter the operand1: ");
  scanf("%d",&operand1);
  printf("Enter the operator: ");
  scanf("%*c%c",&opr);
  printf("Enter the operand2: ");
  scanf("%d",&operand2);
 
switch (opr)
{
  case '+': ans=operand1+operand2;
           printf("%d %c %d = %d\n",operand1,opr,operand2,ans);
           break;        
  case '*':ans=operand1 * operand2;

           printf("%d %c %d = %d\n",operand1,opr,operand2,ans);
           break;        
  case '-':ans=operand1-operand2;
           printf("%d %c %d = %d\n",operand1,opr,operand2,ans);
           break;        
  case '/':if (operand2==0)
           {
           printf("Invalid\n");
		   }
		  else
           {
		   ans=operand1/operand2;
		   printf("%d %c %d = %d\n",operand1,opr,operand2,ans);
		   }
          break;        
  default:printf("error\n");
}

return 0;
}

