#include <stdio.h>
#include <stdint.h>

int sum(int num1, int num2) {
  int result = num1 + num2;
  return result;
}

void main() {
  int number_one, number_two;

  printf("Please input first number and press enter: ");
  scanf("%d", &number_one);
  printf("Please input second number and press enter: ");
  scanf("%d", &number_two);
  printf("The result is %d",  sum(number_one, number_two));
}