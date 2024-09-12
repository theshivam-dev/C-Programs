// Multiplication In C Using Scanf Function

#include <stdio.h>

int main()
{
    int a, b, multi;
    printf("Enter value of a: ");
    scanf("%d", &a);
    
    printf("Enter value of b: ");
    scanf("%d", &b);
    
    multi = a * b;
    printf("Multiply: %d\n", multi);

    return 0;
}
