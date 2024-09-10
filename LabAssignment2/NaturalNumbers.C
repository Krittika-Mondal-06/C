#include <stdio.h>
int sum_of_n(int n)
{
if (n == 0)
{
return 0;
} else {
return n + sum_of_n(n - 1);
}
}
int main()
{
int n = 20;
int result = sum_of_n(n);
printf("The sum of the first %d natural numbers is %d\n", n, result);
return 0;
}