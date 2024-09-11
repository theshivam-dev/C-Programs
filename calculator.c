// Simple calculator in c program

#include <stdio.h>

int main()
{
  float x,y;
  float add,sub,multi,div;
  printf("enter first value : ");
  scanf("%f",&x);

  printf("enter second value : ");
  scanf("%f",&y);

  add = x + y;
  sub = x - y;
  multi = x * y;
  div = x / y;

  printf("addition : %f ",add);
  printf("subtraction : %f ",sub);
  printf("multiply : %f ",multi);
  printf("division : %f ",div);
  
  return 0;
}
