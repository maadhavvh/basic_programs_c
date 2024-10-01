#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, m, n, x = 0;
    
    printf("Enter number of elements for array 1: ");
    scanf("%d", &m);
    printf("Enter number of elements for array 2: ");
    scanf("%d", &n);

    int a[m], b[n], c[m + n]; // c can hold all elements from a and b
    int isDuplicate;

    printf("Enter elements for array 1:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter elements for array 2:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    // Merging arrays without duplicates
    for (i = 0; i < m; i++) {
        c[x] = a[i];
        x++;
    }

    for (i = 0; i < n; i++) {
        // Check if b[i] is already in c
        isDuplicate = 0;
        for (int j = 0; j < x; j++) {
            if (b[i] == c[j]) {
                isDuplicate = 1; // Found a duplicate
                break;
            }
        }
        if (!isDuplicate) {
            c[x] = b[i]; // Add to merged array if not duplicate
            x++;
        }
    }

    // Output the merged array
    printf("The merged array without duplicates is: ");
    for (i = 0; i < x; i++) {
        printf("%d ", c[i]);
    }
    
    printf("\n");
    return 0;
}
