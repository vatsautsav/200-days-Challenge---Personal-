// Write a function to declare printHello function and print "Hello !!" 3 times.

#include<stdio.h>

// declaration/prototype
void printHello();

int main () {
    printHello();  //function call
    printHello();
    printHello();
    return 0;
}

// function definition
void printHello() {
    printf("Hello !! \n");
    printf("This is Utsav Vatsa \n");
}