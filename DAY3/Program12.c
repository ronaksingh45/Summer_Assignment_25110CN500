#include <stdio.h>
int main()
{
    int x,y,i,lcm;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    for(i=1;i<=x*y;i++)         // loop to find first common multiple
    {     
        if(i%x==0 && i%y==0)
        {
            lcm=i;
            break;
        }
    }
    printf("LCM of %d and %d is: %d",x,y,lcm);
    return 0;
}