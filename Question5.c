#include<stdio.h>
int main()
{
    int i,n,cube,sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(cube=i*i*i)
        sum=sum+cube;
    }
    printf("Sum of cube of n natural number is %d",sum);





    return 0;
}