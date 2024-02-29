#include <stdio.h>
#include <string.h>

// Function to take input for the main string and substring
void input_string(char* a, char* b) {
    printf("Enter the main string: ");
    scanf("%s", a);
    printf("Enter the substring: ");
    scanf("%s", b);
}

// Function to find the index of a substring in a string
int sub_str_index(char* string, char* substring) {
    int len_str = strlen(string);
    int len_sub = strlen(substring);

    for (int i = 0; i <= len_str - len_sub; i++) {
        int j;
        for (j = 0; j < len_sub; j++) {
            if (string[i + j] != substring[j]) {
                break;
            }
        }
        if (j == len_sub) {
            return i;
        }
    }

    return -1; // Substring not found
}

// Function to output the result
void output(char* string, char* substring, int index) {
    printf("The index of '%s' in '%s' is %d\n", substring, string, index);
}

// Main function
int main() {
    char main_string[100], substring[50];
    input_string(main_string, substring);

    int index = sub_str_index(main_string, substring);

    output(main_string, substring, index);

    return 0;
}
