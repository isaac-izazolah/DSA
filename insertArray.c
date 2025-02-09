#include <stdio.h>

#define MAX_VALUES 100

int main() {
    int values[MAX_VALUES + 1]; // Increased size to allow insertion
    int i, num, pos;

    // Input values
    printf("Enter %d values:\n", MAX_VALUES);
    for (i = 0; i < MAX_VALUES; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &values[i]);
    }

    // Input element to insert
    printf("\nEnter value to insert: ");
    scanf("%d", &num);
    printf("Enter position (0 to %d): ", MAX_VALUES);
    scanf("%d", &pos);

    if (pos < 0 || pos > MAX_VALUES) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the right
        for (i = MAX_VALUES; i > pos; i--) {
            values[i] = values[i - 1];
        }
        values[pos] = num;
        printf("\nValue inserted successfully.\n");
    }

    // Traverse and display values
    printf("\nTraversing the array:\n");
    for (i = 0; i <= MAX_VALUES; i++) {
        printf("Index %d: Value %d\n", i, values[i]);
    }

    return 0;
}
