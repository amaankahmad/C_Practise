/*
 * @Author: Amaan Ahmad
 * @Date:   2020-03-04T23:06:48+00:00
 * @Filename: Ex1.3.c
 * @Last modified by:   Amaan Ahmad
 * @Last modified time: 2020-03-04 T23:52:06+00:00
 * @Copyright: @ 2020 Imperial. All rights reserved
 */

#include <stdio.h>

int main() {
  int number;
    printf("Choose a number: ");
    scanf("%d",&number);
    printf("\nThe hexadecimal version of %d is %x\n",number,number);
  return 0;
}


//   int decimal, hexa, remainder;
//   int upper;
//   char quotient;
//   char A,B,C,D,E,F;
//   printf("Enter any decimal number: ");
//   scanf("%d",&decimal);
//   upper=15;
//   hexa=decimal;
//   if (hexa=10) quotient = A;
//   if (hexa = 11) quotient = B;
//   if (hexa = 12) quotient = C;
//   if (hexa = 13) quotient = D;
//   if (hexa = 14) quotient = E;
//   if (hexa = 15) quotient = F;
//
//   for (hexa<9;;) {
//     printf("Equivalent hexadecimal for %d is:",hexa);}
//   for (hexa>9;hexa<=upper;) {
//     printf("Equivalent hexadecimal for %c is:",quotient);}
//     for (hexa>upper;remainder=hexa-15;) {
//       printf("Equivalent hexadecimal for %c%d is: ",quotient,remainder);}
// return 0;
// }
