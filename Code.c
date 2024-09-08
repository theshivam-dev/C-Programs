// Multiplication In C Using Scanf Function

#include <stdio.h>

int main()
{
    int a, b, multi;
    printf("Enter value of a: ");
    scanf("%lld", &a);
    printf("Enter value of b: ");
    scanf("%lld", &b);
    multi = a * b;
    printf("Multiply: %lld\n", multi);

    return 0;
}
