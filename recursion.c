// code for factorial using recursion : 

#include <stdio.h>
int fact (int);
int main ()
{
    int k;
    printf("Enter the factorial number : ");
    scanf("%d",&k);
    k = fact (k);
    printf("The factorial of number is : %d",k);
}
int fact (int n)
{
    int s;
    if (n == 0) // base case
    return 1;     
    s = n * fact (n - 1);  // recursive case 
    return (s);
}
