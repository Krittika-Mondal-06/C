#include <stdio.h>
int main()
{
float celcius;
printf("Enter the value for celcius:");
scanf("%f",&celcius);
float far =(celcius*9/5)+32;
printf("\n The value of this celcius temp to farenheit temp is %f",far);
return 0;
}