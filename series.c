//WAPC to display the following series of numbers: 1, 2, 4, 8, …, n-terms. Here, ‘n’ is user input.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of terms n: ");
    scanf("%d", &n);
    int val = 1;
    for (int i = 1; i <= n; ++i)
    {
        printf("%d ", val);
        val *= 2; // multiply by 2
    }
    return 0;
}