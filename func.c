#include <stdio.h>
// int main()
// {
//     notmain();
// }
// int notmain()
// {
//     printf("Hello, World!\n");
//     int sum=0;
//     int a=5,b=10;
//     sum=a+b;
    
//     return sum;
// }
// // write a function to find the manx of 2 numbers
// #include <stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("enter 3 numbers:");
//     scanf("%d %d %d",&a,&b,&c);
//     int x=max(a,b,c);
//     printf("max is %d",x);
// }
// int max(int a,int b,int c)
// {
//     if(a>b && a>c)
//     return a;
//     else if(b>a && b>c)
//     return b;
//     else
//     return c;
// }
int factorial(int no)
{
    int f=1;
    for(int i=1;i<=no;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int fa=factorial(n);
    printf("factorial of the entered no is %d", fa);
}
