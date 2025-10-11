/*reverse the digits of a number*/
/*check if the num is prime*/ 
#include <stdio.h>
int main()
{
    // int n,r=0,rem=0;
    // printf("Enter the number: ");
    // scanf("%d",&n);
    // int t=n;
    // while(t>0)
    // {
    //     rem=t%10;
    //     r=10*r+rem;
    //     t=t/10;
    // }
    // printf("The reverse of the number %d is %d",n,r);
    
    // int n,c=0;
    // printf("Enter the number: ");
    // scanf("%d",&n);
    // int i=2;
    // while(i<n)
    // {
    //     if(n%i==0)
    //     {printf("%d is not a prime number",n);
    //     c++;
    //     break;}
    //     i++;
    // }
    // if(c==0)
    //     printf("%d is a prime number",n);
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
     return 0;
    }
  
