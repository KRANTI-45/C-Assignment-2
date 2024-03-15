/*Write a program that will calculate the price for a quantity entered from the keyboard, given
that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
percent discount for quantities over 50.*/

# include<stdio.h>
 int main()
 {
   int quantity,unit_price =5,amount; 
    float total_amount,discount ;
   printf("Enter the quantity : \n ");
   scanf("%d",&quantity);
   amount=unit_price*quantity;
   if (quantity<=30)
   printf("The amount for %d quantity is :%d\n",quantity,amount);
 else if (quantity>= 30 && quantity<=50)
   {
    discount=amount*10/100;
   total_amount=(amount -discount);
   printf("The amount for %d quantity is :%.2f\n",quantity,total_amount);
   }
else
  {
    discount=amount*15/100;
   total_amount=(amount -discount);

   printf("The amount for %d quantity is :%.2f\n",quantity,total_amount);
   }
   return 0;
   }
  
