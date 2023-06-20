#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

void readComplex(struct Complex* complex) {
    printf("Enter the real part: ");
    scanf("%f", &(complex->real));
    printf("Enter the imaginary part: ");
    scanf("%f", &(complex->imaginary));
}

void writeComplex(struct Complex complex) {
    printf("Complex number: %.2f + %.2fi\n", complex.real, complex.imaginary);
}

struct Complex addComplex(struct Complex complex1, struct Complex complex2) {
    struct Complex result;
    result.real = complex1.real + complex2.real;
    result.imaginary = complex1.imaginary + complex2.imaginary;
    return result;
}

struct Complex multiplyComplex(struct Complex complex1, struct Complex complex2) {
    struct Complex result;
    result.real = complex1.real * complex2.real - complex1.imaginary * complex2.imaginary;
    result.imaginary = complex1.real * complex2.imaginary + complex1.imaginary * complex2.real;
    return result;
}

int main() {
    struct Complex complex1, complex2, sum, product;

    printf("Enter the first complex number:\n");
    readComplex(&complex1);

    printf("Enter the second complex number:\n");
    readComplex(&complex2);

    printf("\n");

    printf("The first complex number is: ");
    writeComplex(complex1);

    printf("The second complex number is: ");
    writeComplex(complex2);

    printf("\n");

    sum = addComplex(complex1, complex2);
    printf("The sum of the two complex numbers is: ");
    writeComplex(sum);

    product = multiplyComplex(complex1, complex2);
    printf("The product of the two complex numbers is: ");
    writeComplex(product);

    return 0;
}

