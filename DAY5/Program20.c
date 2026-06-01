#include <stdio.h>
int main(){
    int n,i,largest=0;
    printf("Enter a number: ");
    scanf("%d",&n);    
    for(i=2;i<=n;i++)
    {
        if(n%i==0){
            int j,found=0;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    found=1;
                    break;
                }
            }
            if(found==0)
                largest=i;
        }
    }
    printf("Largest prime factor of the number is: %d",largest);
    return 0;
}