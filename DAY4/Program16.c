#include <stdio.h>
int main()
{
    int x,y,i,n,sum,r;
    printf("Enter range: ");
    scanf("%d %d",&x,&y);
    // checking armstrong numbers in b/w the given range
    printf("Armstrong numbers between %d and %d are: ",x,y);
    for(i=x;i<=y;i++){
        n=i;
        sum=0;
        while(n>0){
            r=n%10;
            sum=sum+r*r*r;
            n=n/10;
        }
        if(sum==i)
            printf("%d ",i);
    }
    return 0;
}