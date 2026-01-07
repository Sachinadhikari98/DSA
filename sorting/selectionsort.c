#include <stdio.h>

int main() {
    int a[5] = {64, 25, 12, 22, 11}, i, j, min, temp;

    for(i = 0; i < 5-1; i++) {
        min = i;
        for(j = i+1; j < 5; j++) {
            if(a[j] < a[min])
                min = j;
        }
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }

    printf("Sorted array: ");
    for(i = 0; i < 5; i++)
        printf("%d ", a[i]);

    return 0;
}
