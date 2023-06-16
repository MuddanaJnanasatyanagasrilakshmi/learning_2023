#include <stdio.h>
int countSetBits(unsigned int num) {
    int count = 0;
    
    while (num > 0) {
        count += num & 1;
        num >>= 1;
    }
    
    return count;
}

int countTotalSetBits(unsigned int arr[], int size) {
    int totalSetBits = 0,i;
    for (i = 0; i < size; i++) {
        totalSetBits += countSetBits(arr[i]);
    }
    
    return totalSetBits;
}

int main() {
    unsigned int arr[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int result = countTotalSetBits(arr, size);
    
    printf("Total number of set bits: %d\n", result);
    
    return 0;
}

