//WAPC to input a positive integer from the user. Find and display the factorial of the number.
#include <stdio.h>

int main() {
    int n;
    float factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) 
    {
         printf("Factorial not defined for negative\n"); 
         
    }
    for (int i = 1; i <= n; ++i) 
    factorial *= i;
    printf("Factorial of %d = %f\n", n, factorial);
    return 0;
}

