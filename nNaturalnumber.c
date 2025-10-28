//WAPC to display the first ‘n’ natural numbers where ‘n’ is the user input.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value for n: ");
    scanf("%d", &n);
    printf(" First %d Natural number: \n", n);
    for (int i = 1; i <= n; ++i)
    {
        printf("%d ", i);
    }
    return 0;
}