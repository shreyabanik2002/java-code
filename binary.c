#include <stdio.h>

int binarySearch(int arr[], int n, int item) {
    int beg = 0, end = n - 1, mid;

    while (beg <= end) {
        mid = (beg + end) / 2;

        if (arr[mid] == item) {
            return mid;
        } else if (arr[mid] > item) {
            end = mid - 1;
        } else {
            beg = mid + 1;
        }
    }

    return -1; // Item not found
}

int main() {
    int size, item;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int a[size];

    // Get the elements of the array from the user
    printf("Enter the sorted elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    // Get the item to search from the user
    printf("Enter the item to search: ");
    scanf("%d", &item);

    int result = binarySearch(a, size, item);

    if (result != -1) {
        printf("Item found at index %d\n", result);
    } else {
        printf("Item not found\n");
    }

    return 0;
}
