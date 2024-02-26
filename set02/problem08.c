#include <stdio.h>

typedef struct _triangle {
    float base, altitude, area;
} Triangle;

int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main() {
    int num_triangles = input_n();

    Triangle triangles[num_triangles];
    input_n_triangles(num_triangles, triangles);

    find_n_areas(num_triangles, triangles);

    Triangle smallest = find_smallest_triangle(num_triangles, triangles);

    output(num_triangles, triangles, smallest);

    return 0;
}

int input_n() {
    int n;
    printf("Enter the number of triangles: ");
    scanf("%d", &n);
    return n;
}

Triangle input_triangle() {
    Triangle t;
    printf("Enter the base of the triangle: ");
    scanf("%f", &t.base);

    printf("Enter the altitude of the triangle: ");
    scanf("%f", &t.altitude);

    return t;
}

void input_n_triangles(int n, Triangle t[n]) {
    for (int i = 0; i < n; ++i) {
        printf("Enter details for triangle %d:\n", i + 1);
        t[i] = input_triangle();
    }
}

void find_area(Triangle *t) {
    t->area = 0.5 * t->base * t->altitude;
}

void find_n_areas(int n, Triangle t[n]) {
    for (int i = 0; i < n; ++i) {
        find_area(&t[i]);
    }
}

Triangle find_smallest_triangle(int n, Triangle t[n]) {
    Triangle smallest = t[0];
    for (int i = 1; i < n; ++i) {
        if (t[i].area < smallest.area) {
            smallest = t[i];
        }
    }
    return smallest;
}

void output(int n, Triangle t[n], Triangle smallest) {
    printf("The smallest triangle out of triangles with base and height is the triangle having base %.2f, height %.2f, and area %.2f\n", smallest.base, smallest.altitude, smallest.area);
}

