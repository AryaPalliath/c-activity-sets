
#include <stdio.h>

int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main() {
    int num1, num2, num3, largest;

    num1 = input();
    num2 = input();
    num3 = input();

    largest = compare(num1, num2, num3);

    output(num1, num2, num3, largest);

    return 0;
}

int input() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int compare(int a, int b, int c) {
    int largest = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    return largest;
}

void output(int a, int b, int c, int largest) {
    printf("The largest of %d, %d, and %d is %d\n", a, b, c, largest);
}
