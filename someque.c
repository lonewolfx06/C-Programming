// #include <stdio.h>
// int main()
// {
//     printf("enter a number: ");
//     int n;
//     scanf("%d", &n);
//     if(n%5==0 && n%11==0)
//         printf("%d is divisible by 5 and 11", n);
//     else if(n%5==0)
//         printf("%d is divisible by 5 but not by 11", n);
//     else if(n%11==0)
//         printf("%d is divisible by 11 but not by 5", n);
//     else
//         printf("%d is not divisible by 5 and 11", n);
//     return 0;
// }
#include <stdio.h>
// int main()
// {
//     printf("enter the total amount: ");
//     int amt;
//     scanf("%d", &amt);
//     if(amt>1000)
//     {
//         printf("you get 10 percent discount and total amount to pay is %.2f", amt-0.1*amt);
//     }
//     else if(amt>500)
//     {
//         printf("you get 5 percent discount and total amount to pay is %.2f", amt-0.05*amt);
//     }
//     else
//     {
//         printf("you don't get any discount ");

//     }
//     return 0;
// }
int main()
{
    printf("enter the amount of electricity consumed in units: ");
    int unit;
    scanf("%d", &unit);
    int amt;
    
        if(unit<100)
        {
            amt=unit*1.5;
            printf("bill for 1st 100 is %d\n", amt);
        }   
        else
        {
            amt=150;
            unit=unit-100;
            printf("bill for 1st 100 is %d\n", amt);
        }
    
    if(unit>0)
    {
        if(unit>100)
        {amt=amt+200;
            unit=unit-100;
            printf("bill for 2nd 100 is %d\n", amt-150);}
        else
        {
            amt=amt+unit*2;
            printf("bill for 2nd 100 is %d\n", amt-150);
        }
    }
    if(unit>0)
    {
        amt=amt+unit*3;
        printf("bill for 3rd 100 is %.2f\n", amt-350);
    }
    printf("the total electricity bill is %.2f", amt);
    return 0;
    }
