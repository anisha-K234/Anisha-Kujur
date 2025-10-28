//WAPC to input a positive integer from the user. Find and display the number of digits in the number, sum of the digits of the number and product of the digits of the number.
#include <stdio.h>

int main() {
    int num, digit, sum = 0, product = 1, count = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while(num > 0)
    {
        digit = num % 10; // extract last digit
        sum += digit;
        product *= digit;
        count++;
        num /= 10; // remove last digit
    }

    printf("Digits: %d\nSum: %d\nProduct: %d\n", count, sum, product);
    return 0;
}