#include <stdio.h>

int binary_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Find the middle index

        if (arr[mid] == target) {
            return mid; // Return the index of the target
        } else if (arr[mid] < target) {
            left = mid + 1; // Narrow the search to the upper half
        } else {
            right = mid - 1; // Narrow the search to the lower half
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // Must be sorted for binary search
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    int result = binary_search(arr, size, target);
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}