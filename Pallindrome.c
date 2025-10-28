//WAPC to input a positive integer from the user. Check and print if the number is palindrome or not. A palindrome number is a number that remains the same when its digits are reversed, for example, 121.
#include <stdio.h>

int main() {
    int num, original, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

    while(num > 0)
    {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if(original == reversed)
        printf("Palindrome number.\n");
    else
        printf("Not a palindrome.\n");

    return 0;
}