#include <stdio.h>
int maximum(int a, int b)
{
if (a > b)
{
return a;
}
else
{
return b;
}
}
int minimum(int a, int b)
{
if (a < b)
{
return a;
}
else
{
return b;
}
}
int main()
{
int num1, num2;
printf("Enter two numbers: ");
scanf("%d %d", &num1, &num2);
int max = maximum(num1, num2);
int min = minimum(num1, num2);
printf("Maximum number: %d\n", max);
printf("Minimum number: %d\n", min);
return 0;
}