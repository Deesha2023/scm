//Write a Program to show the use to input (Scanf)/output (Printf) statements and 
//block structure of C-program by highlighting the features of "stdio.h".
#include <stdio.h>  // Include the standard I/O library

int main() {
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Block structure begins
    {
            sum = num1 + num2;

            printf("Sum of %d and %d is %d\n", num1, num2, sum);
    }  // Block structure ends

    return 0;
}