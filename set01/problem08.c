#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n], int sum);

int main() {
    int size, sum;

    size = input_array_size();

    int numbers[size];

    input_array(size, numbers);

    sum = sum_n_array(size, numbers);

    output(size, numbers, sum);

    return 0;
}

int input_array_size() {
    int size;
    printf("Input array size: ");
    scanf("%d", &size);
    return size;
}

void input_array(int n, int a[n]) {
    printf("Input the array:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
}

int sum_n_array(int n, int a[n]) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
    }
    return sum;
}

void output(int n, int a[n], int sum) {
    printf("The sum of ");
    for (int i = 0; i < n; ++i) {
        printf("%d", a[i]);
        if (i < n - 1) {
            printf("+");
        }
    }
    printf(" is %d\n", sum);
}
