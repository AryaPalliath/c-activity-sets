#include <stdio.h>

int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main() {
    int num, sum;

    num = input_n();

    sum = sum_n_nos(num);

    output(num, sum);

    return 0;
}

int input_n() {
    int n;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    return n;
}

int sum_n_nos(int n) {
    return (n * (n + 1)) / 2;
}

void output(int n, int sum) {
    printf("The sum of all natural numbers until %d is %d\n", n, sum);
}
