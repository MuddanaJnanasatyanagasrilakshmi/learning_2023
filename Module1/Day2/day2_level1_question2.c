#include <stdio.h>
void swap(void *a, void *b, size_t size) {
    char *temp = (char *)malloc(size);
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
    free(temp);
}
int main() {
    int a = 10, b = 20;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(a));
    printf("After swap: a = %d, b = %d\n", a, b);

    float x = 3.14, y = 2.71;
    printf("Before swap: x = %.2f, y = %.2f\n", x, y);
    swap(&x, &y, sizeof(x));
    printf("After swap: x = %.2f, y = %.2f\n", x, y);

    char c1 = 'A', c2 = 'B';
    printf("Before swap: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2, sizeof(c1));
    printf("After swap: c1 = %c, c2 = %c\n", c1, c2);
    return 0;
}