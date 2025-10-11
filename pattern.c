#include <stdio.h>
void main()
{
    // for(int i=0;i<5;i++)
    // {
    //     for(int j=0;j<5;j++)
    //     {
    //         printf(" * ");
    //     }
    //     printf("\n");
    // }
    // for(int i=1;i<=5;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         printf(" %d ",j);
    //     }
    //     printf("\n");
    // }
    //     for(int i=1;i<=5;i++)
    // {
    //     for(int j=5;j>=i;j--)
    //     {
    //         printf(" ** ");
    //     }
    //     printf("\n");
    // }
    // for(int i=1;i<=5;i++)
    //     {
    //     for(int sp=1;sp<=i;sp++)
    //     {
    //         printf("   ");
    //     }
    //     for(int j=1;j<=2*5-(2*i-1);j++)
    //     {
    //         printf(" * ");
    //     }
    //     printf("\n");
    // }
    int n=5;
    for(int i=1;i<=n+1;i++)
    {
        for(int sp=1;sp<=n+1-i;sp++)
        {
            printf("   ");
        }
        for(int j=1;j<=i;j++)
        {
            printf(" @ ");
        }
        for(int k=2;k<=i;k++)
        {
            printf(" @ ");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(int sp=1;sp<=i;sp++)
        {
            printf("   ");
        }
        for(int j=1;j<=2*n-(2*i-1);j++)
        {
            printf(" @ ");
        }
        printf("\n");
    }
}