#include <stdio.h>
int reverse_number(int n, int reversed)
{
if (n == 0)
{
return reversed;
}
else
{
return reverse_number(n / 10, reversed * 10 + n % 10);
}
}
int main()
{
int num;
printf("Enter an integer number: ");
scanf("%d", &num);
int reversed = reverse_number(num, 0);
printf("The reversed number is %d\n", reversed);
return 0;
}