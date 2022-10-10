#include <stdio.h>
void main()
{
    int i, cube, n;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("Number is:%d",n);
    for (i = 1; i <= n; i++)
    {
        cube = i*i*i;
    }
    printf("\nCube of number %d is:%d",n, cube);
}