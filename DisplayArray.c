#include <stdio.h>

#define MAX_VALUES 100

void displayArray(int values[], int size) {
    printf("\nArray values:\n");
    for (int i = 0; i < size; i++) {
        printf("Index %d: Value %d\n", i, values[i]);
    }
}

void displaySpecificValue(int values[], int size) {
    int index;
    char choice;
    do {
        printf("\nEnter index to display (0 to %d): ", size - 1);
        scanf("%d", &index);
        if (index < 0 || index >= size) {
            printf("Invalid index! Please enter a value between 0 and %d.\n", size - 1);
        } else {
            printf("Value at index %d: %d\n", index, values[index]);
        }
        while (getchar() != '\n'); // Clear input buffer
        printf("Do you want to search again? (y/n): ");
        scanf("%c", &choice);
    } while (choice == 'y' || choice == 'Y');
}

int main() {
    int values[MAX_VALUES];
    int i, size;

    // Input values
    printf("Enter number of values (max %d): ", MAX_VALUES);
    scanf("%d", &size);
    if (size > MAX_VALUES || size <= 0) {
        printf("Invalid size! Please enter a number between 1 and %d.\n", MAX_VALUES);
        return 1;
    }

    printf("Enter %d values:\n", size);
    for (i = 0; i < size; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &values[i]);
    }

    // Display the array
    displayArray(values, size);
    
    // Display a specific value with multiple searches allowed
    displaySpecificValue(values, size);
    
    return 0;
}
