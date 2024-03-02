#include <stdio.h>
#include <math.h>

typedef struct point {
  float x, y;
} Point;

typedef struct line {
  Point p1, p2;
  float distance;
} Line;

Point input_point();
Line input_line();
float find_length(Line l);
void output(Line l);

Point input_point() {
  Point p;
  printf("Enter point coordinates (x y): ");
  scanf("%f %f", &p.x, &p.y);
  return p;
}

Line input_line() {
  Line l;
  printf("Enter two points for the line:\n");
  l.p1 = input_point();
  l.p2 = input_point();
  return l;
}

float find_length(Line l) {
  // Calculate the distance using the distance formula
  float dx = l.p2.x - l.p1.x;
  float dy = l.p2.y - l.p1.y;
  l.distance = sqrt(dx * dx + dy * dy);
  return l.distance;
}

void output(Line l) {
  printf("The distance between the points (%.6f,%.6f) and (%.6f,%.6f) is %.6f\n",
         l.p1.x, l.p1.y, l.p2.x, l.p2.y, l.distance);
}

int main() {
  Line line = input_line();
  find_length(line);
  output(line);
  return 0;
}
