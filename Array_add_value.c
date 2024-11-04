#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = NULL; // Pointer to hold the array
    int size;          // Current size of the array
    int newElement;    // Element to add

    // Ask the user for the initial size of the array
    printf("Enter the initial size of the array: ");
    scanf("%d", &size);

    // Allocate memory for the array
    array = (int *)malloc(size * sizeof(int));

    // Check if memory allocation was successful
    if (array == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Get the initial elements from the user
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Ask the user for the new element to add
    printf("Enter the new element to add: ");
    scanf("%d", &newElement);

    // Increase the size of the array
    size++;
    array = (int *)realloc(array, size * sizeof(int));

    // Check if memory reallocation was successful
    if (array == NULL) {
        fprintf(stderr, "Memory reallocation failed\n");
        return 1;
    }

    // Add the new element
    array[size - 1] = newElement;

    // Print the updated array
    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(array);

    return 0;
}