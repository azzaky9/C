#include <stdio.h>

char single_quote = 'A';
int x = 20, y = 11, z = 20;
float floating_point = 3.0;

// %c -> char
// %d -> number
// %f -> float

int main() {
  printf("the result of the variable is: %d\n",  x + y + z);
  printf("char is %c\n", single_quote);
  printf("float is %f\n", floating_point);
  
  return 0;
}