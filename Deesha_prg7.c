//Write a Program to find the greatest among three numbers using:
//Conditional Operator and If-Else statement
#include <stdio.h>
int main() {
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
//using Conditional oprator
    int g = (x > y) ? x:y;
    int gc =  (g > z) ? g:z;

// using if-else statement
    int greatest_if;
    if (x >= y && x >= z) {
        greatest_if = x;
    } else if (y >= x && y >= z) {
        greatest_if = y;
    } else {
        greatest_if = z;
    }

    printf("Greatest number using conditional operator: %d\n", gc);
    printf("Greatest number using if-else statements: %d\n", greatest_if);

    return 0;
}
