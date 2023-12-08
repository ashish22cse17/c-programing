#include <stdio.h>

int main() {
    int arr[] = {3, 2, 6, 1, 8, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0];
    int min_pos = 0;
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
            min_pos = i;
        }
    }
    
    printf("The smallest element in the array is %d, found at position %d.\n", min, min_pos);
    
    return 0;
}
