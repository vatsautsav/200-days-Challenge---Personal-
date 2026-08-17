// Write a program to print user's name and age given by the user.

#include<stdio.h>

int main() {
    int age;
    char name [25];
    printf("enter your age : ");
    scanf("%d", &age);
    printf("enter your name : ");
    scanf("%s", name);
    printf("Your Age is : %d \n", age);
    printf("Your Name is : %s \n", name);
    return 0;
}
