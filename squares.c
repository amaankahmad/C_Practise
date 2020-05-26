#include <stdio.h>
int main() {

int value, value_squared; int lower, upper, step;

lower = 0; upper = 150; step = 5;

value = lower;

while (value <= upper) {
  value_squared = value*value;
  printf("%d\t%d\n",value,value_squared);
  value = value + step;
  }
}
