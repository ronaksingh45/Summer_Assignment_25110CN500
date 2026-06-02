#include <stdio.h>
int main()
{
    int n,binary=0,pos=1,r;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    // decimal to binary
        while(n>0){
        r=n%2;
        binary=binary+r*pos;
        pos=pos*10;
        n=n/2;
    }
    printf("Binary number is: %d",binary);
    return 0;
}