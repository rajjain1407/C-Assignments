#include <stdio.h>
void main()
{
    float P, R, T, A, CI;
    printf("Principal: ");
    scanf("%f", &P);
    printf("Rate of interest: ");
    scanf("%f", &R);
    printf("Time Period: ");
    scanf("%f", &T);
    A = P * (( pow((1 + R / 100), T)));
    CI = A - P;
    printf("Compound interest is : %f", CI);
}