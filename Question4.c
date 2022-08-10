#include<stdio.h>
int main()
{
    int i,n,sum=0,square;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(square=i*i)
        sum=sum+square;
    }
    printf("Sum of square of n natural number is %d",sum);





    return 0;
}