//Write a program to calculate the area and the circumference of a circle by using radius as the input provided by the user.
#include <stdio.h>  
#define PI 3.14159  
int main() {  
float radius, area, circumference;  
printf("Enter the radius of the circle: ");  
scanf("%f", &radius);  
area = PI * radius * radius;  
circumference = 2 * PI * radius;  
printf("Area of the circle: %.2f\n", area);  
printf("Circumference of the circle: %.2f\n", circumference);  
return 0;  
}  