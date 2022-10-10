#include <stdio.h>
void main(){
    float P, R, T;
    printf("Principal:");
    scanf("%f",&P);
printf("ROI:");
scanf("%f",&R);
printf("Time period:");
scanf("%f",&T);
printf("Interest Gain:%f",(P*R*T)/100);
printf("\nMaturity Amount:%f",((P*R*T)/100)+P);
}