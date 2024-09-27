#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertion_sort(int s[], int n) {
    int i, j;  /* counters */

    for (i = 1; i < n; i++) {
        j = i;
        while (j > 0 && s[j] < s[j - 1]) {
            swap(&s[j], &s[j - 1]);
            j = j - 1;
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
