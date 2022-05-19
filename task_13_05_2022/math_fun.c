#include <stdio.h>
float circle_area(float radius)
{
    float area = (3.14) * (radius) * (radius);
}
float circle_perimeter(float radius)
{
    float perimeter = 2 * (3.14) * radius;
}

int square_area(int side)
{
    int area = side * side;
}
int square_perimeter(int side)
{
    int perimeter = 4 * (side);
}
int rect_area(int len, int width)
{
    int area = (len * width);
}
int rect_perimeter(int len, int width)
{
    int perimeter = 2 * (len + width);
}
int right_angle_triangle_area(int base, int perpendicular)
{
    int area = (base * perpendicular) / 2;
}
int right_angle_triangle_perimeter(int base, int perpendicular, int hypothesis)
{
    int perimeter = (base + perpendicular + hypothesis);
}
int main()
{
    float radius = 4;
    printf("Area of the circle is: %.2f\n", circle_area(radius));
    printf("perimeter of circle is : %.2f\n", circle_perimeter(radius));
    int side = 6;
    printf("Area of the square is: %d\n", square_area(side));
        printf("perimeter of the square is: %d\n", square_perimeter(side));

    int len = 3, breadth = 6;
    printf(" Area of the rectangle is : %d\n", rect_area(len, breadth));
        printf(" perimeter of the rectangle is : %d\n", rect_area(len, breadth));

    int base = 3, perpendicular = 4, hypothesis =10;
    printf("Area of right angle triangle is : %d\n", right_angle_triangle_area(base, perpendicular));
        printf("perimeter of right angle triangle is : %d\n", right_angle_triangle_perimeter(base, perpendicular,hypothesis));

    return 0;
}