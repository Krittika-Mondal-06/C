#include <stdio.h>

typedef struct {
    double real;
    double imag;
} complex;

complex readComplex() {
    complex num;
    printf("Enter the real part: ");
    scanf("%lf", &num.real);
    printf("Enter the imaginary part: ");
    scanf("%lf", &num.imag);
    return num;
}

complex addComplex(complex num1, complex num2) {
    complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

complex subtractComplex(complex num1, complex num2) {
    complex result;
    result.real = num1.real - num2.real;
    result.imag = num1.imag - num2.imag;
    return result;
}

void printComplex(complex num) {
    printf("%.2lf + %.2lfi\n", num.real, num.imag);
}

int main() {
    complex num1, num2, sum, difference;

    printf("Enter the first complex number:\n");
    num1 = readComplex();

    printf("Enter the second complex number:\n");
    num2 = readComplex();

    sum = addComplex(num1, num2);
    difference = subtractComplex(num1, num2);

    printf("Sum: ");
    printComplex(sum);

    printf("Difference: ");
    printComplex(difference);

    return 0;
}