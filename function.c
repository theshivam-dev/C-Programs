// This is a program for Find Area of rectangle,circle,triangle and square with user defined function.

#include <stdio.h>
#include <math.h>
#define PI 3.14159

int rectangle();  // Functions Declarations
int circle ();
int triangle ();
int square ();
int rightangle ();
int print();

int main ()
{
   rectangle ();   // Functions Calling
   circle ();
   triangle ();
   square ();
   rightangle ();
   print ();
 

}

int rectangle ()   // Rectangle Function Definition
{
   float length,width,area;
   printf("Enter length of a rectangle : ");
   scanf("%f",&length);

   printf("Enter width of a rectangle : ");
   scanf("%f",&width);

   area = length * width;
   printf("Area of a rectangle is : %f \n\n",area);
}

int circle ()  // Circle Function Definition
{
   float radius,area;
   printf("Enter radius of a circle : ");
   scanf("%f",&radius);

   area = PI * radius * radius;
   printf("Area of a circle is : %f \n\n",area);

}

int triangle ()  // Triangle Function Definition
{
   float base,height,area;
   printf("Enter base of triangle :  ");
   scanf("%f",&base);

   printf("Enter height of triangle : ");
   scanf("%f",&height);

   area = base * height * 1 / 2 ;
   printf("Area of triangle is : %f \n\n",area);

}

int square ()  // Square Function Definition
{
   float side,area;
   printf("Enter side of a square : ");
   scanf("%f",&side);

   area = side * side;
   printf("Area of a square is : %f \n\n",area);

}

int rightangle ()    // Right Angle Triangle Definition
{
   float hypotenuse,h, b, p; 
   printf("Enter the base of RightAngle Triangle :  ");
   scanf("%f",&b);

   printf("Enter the perpendicular of RIghtAngle Triangle : ");
   scanf("%f",&p);

   hypotenuse = b * b + p * p;
   h = sqrt (hypotenuse);

   printf("The Hypotenuse of Right Angle Triangle is : %f \n\n",h);

}

int print()    // print Function Definition
{
   printf("This Is a Program For Calculate Areas Made By Snowden \n\n");
}

