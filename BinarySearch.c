//WAPC to initialize the array with 10 integers of your choice. Input an integer from the user. Check and display whether or not the input entered by the user is present in the array or not. Use the binary search technique (Hint: Make sure the array elements are sorted).
#include <stdio.h>

int main() {
    int arr[10], n, i, search, low, high, mid, found = 0;

    printf("Enter 10 sorted elements:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    low = 0;
    high = 9;

    while(low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid] == search)
        {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        }
        else if(arr[mid] < search)
        {
            low = mid + 1;
        } else
        {
            high = mid - 1;
        }
    }

    if(!found)
        printf("Element not found.\n");

    return 0;
}