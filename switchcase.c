// WAP to check if a number is even or odd
#include <stdio.h>
int main()
{
     printf("Enter the number");
     int n;
     scanf("%d", &n);
     
     switch (n%2)
     {
     case 0:
        printf("It is even");
        break;
    case 1:
         printf("It is odd");
    break;
     default:
     printf("INVALID");
        break;
     }
}
int notmain()
{
    printf("HELLO");
    return 0;
}