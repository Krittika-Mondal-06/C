#include<stdio.h>
int main()
{
float celsius,fahrenheit;

printf("Enter temperature in Fahrenheit:");
scanf("%f",&fahrenheit);

celsius=(fahrenheit - 32)*5/9;
printf("\nThe value of this Celsius temp to Farenheit temp is %f",celsius);
return 0;
}