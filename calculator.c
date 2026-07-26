#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    char ch;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c",&ch);
    if(ch=='+')
    {
        printf("%d + %d = %d",a,b,a+b);
    }
    else if(ch=='-')
    {
        printf("%d - %d = %d",a,b,a-b);
    }
    else if(ch=='*')
    {
        printf("%d * %d = %d",a,b,a*b);
    }
    else if(ch=='/')
    {
        if(b!=0)
            printf("%d / %d = %d",a,b,a/b);
        else
            printf("Error! Division by zero.");
    }
    else if(ch=='%')
    {
        if(b!=0)
            printf("%d %% %d = %d",a,b,a%b);
        else
            printf("Error! Division by zero.");
    }
    else
    {
        printf("Invalid operator!");
    }
    return 0;
}