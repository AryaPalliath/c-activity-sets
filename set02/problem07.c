#include <stdio.h>

typedef struct _triangle
 {
    float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

int main() 
{
    Triangle my_triangle = input_triangle();

    find_area(&my_triangle);

    output(my_triangle);

    return 0;
}

Triangle input_triangle()
 {
    Triangle t;
    printf("Enter the base of the triangle: ");
    scanf("%f", &t.base);

    printf("Enter the altitude of the triangle: ");
    scanf("%f", &t.altitude);

    return t;
}

void find_area(Triangle *t)
 {
    t->area = 0.5 * t->base * t->altitude;
}

void output(Triangle t) 
{
    printf("The area of the triangle with base = %.6f and altitude = %.6f is %.6f\n", t.base, t.altitude, t.area);
}
