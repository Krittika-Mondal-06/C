#include <stdio.h>
#include <math.h>
int is_prime(int num)
{
if (num <= 1)
{
return 0; // Not prime
}
for (int i = 2; i * i <= num; i++)
{
if (num % i == 0) {
return 0; // Not prime
}
}
return 1; // Prime
}
int is_armstrong(int num)
{
int original = num;
int count = 0, sum = 0;
while (num > 0)
{
num /= 10;
count++;
}
num = original;
while (num > 0)
{
int digit = num % 10;
sum += pow(digit, count);
num /= 10;
}
return sum == original;
}
int is_perfect(int num)
{
int sum = 0;
for (int i = 1; i < num; i++)
{
if (num % i == 0)

{
sum += i;
}
}
return sum == num;
}
int main()
{
int num;
printf("Enter a number: ");
scanf("%d", &num);
if (is_prime(num))
{
printf("%d is a prime number.\n", num);
}
if (is_armstrong(num))
{
printf("%d is an Armstrong number.\n", num);
}
if (is_perfect(num))
{
printf("%d is a perfect number.\n", num);
}
return 0;
}