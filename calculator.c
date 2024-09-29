#include <stdio.h>

int main() {
    char o;
    int num1,num2;
    printf("Enter the operator '+' '-' '*' '/' ");
    scanf("%c",&o);

    printf("enter the first number ");
    scanf("%d",&num1);

    printf("enter the second number ");
    scanf("%d",&num2);

if (o=='+') printf("the addition of two numbers is %d",num1+num2);

if (o=='-') printf("the subtraction of two numbers is %d",num1-num2);

if (o=='*') printf("the multiplication of two numbers is %d",num1*num2);

if (o=='/') printf("the division of two numbers is %d",num1/num2);

return 0;
}
