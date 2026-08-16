#include<stdio.h>

int main() {
    int age = 19;
    float price = 100.98;
    char grade = 'O';
    double pi = 3.145926535;

    printf("Age  : %d \n", age);
    printf("Price  : %.2f \n", price);
    printf("Grade  : %c \n", grade);
    printf("Pi  : %.5lf \n", pi);

    return 0;
}