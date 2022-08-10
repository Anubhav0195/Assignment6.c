#include<stdio.h>
int main()
{
    int n;
    int count=0;
    printf("Enter a number");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("The number of digit in an integers is %d",count);




    return 0;
}