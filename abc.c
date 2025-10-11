#include <stdio.h>
int type_conversion()
{
    int a = 5;
    float b = 6.2;
    char c = 'A';
    double d = 9.8;
    printf("a is 5, b is 6.2, c is 'A', d is 9.8\n");
    // Implicit type conversion
    float result1 = a + b; // int to float
    double result2 = b + d; // float to double
    int result3 = c + a; // char to int

    printf("Implicit Type Conversion:\n");
    printf("a + b = %f\n", result1);
    printf("b + d = %lf\n", result2);
    printf("c + a = %d\n", result3);

    // Explicit type conversion (casting)
    int castedResult1 = (int)b; // float to int
    float castedResult2 = (float)d; // double to float
    char castedResult3 = (char)a; // int to char

    printf("\nExplicit Type Conversion:\n");
    printf("(int)b = %d\n", castedResult1);
    printf("(float)d = %f\n", castedResult2);
    printf("(char)a = %c\n", castedResult3);

    

    return 0;

}