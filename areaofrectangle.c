// Write a program to take length and perimeter of a rectangle as inputs from the user and print breadth and area of the rectangle.

#include<stdio.h>

int main() {
    int length,perim,breadth,area;
    printf("Enter length :");
    scanf("%d", &length);
    printf("Enter perimeter : ");
    scanf("%d", &perim);
    breadth = (perim/2)- length;
    area = length * breadth;
    printf("Breadth is : %d \n",breadth);
    printf("Area is : %d \n",area);
    return 0;
}
