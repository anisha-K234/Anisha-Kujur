//WAPC to input a positive integer. Check whether it is Niven or not. Niven number – A number divisible by the sum of its digits. Example: 18 ÷ (1+8) = 2
#include <stdio.h>

int main() {
    int num, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    while(temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if(sum != 0 && num % sum == 0)
    {
        printf("Niven number.\n");
    }
    else
        printf("Not a Niven number.\n");

    return 0;
}