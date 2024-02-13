//Write a C program to swap two variables without using functions a) By using temporary variable.
//b) Without using temporary variable
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter value of a and b: ");
    scanf("%d %d", &a,&b);

    // Swap using a temporary variable
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping using temporary variable:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swap without using a temporary variable
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping without using temporary variable:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
