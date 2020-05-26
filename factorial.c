/*
 * @Author: Amaan
 * @Date: 2020-03-04 T13:25:41+00:00
 * @Last modified by:   amaankahmad
 * @Last modified time: 08-03-2020
 */

#include <stdio.h>

int main() {
  long int factorial = 1;
  int n, i, valid = 0;

  //recieve input from user
  while (!valid) {
    printf("What factorial do you want?\t");
    scanf("%d",&n);
    //checking if input is valid
    if (n>39) {
      printf("Factorial too large for this 64bit computer\n\n");
    }
    else if (n>=0) {valid = 1;}
    else {
      printf("To get a factorial, your number must be positive!\n\n");}
    }

    switch (n) {
  //base cases
    case 0:
    return 1;
    break;
    case 1:
    return 1;
    break;
    default:
    //recursive loop
      for(i = 1;i <= n; i++) {
        factorial *= i;
      }
      printf("Factorial for [%d!] is %ld\n",n,factorial); //output
    }
}
