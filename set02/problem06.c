#include <stdio.h>
#include <string.h>

void input_string(char *str);
void str_reverse(char *str, char *rev_str);
void output(char *str, char *reverse_str);

int main()
 {
    char input_str[100];
    input_string(input_str);

    char reversed_str[100];
    str_reverse(input_str, reversed_str);

    output(input_str, reversed_str);

    return 0;
}

void input_string(char *str)
 {
    printf("Enter a string: ");
    scanf("%s", str);
}

void str_reverse(char *str, char *rev_str)
 {
    int length = strlen(str);

    for (int i = 0; i < length; ++i) {
        rev_str[i] = str[length - i - 1];
    }

    rev_str[length] = '\0'; 
}

void output(char *str, char *reverse_str) 
{
    printf("The reverse of \"%s\" is \"%s\"\n", str, reverse_str);
}
