#include<stdio.h>
// int factorial(int no)
// {
//    if(no==1 || no==0)
//    {
//     return 1;
//    }
//     return no * factorial(no-1);
// }
// int main()
// {
//     int n;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     int fa=factorial(n);
//     printf("factorial of the entered no is %d", fa);
// }
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int s=sumofn(n);
    printf("Sum of first %d natural numbers is %d\n", n,s);
    int f=fib(n);
    printf("\n%dth Fibonacci number is %d", n,f);
}
int sumofn(int no)
{
    if(no==1)
    {
        return 1;
    }
    return no+sumofn(no-1);
}
int fib(int no)
{
    if(no==0)
    {
        return 0;
    }
    else if(no==1)
    {
        return 1;
    }
    int fi=fib(no-1)+fib(no-2);
    printf("%d",fi);
    return fi;
}