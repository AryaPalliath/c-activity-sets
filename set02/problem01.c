#include <stdio.h>

void input(float *base, float *height);
void find_area(float base, float height, float *area);
void output(float base, float height, float area);

int main() {
    float base, height, area;

    input(&base, &height);

    find_area(base, height, &area);

    output(base, height, area);

    return 0;
}

void input(float *base, float *height) {
    printf("Enter the base: ");
    scanf("%f", base);

    printf("Enter the height: ");
    scanf("%f", height);
}

void find_area(float base, float height, float *area) {
    *area = 0.5 * base * height;
}

void output(float base, float height, float area) {
    printf("The area of the triangle with base %.6f and height %.6f is %.6f\n", base, height, area);
}
