// UB-LB+1
// UpperBound , LowerBound
#include <stdio.h>

int main() {
    int array[100]; // Fixed-size array (you can change the size as needed)
    int size;       // Current size of the array
    int elementToDelete; // Element to delete
    int i, j;

    // Ask the user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Get the elements from the user
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Print the original array
    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Ask the user for the element to delete
    printf("Enter the element to delete: ");
    scanf("%d", &elementToDelete);

    // Find the element and delete it
    for (i = 0; i < size; i++) {
        if (array[i] == elementToDelete) {
            // Shift elements to the left
            for (j = i; j < size - 1; j++) {
                array[j] = array[j + 1];
            }
            size--; // Decrease the size of the array
            i--; // Adjust index to check the new element at this position
        }
    }

    // Print the updated array
    printf("Updated array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}