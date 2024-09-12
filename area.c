#include <stdio.h>

int main ()
{
     int length, width, area = 1;
     printf("enter first value = ");
     scanf("%d",&length);

     printf("enter second value = ");
     scanf("%d",&width);

     area = length * width;

     printf("area of square is  = %d",area);
     return 0;
     
}
