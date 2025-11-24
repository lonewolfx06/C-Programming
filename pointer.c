#include <stdio.h>
void main()
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