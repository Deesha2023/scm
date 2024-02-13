//Write a program to evaluate each of the following equations.
//(i) V = u + at. (ii) S = ut+1/2at2 (iii) T=2*a+√b+9c (iv) H=√b2+p2

#include <stdio.h>
#include <math.h>
int main() {
    double u, a, t, v, s, b, c, T, H, p;

    printf("Enter initial velocity (u): ");
    scanf("%lf", &u);
    printf("Enter acceleration (a): ");
    scanf("%lf", &a);
    printf("Enter time (t): ");
    scanf("%lf", &t);
    printf("Enter value of b: ");
    scanf("%lf", &b);
    printf("Enter value of c: ");
    scanf("%lf", &c);
    printf("Enter value of p: ");
    scanf("%lf", &p);

    // Equation (i): V = u + at
    v = u + a * t;
    printf("Result of equation (i): V = %lf\n", v);

    // Equation (ii): S = ut + 1/2 * a * t^2
    s = u * t + 0.5 * a * t * t;
    printf("Result of equation (ii): S = %lf\n", s);

    // Equation (iii): T = 2 * a + sqrt(b) + 9 * c
    T = 2 * a + sqrt(b) + 9 * c;
    printf("Result of equation (iii): T = %lf\n", T);

    // Equation (iv): H = sqrt(b^2 + p^2)
    H = sqrt(b * b + p * p);
    printf("Result of equation (iv): H = %lf\n", H);

    return 0;
}
