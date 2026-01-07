#include <stdio.h>

int main() {
    int a[5] = {9, 5, 1, 4, 3}, i, key, j;

    for(i = 1; i < 5; i++) {
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    printf("Sorted array: ");
    for(i = 0; i < 5; i++)
        printf("%d ", a[i]);

    return 0;
}
