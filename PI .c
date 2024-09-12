#include <stdio.h>

int main()
{
  const float PI = 3.14159;
  float radius,area;
   printf("enter the radius : ");
   scanf("%f",&radius);

  area = PI * radius * radius;
   printf("area of circle is  : %f ",area);  
   
   return 0;

   
}
