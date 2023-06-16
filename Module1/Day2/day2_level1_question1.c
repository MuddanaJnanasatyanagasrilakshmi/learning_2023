#include <stdio.h>
#include <stdint.h>
void printExponent(double x) {
	int i;
    // Get the address of the double variable
    uint64_t* ptr = (uint64_t*)&x;
    
    // Extract the exponent part using bit manipulation
    uint16_t exponent = (*ptr >> 52) & 0x7FF;
    
    // Print the exponent in hexadecimal format
    printf("Exponent (Hex): 0x%X\n", exponent);
    
    // Print the exponent in binary format
    printf("Exponent (Binary): 0b");
    for (i = 10; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);
    
    return 0;
}

