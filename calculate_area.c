// Write functions to calculate area of a square, a circle and a rectangle.


#include<stdio.h>

float squareArea (float side);
float rectangleArea (float a, float b);
float circleArea (float rad);

int main () {
    float a = 9.0;
    float b = 11.0;
    float side = 19.0;
    float rad = 41.0;

    printf("Area of Rectangle is : %f \n", rectangleArea(a, b));
    printf("Area of Circle is : %f \n", circleArea (rad));
    printf("Area of Square is : %f \n", squareArea (side));

    return 0;
}

float squareArea (float side) {
    return side * side;
}

float rectangleArea (float a, float b) {
    return a * b;
}

float circleArea (float rad) {
    return 3.14 * rad * rad;
}
