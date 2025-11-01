#include <stdio.h>
int main()
{
    printf("Enter a number:");
    int num;
    scanf("%d", &num);
    int sum=0;
    while(num>0)
    {
        sum=sum+num%10;
        num=num/10;
    }
    printf("Sum of digits: %d\n", sum);
}