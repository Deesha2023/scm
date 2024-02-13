//Write a Program to perform addition, subtraction, division and multiplication of two numbers given as input by the user.
#include <stdio.h>
int main()
{
    int num1, num2, add, sub, mult;
    float div;
 
    printf("Enter two integers: ");
    scanf("%d %d", &num1,&num2);
    add = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / (float)num2;
    printf("Sum of two numbers = %d\n",add);
    printf("Difference of two numbers = %d\n",sub);
    printf("Multiplication of two numbers = %d\n",mult);
    printf("Division of two numbers = %.2f\n",div);
 
    return 0;
}