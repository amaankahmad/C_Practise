/*
 * @Author: Amaan Karim Ahmad <amaankahmad>
 * @Date:   27-03-2020
 * @Filename: recursivefibonacci.c
 * @Last modified by:   amaankahmad
 * @Last modified time: 27-03-2020
 * @Copyright: @ 2020 Imperial. All rights reserved
 */

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
  if (n==0) {
    return 1;
  }
  else if (n==1) {
    return 1;
  }
  else {
    return fibonacci(n-1)+fibonacci(n-2);
  }
}

int main() {
  int i, n=900*1.5;
  //if fibonacci goes until first over 900, the next must be greater than 1.5*900
  for(i = 0; i < n; i++) {
    if (fibonacci(i)<=n) {
      printf("%d ", fibonacci(i));
      }
    else {
      return 0;
      }
    }
    printf("\n");
  }

// int main() {
//   int i, n=0, valid=0;
//
// //check input is valid for fibonacci sequence
//   while (!valid) {
//
//     printf("Which Fibonacci number do you want: ");
//     scanf("%d", &n);
//     //checks if answer is valid
//     if (n>=0) {
//       valid = 1;
//     }
//     else {
//       printf("\nThe Fibonacci number must be greater than 0\n");
//     }
//   }
//
//   for(i = 0; i < n; i++) {
//         printf("%d ", fibonacci(i));
//   }
//   printf("\n");
// }
