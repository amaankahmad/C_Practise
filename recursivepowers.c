/*
 * @Author: Amaan Karim Ahmad <amaankahmad>
 * @Date:   27-03-2020
 * @Filename: recursivepowers.c
 * @Last modified by:   amaankahmad
 * @Last modified time: 28-03-2020
 * @Copyright: @ 2020 Imperial. All rights reserved
 */

#include <stdio.h>
#include <stdlib.h>

int power(int base, int exponent) {
  if (exponent==0) {
    return 1;
  }
  else if (exponent>0) {
      return (base*power(base, exponent-1));
  }
}

int main() {
  int base=0;
  int exponent=0;
  printf("\nWhat is the base of the power you desire: \t");
  scanf("%d", &base);
  printf("\nTo what power do you want your base to be: \t");
  scanf("%d", &exponent);
  printf("\n%d to the power of %d is %d! \n", base, exponent, power(base, exponent));
  return 0;
}
