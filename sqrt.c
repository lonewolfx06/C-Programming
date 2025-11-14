#include <stdio.h>
#include <math.h>
void main()
{
    double a=1000;
    for(int i=1000;i<=9999;i++)
    {
        a=i;
        if(((int)a%100)%11==0 && ((int)a/100)%11==0)
        {
            if(sqrt(a)==(int)sqrt(a))
            {
                printf("%d\n",i);
                printf("Square root is %.0f\n",sqrt(a));
            }
        }
    }
}