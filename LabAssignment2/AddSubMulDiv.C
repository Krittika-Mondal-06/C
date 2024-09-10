#include <stdio.h>

int add(int a, int b) {
   return a + b;
}

int subtract(int a, int b) {
   return a - b;
}

int multiply(int a, int b) {
   return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
printf("Error: Division by zero!\n");
       return 0;
    }
    return a / b;
}

int main() {
    int num1, num2, result;
    char op; // Changed from 'operator' to 'op'

     printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

     printf("Enter an operator (+, -, *, /): ");
     scanf(" %c", &op); // Changed from 'operator' to 'op'

     switch (op) { // Changed from 'operator' to 'op'
     case '+':
     result = add(num1, num2);
     printf("%d + %d = %d\n", num1, num2, result);
     break;
       case '-':
          result = subtract(num1, num2);
          printf("%d - %d = %d\n", num1, num2, result);
          break;
          case '*':
          result = multiply(num1, num2);
          printf("%d * %d = %d\n", num1, num2, result);
          break;
          case '/':
          result = divide(num1, num2);
          if (result != 0) {
            printf("%d / %d = %d\n", num1, num2, result);
             }
            break;
            default:
        printf("Invalid operator!\n");
   }

  return 0;
}
