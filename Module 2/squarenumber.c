#include <stdio.h>
void main()
{
    int i, square, n;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("Number is:%d",n);
    for (i = 1; i <= n; i++)
    {
        square = i*i;
    }
    printf("\nSquare of number %d is:%d",n, square);
}