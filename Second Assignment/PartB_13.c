#include <stdio.h>
struct Square {
    float area;
};
struct Rectangle {
    float length;
    float breadth;
};
struct Shape {
    struct Square square;
    struct Rectangle rectangle;
};
int main() {
    struct Shape myShape;
    float side;
    printf("Enter the side length of the square: ");
    scanf("%f", &side);
    myShape.square.area = side * side;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%f %f", &myShape.rectangle.length, &myShape.rectangle.breadth);
    printf("Area of the square: %.2f\n", myShape.square.area);
    printf("Area of the rectangle: %.2f\n", myShape.rectangle.length * myShape.rectangle.breadth);
    return 0;
}
