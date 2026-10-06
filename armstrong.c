#include <stdio.h>
#include <math.h>

int main() {
    int num, d1, d2, d3,d4, result;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    // Extract digits
    d1 = num / 1000;          // first digit
    d2 = (num / 100) % 10;    // second digit
    d3 = (num/10) % 10;           // third digit
    d4 = num % 10;         // fourth digit

    // Calculate sum of cubes (since 4-digit number → power = 4)
    result = (d1 * d1 * d1 * d1) + (d2 * d2 * d2 * d2) + (d3 * d3 * d3 * d3) + (d4 * d4 * d4 * d4);

    // Check using if–else
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

