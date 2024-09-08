#include <stdio.h>
int main() {
float num1, num2, num3, sum, average;
// Input three numbers
printf("Enter three numbers: ");
scanf("%f %f %f", &num1, &num2, &num3);
// Calculate sum
sum = num1 + num2 + num3;
// Calculate average
average = sum / 3;
// Print sum and average
printf("Sum of the three numbers = %.2f\n", sum);
printf("Average of the three numbers = %.2f\n", average);
return 0;
}
