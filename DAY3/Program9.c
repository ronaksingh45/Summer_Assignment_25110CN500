#include <stdio.h>
int main()
{
    int n,i,found=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<=1) found=1;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            found=1;
            break;
        }
    }
    if(found==0)
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
    return 0;
}