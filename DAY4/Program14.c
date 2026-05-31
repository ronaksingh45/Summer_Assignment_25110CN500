#include <stdio.h>
int main()
{
    int n,x=0,y=1,z,i;
    printf("Enter term position: ");
    scanf("%d",&n);
    // calculating nth fibonacci term
    if(n==1){
        printf("Fibonacci term at position %d is: %d",n,x);
        return 0;
    }

    for(i=2;i<=n;i++){
        z=x+y;
        x=y;
        y=z;
    }
    printf("Fibonacci term at position %d is: %d",n,x);
    return 0;
}