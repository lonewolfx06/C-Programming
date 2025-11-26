#include <stdio.h>
void main()
{
    int x=5;
    int y=10;
    sumusingvalue(x,y);  //this is call by value
    sumusingref(&x,&y); //this is call by reference
    printf("x : %d  || y : %d\n",x,y);
    abt_ptr();

}

int sumusingvalue (int a, int b)
{
    printf("sum of 5 and 10 is %d\n",a+b);
    a++,b++;
    printf("%d  |  %d\n",a,b);

}

int sumusingref(int *a, int *b)
{
    printf("sum of %d and %d is %d\n",*a,*b,*a+*b);
    *a++,*b++;
}

void abt_ptr()
{
    int no=5;
    float flt=20.25;
    int *ptr=&no;
    int _num= *ptr;
    printf("address of no is %p\n", ptr);
    printf("%d ", *ptr);
    printf("%d ", _num);
    printf("%p ", &no);
    printf("\n\n");
    printf("%p ", no);
    printf("%p ", *ptr);
    printf("%p ", *(&no));

}
