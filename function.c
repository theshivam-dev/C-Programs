#include <stdio.h>
#define PI 3.14

int circle (); // function declaration
int main ()

{
   circle (); // function calling
   return 0;
}

int circle () // function definition

{
   float radius, area;

   printf("enter radius of a circle : ");
   scanf("%f",&radius);

   area = PI * radius * radius;
   printf("area of circle is : %f ",area);
}
