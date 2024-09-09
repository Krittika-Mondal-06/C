#include<stdio.h>
int main()
{
int a;
printf("Enter a number:");
scanf("%d",&a);
if(a%2==0)
{
printf("The number entered by the user is even %d\n",a);
}
else
{
printf("The number entered by the user is odd %d\n",a);
}
return 0;
}