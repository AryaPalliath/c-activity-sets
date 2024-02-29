#include <stdio.h>

// Function to take input for array size
int input_array_size() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    return n;
}

// Function to initialize array from 2 to n
void init_array(int n, int a[n]) {
    for (int i = 2; i <= n; i++) {
        a[i] = 1; // Initializing all numbers as potential primes
    }
}

// Function to perform Eratosthenes Sieve
void eratosthenes_sieve(int n, int a[n]) {
    for (int i = 2; i * i <= n; i++) {
        if (a[i] == 1) {
            for (int j = i * i; j <= n; j += i) {
                a[j] = 0; // Marking multiples of primes as not prime
            }
        }
    }
}

// Function to output prime numbers
void output(int n, int a[n]) {
    printf("Prime numbers between 2 and %d are: ", n);
    for (int i = 2; i <= n; i++) {
        if (a[i] == 1) {
            printf("%d, ", i);
        }
    }
    printf("\n");
}

// Main function
int main() {
    int n = input_array_size();
    int a[n];
    
    init_array(n, a);
    eratosthenes_sieve(n, a);
    output(n, a);

    return 0;
}
