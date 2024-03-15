/* Write a program to accept a point in Cartesian co-ordinate system and decide the quadrant in
which the point lies. Also check for special cases point lies on ␁␂␃␂␄␃␅␆, ␁␇␂␄␃␅␆, ␈ ␅ ␅ . */

#include<stdio.h>
int main()
{
int x ;
int y ;
int integer;
int integer2;
printf("Enter the x point:\n");
scanf("%d",&x);

printf("Enter the y point:\n");
scanf("%d",&y);

 if (x > 0 && y > 0)
 {
    printf("lies in First quadrant\n"); 
 }
else if (x < 0 && y > 0) 
 { 
  printf("lies in Second quadrant\n"); 
 
 }
 else if (x < 0 && y < 0) 
 {
 printf("lies in Third quadrant\n"); 
 
 }
 else if (x > 0 && y < 0) 
 {
 printf("lies in Fourth  quadrant\n"); 
 
 }
 else if (x > 0 &&  y == 0) 
 
 {
 printf("lies in Positive x axis\n"); 
 
 }
 else if (x < 0 && y == 0) 
 {
 printf("lies in Negative x axis\n"); 
 
 }
 else if (x == 0 && y > 0) 
 
 {
 printf("lies in Positive y axis\n"); 
 
 }
 else if (x == 0 && y < 0) 
 
 {
 printf("lies in Negative y axis\n"); 

}
else

{
printf("lies on origin \n");
}

   return 0;

}
