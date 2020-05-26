/*
 * @Author: Amaan Ahmad
 * @Date:   2020-03-06T14:27:02+00:00
 * @Filename: fibonacci.c
 * @Last modified by:   amaankahmad
 * @Last modified time: 2020-03-08T01:00:30+00:00
 * @Copyright: @ 2020 Imperial. All rights reserved
 */

#include <stdio.h>

int main() {
  int n, F, a = 0, b = 1, i;
  int valid;

  valid = 0;

//check input is valid for fibonacci sequence
  while (!valid) {

    printf("Which Fibonacci number do you want: ");
    scanf("%d", &n);
    //checks if answer is valid
    if (n>=1) {
      valid = 1;
    }
    else {
      printf("\nThe Fibonacci number must be greater than 0\n");
    }
}
//for loop
  for (i=1;i<=n;i++) {
    printf("%d \n",a);
    F = a + b;
    a = b;
    b = F;

  }
  return 0;
}
