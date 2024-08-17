#include <stdio.h>

#define size 10
int main() {
    int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *startPtr = arr;
    int *endPtr = arr + size - 1;

    while (startPtr < endPtr) {
        int temp = *startPtr;
        *startPtr = *endPtr;
        *endPtr = temp;
        startPtr++;
        endPtr--;
    }
    printf("\nReversed Array: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n\n");
    
    return 0;
}