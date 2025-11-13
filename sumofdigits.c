#include <stdio.h>
int main()
{
    printf("Enter a number:");
    int num;
    scanf("%d", &num);
    int sum=0;
    while(num>9)
    {
        sum=0;
        while(num!=0)
        {
            int digit=num%10;
            sum=sum+digit;
            num=num/10;
        }
        num=sum;
    }
    printf("Sum of digits: %d\n", sum);
}