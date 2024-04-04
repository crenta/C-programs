#include <stdio.h>

int main() {
    int integer_variable;
    float float_variable;
    double double_variable;
    char single_char;
    char string[100]; // Array of chars (string), max length 99 characters + null terminator

    // Integer
    printf("Enter an integer: ");
    scanf("%d", &integer_variable);
    printf("You entered the integer: %d\n\n", integer_variable);

    // Float
    printf("Enter a float: ");
    scanf("%f", &float_variable);
    printf("You entered the float: %f\n\n", float_variable);

    // Double
    printf("Enter a double: ");
    scanf("%lf", &double_variable);
    printf("You entered the double: %lf\n\n", double_variable);

    // Char
    printf("Enter a single character: ");
    scanf(" %c", &single_char); // Notice the space before %c to catch any previous newline character
    printf("You entered the character: %c\n\n", single_char);

    // String (character array)
    printf("Enter a string: ");
    scanf("%s", string); // No & needed for an array
    printf("You entered the string: %s\n", string);

    return 0;
}