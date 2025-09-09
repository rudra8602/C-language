//Project: Calculator//
/*If a user enters a+b than it should perform the calculation*/ 
#include <stdio.h>
int main(){
   double a,b;
   char o;
   printf("Enter the values and the operation:");
   scanf("%lf%c%lf", &a, &o, &b);
   
   if (o =='+')
   {
     printf("%f",a+b);
   }
   else if (o =='-')
   {
     printf("%f",a-b);
   }
   else if (0 == '*')
   {
     printf("%f",a*b);
   }
   else
   {
    printf("%f",a/b);
   }
   
   
   
   

}