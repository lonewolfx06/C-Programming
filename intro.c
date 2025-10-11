#include<stdio.h>
// int main()
// {   
//     int a;
//     printf("Enter the number");
//     scanf("%d", &a);
//     for (int i=1;i<=10;i++)
//     {
//         int b=a*i;
//         printf("%d * %d = %d\n", a,i,b);
//     }
    
//     return 0;
// }
// int main()
// {
//     int f=1,n;
//     printf("Enter the number\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         f=f*i;
//     }
//     printf("Factorial of %d is %d", n,f);
// }
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}