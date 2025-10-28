//WAPC to input a positive integer. Assume that the number is of 3 digits. Check and print if the number is Armstrong or not. An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits, for example, 153 = 1³ + 5³ + 3³.
#include <stdio.h>

int main() {
    int n;
    printf("Enter a 3-digit number: ");
    scanf("%d", &n);
    if (n < 100 || n > 999)
    {
        printf("Not a 3-digit number\n");
    }
    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;
    int sum = a*a*a + b*b*b + c*c*c;
    if (sum == n)
    {
        printf("%d is an Armstrong number\n", n);
    }
    else printf("%d is not an Armstrong number\n", n);
    return 0;
}