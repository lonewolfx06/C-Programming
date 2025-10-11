/*WAP to calculate the area of circle radius*/

/*#include <stdio.h>
float main()
{
    int r=0;
    printf("Enter the radius of circle: ");
    scanf("%d",&r);
    const float pi=3.14;
    printf("The area of circle with radius %d is %.2f",r,pi*r*r);
    return 0.0;
}*/
#include <stdio.h>
int main()
{
    int c=0;
    printf("Enter 1 for circle and 2 for rectangle: ");
    scanf("%d",&c);
    if(c==1)
    {
        int r=0;
        printf("Enter the radius of circle: ");
        scanf("%d",&r);
        printf("The area of circle with radius %d is %.2f sq units",r,3.14*r*r);
    }
    else 
    if(c==2)
    {
        int l=0,b=0;
        printf("Enter the length and breadth of rectangle: ");
        scanf("%d%d",&l,&b);
        printf("The area of rectangle with length %d and breadth %d is %d sq units",l,b,l*b);
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
// }
// #include <stdio.h>
// int main()
// {
//     printf("Enter the lengths of sides");
//     int a;
//     int b;
//     int c;
//     scanf("%d%d%d", &a,&b,&c);
//     if(a+b>c && a+c>b && b+c>a)
//         printf("yes it is a triangle");
//     else
//         printf("NO it is not a triangle");
//     return 0;
// }