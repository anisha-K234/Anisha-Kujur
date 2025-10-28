//WAPC to input a positive integer. Check and print if the number is perfect or not. A perfect number is a number which is equal to the sum of all its proper divisors (excluding itself). Example: 28 = 1 + 2 + 4 + 7 + 14
#include <stdio.h>

int main() {
    int num, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for(i = 1; i < num; i++) {
        if(num % i == 0)
            sum += i;
    }

    if(sum == num)
        printf("Perfect number.\n");
    else
        printf("Not a perfect number.\n");

    return 0;
}