#include <stdio.h>

#define MAX_VALUES 100

int main() {
    int values[MAX_VALUES];
    int i;

    // Input values
    printf("Enter %d values:\n", MAX_VALUES);
    for (i = 0; i < MAX_VALUES; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &values[i]);
    }

    // Traverse and display values
    printf("\nTraversing the array:\n");
    for (i = 0; i < MAX_VALUES; i++) {
        printf("Index %d: Value %d\n", i, values[i]);
    }

    return 0;
}
