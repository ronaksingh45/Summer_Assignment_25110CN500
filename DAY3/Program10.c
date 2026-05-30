#include<stdio.h>
int main()
{
    int N1,N2,i,j,found;
    printf("Enter range: ");
    scanf("%d %d",&N1,&N2);
    printf("Prime numbers between %d and %d are: ",N1,N2);
    for(i=N1;i<=N2;i++)
    {
        if(i<=1) continue;   // skip 0 and 1
        found=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                found=1;
                break;
            }
        }
        if(found==0)
            printf("%d ",i);
    }
    return 0;
}