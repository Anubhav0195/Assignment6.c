#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        sum=sum+i;
    }
    printf("Sum of all n odd number is %d",sum);





    return 0;
}