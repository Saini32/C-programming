#include <stdio.h>

int main() {
    // Pattern 1
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    // Output:
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    // Pattern 2
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    // Output:
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    // Pattern 3
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    // Output:
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    // 5 4 3 2 1

    // Pattern 4
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    // Output:
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5

    // Pattern 5
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    // Output:
    // 5 5 5 5 5
    // 4 4 4 4
    // 3 3 3
    // 2 2
    // 1

    // Pattern 6
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    for (int i = 4; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    // Output:
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    // Pattern 7
    for (int i = 1; i <= 5; i++) {
        for (int j = 5; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    // Output:
    // 5 4 3 2 1
    // 4 3 2 1
    // 3 2 1
    // 2 1
    // 1

    // Pattern 8 (same as Pattern 6)
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    for (int i = 4; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    // Output:
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    // Pattern 9
    for (int i = 1; i <= 5; i++) {
        for (int j = 5; j >= i; j--) {
            printf("%d ", i);
        }
        printf("\n");
    }
    // Output:
    // 1 1 1 1 1
    // 2 2 2 2
    // 3 3 3
    // 4 4
    // 5

    // Pattern 10
    for (int i = 5; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    // Output:
    // 5 4 3 2 1
    // 4 3 2 1
    // 3 2 1
    // 2 1
    // 1

    return 0;
}
