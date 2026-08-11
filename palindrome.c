#include <stdio.h>
int main()
{
    int n,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int no=n;
    while(n>0)
    {
        rev=10*rev+n%10;
        n=n/10;
    }
    if(rev==no)
        printf("The number is Palindrome");
    else
        printf("The number is not palindrome. The reverse of given number is: %d", rev);
    return 0;
}