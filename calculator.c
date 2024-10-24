// Calculator program using switch 
#include <stdio.h>
int main ()
{
    int num1,num2;
    float result;
    char operator;

    printf("Enter the first number : ");
    scanf("%d",&num1);
    
    printf("Enter the second number : ");
    scanf("%d",&num2);

    printf("Enter operator ('+','-','*','/','%%') : ");
    scanf(" %c",&operator);

   switch (operator) {
   case '+':
   result = num1 + num2;
   printf("The addition of two number is : %f",result);
    break;

   case '-':
   result = num1 - num2;
   printf("The subtraction of two number is : %f",result);
    break;

   case '*':
   result = num1 * num2;
   printf("The multiplication of two number is : %f",result);
    break;

   case '/':
   if (num2 == 0)
   {
    printf("Division of zero is not allowed");
   } else {
   result = num1 / num2;
   printf("The division of two number is : %f",result);
    break;
   }

 case '%':
   result = num1 % num2;
   if (num2 == 0)
   {
    printf("Division of zero is not allowed");
   } else {
   printf("The remainder of two number is : %f",result);
    break;
   }
   
   default:
   printf("Choose right operator");
    break;
   }   
   return 0;
}
