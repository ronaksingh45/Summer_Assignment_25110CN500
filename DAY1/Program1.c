#include <stdio.h>

int main()
{
    int num, sum = 0, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("Sum of first %d natural numbers = %d", num, sum);
    return 0;
}