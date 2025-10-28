//WAPC to input an array of ‘n’ elements from the user. Find and display the second highest element of the array.
#include <stdio.h>

int main() {
    int n, i, first, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] < first)
        {
            second = arr[i];
        }
    }

    printf("The second highest element is %d\n", second);

    return 0;
}
