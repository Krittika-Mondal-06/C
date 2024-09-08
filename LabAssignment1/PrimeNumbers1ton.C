#include <stdio.h>
int main() {
int n, num, i, count;
printf("Enter the upper limit: ");
scanf("%d", &n);
printf("Prime numbers between 1 and %d are:\n", n);
for (num = 2; num <= n; num++) {
count = 0;
for (i = 2; i <= num / 2; i++) {
if (num % i == 0) {
count++;
break;
}
}
if (count == 0) {
printf("%d ", num);
}
}
printf("\n");
return 0;
}