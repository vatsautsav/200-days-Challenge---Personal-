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