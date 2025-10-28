//WAPC to input five integers from the user. Calculate and print the average.
#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    float avg;

    printf("Enter five integers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    avg = (num1 + num2 + num3 + num4 + num5) / 5.0;
    printf("Average = %.2f\n", avg);

    return 0;
}
