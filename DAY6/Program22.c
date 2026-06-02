#include <stdio.h>
int main()
{
    int n,decimal=0,base=1,r;
    printf("Enter a binary number: ");
    scanf("%d",&n);
    //binary to decimal
    while(n>0)
    {
        r=n%10;
        decimal=decimal+r*base;
        base=base*2;
        n=n/10;
    }
    printf("Decimal is: %d",decimal);
    return 0;
}