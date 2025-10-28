//WAPC to input a 4-digit number and find the sum and product of the rightmost and leftmost digits.
#include <stdio.h>

int main() {
    int number, leftmost, rightmost;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    rightmost = number % 10;
    leftmost = number / 1000;

    printf("Sum of first and last digit = %d\n", leftmost + rightmost);
    printf("Product of first and last digit = %d\n", leftmost * rightmost);

    return 0;
}
