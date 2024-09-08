#include <stdio.h>
int main() {
float a, b, x, result;
printf("Enter the values of a, b, and x: ");
scanf("%f %f %f", &a, &b, &x);
if (a * x - b == 0) {
printf("Division by zero error.\n");
} else {
result = (a * x + b) / (a * x - b);
printf("The result is: %.2f\n", result);
}
return 0;
}