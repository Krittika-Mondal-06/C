#include <stdio.h>
void swap_by_value(int a, int b) {
int temp;
temp = a;
a = b;
b = temp;
printf("Inside swap_by_value: a = %d, b = %d\n", a, b);
}
void swap_by_reference(int *a, int *b) {
int temp;
temp = *a;
*a = *b;
*b = temp;
printf("Inside swap_by_reference: a = %d, b = %d\n", *a, *b);
}
int main()
{
int x, y;
printf("Enter the first number: ");
scanf("%d", &x);
printf("Enter the second number: ");
scanf("%d", &y);
printf("Before swapping:\n");
printf("x = %d, y = %d\n", x, y);
swap_by_value(x, y);
printf("After swapping (call-by-value): x = %d, y = %d\n", x, y);
swap_by_reference(&x, &y);
printf("After swapping (call-by-reference): x = %d, y = %d\n", x, y);
return 0;
}