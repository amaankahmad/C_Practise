/*
 * @Author: Amaan Karim Ahmad <amaankahmad>
 * @Date:   13-03-2020
 * @Filename: recursivefactorial.c
 * @Last modified by:   amaankahmad
 * @Last modified time: 27-03-2020
 * @Copyright: @ 2020 Imperial. All rights reserved
 */

#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    if (n==0) {
      return 1;
    }
    else {
      return n*factorial(n-1);
    }
  }

int main () {
  int n=0, result=0;
  printf("What factorial do you want?:  \n");
  scanf("%d", &n);
  result = factorial(n);
  printf("The factorial of %d is %d\n", n, result);
  return 0;
}
