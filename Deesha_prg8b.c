
// To check whether a number is positive, negative, or zero:
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch(num > 0) {
        case 1:
            printf("%d is positive.\n", num);
            break;
        case 0:
            switch(num < 0) {
                case 1:
                    printf("%d is negative.\n", num);
                    break;
                case 0:
                    printf("%d is zero.\n", num);
                    break;
            }
            break;
    }

    return 0;
}