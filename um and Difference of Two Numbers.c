#include <stdio.h>

int main() {
    // Declare variables: two of type int and two of type float.
    int num1, num2;
    float fnum1, fnum2;

    // Read 2 lines of input from stdin and initialize your 4 variables.
    // The first line contains two integers.
    scanf("%d %d", &num1, &num2);
    // The second line contains two floating point numbers.
    scanf("%f %f", &fnum1, &fnum2);

    // Print the sum and difference of two int variables on a new line.
    printf("%d %d\n", num1 + num2, num1 - num2);

    // Print the sum and difference of two float variables rounded to one decimal place on a new line.
    // The "%.1f" format specifier is used to print a float with one decimal place.
    printf("%.1f %.1f\n", fnum1 + fnum2, fnum1 - fnum2);

    return 0;
}
