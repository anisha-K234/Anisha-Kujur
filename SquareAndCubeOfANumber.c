//WAPC to input an integer. Calculate and display the square and cube of the number.
#include <stdio.h>

int main() 
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Square of %d = %d\n", num, num * num);
    printf("Cube of %d = %d\n", num, num * num * num);

    return 0;
}
