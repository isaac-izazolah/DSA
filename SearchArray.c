#include <stdio.h>

#define MAX_VALUES 100

int main() {
    int values[MAX_VALUES];
    int i, pos, searchValue, found = 0;

    // Input values
    printf("Enter %d values:\n", MAX_VALUES);
    for (i = 0; i < MAX_VALUES; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &values[i]);
    }

    // Input value to search
    printf("\nEnter value to search: ");
    scanf("%d", &searchValue);

    // Search for the value
    for (i = 0; i < MAX_VALUES; i++) {
        if (values[i] == searchValue) {
            printf("Value found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Value not found in the array.\n");
    }

    // Input position to delete
    printf("\nEnter position to delete (0 to %d): ", MAX_VALUES - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= MAX_VALUES) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the left
        for (i = pos; i < MAX_VALUES - 1; i++) {
            values[i] = values[i + 1];
        }
        printf("\nValue deleted successfully.\n");
    }

    // Traverse and display values
    printf("\nTraversing the array:\n");
    for (i = 0; i < MAX_VALUES - 1; i++) {
        printf("Index %d: Value %d\n", i, values[i]);
    }

    return 0;
}
