#include<stdio.h>

int main() {
    int a, b;
    int sum = a + b;
    int subtract = a-b;
    int product = a*b;
    float quo = a/b;
    int mod = a%b;
    printf("Sum = %d \n ",sum );
    printf("Difference = %d\n ",subtract);
    printf("Product =  %d\n",product );
    printf("Quotient = %f\n", quo );
    printf("Remainder = %d\n", mod );
    return 0;
}