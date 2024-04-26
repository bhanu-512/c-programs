#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void generatePermutations(int arr[], int start, int end) {
    if (start == end) {
        for (int i = 0; i <= end; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        for (int i = start; i <= end; i++) {
            // Swap the current element with the element at index 'start'
            swap(&arr[start], &arr[i]);

            // Recursively generate permutations for the remaining elements
            generatePermutations(arr, start + 1, end);

            // Undo the swap to backtrack and try the next possibility
            swap(&arr[start], &arr[i]);
        }
    }
}

int main() {
    int *-9\
    ', n;

    // Input: The number for which permutations need to be generated
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    // Input: The elements of the set
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
67yuik, 
    printf("Unique Permutations:\n");
    generatePermutations(arr, 0, n - 1);

    free(arr);

    return 0;
}
