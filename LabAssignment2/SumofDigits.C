#include <stdio.h>
int sum_of_digits(int n)
{
if (n == 0)
{
return 0;
}
else
{
return (n % 10) + sum_of_digits(n / 10);
}
}
int main()
{
int num;
printf("Enter a number: ");
scanf("%d", &num);
int result = sum_of_digits(num);
printf("The sum of the digits of %d is %d\n", num, result);
return 0;
}