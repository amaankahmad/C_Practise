/**
 * @Author: Amaan Karim Ahmad <amaankahmad>
 * @Date:   22-05-2020
 * @Filename: taxcalc.c
 * @Last modified by:   amaankahmad
 * @Last modified time: 22-05-2020
 * @Copyright: @ 2020 Imperial. All rights reserved
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  double taxes = 0;
  double hours = 0;
  double grossPay = 0;
  double netPay = 0;
  int valid = 0;

// Check if the input is valid
  while (!valid) {

    printf("Please enter your work hours for this week:\t");
    scanf("%lf", &hours);


      if (hours >= 0) {
          valid = 1;
      }
      else {
          printf("Your work hours must be positive.\n\n");
      }

  }
// Calculations for each case
  if(hours < 25) {
    grossPay = hours*12;
    netPay = grossPay*0.85;

  }
  else if(hours >=25 && hours<37.5) {
    grossPay = hours*12;
    netPay = (hours-25)*12*0.8 + 25*12*0.85;

  }
  else if(hours >=37.5 && hours<40) {
    grossPay = hours*12;
    netPay = (hours-37.5)*12*0.75 + 12.5*12*0.8 + 25*12*0.85;

  }
  else {
    grossPay = (hours-40)*18 + 40*12;
    netPay = (hours-40)*18*0.75 + 2.5*12*0.75 + 12.5*12*0.8 + 25*12*0.85;
  }
  // tax calculations and output
  taxes = grossPay - netPay;
  printf("Your gross pay is %lf\n", grossPay);
  printf("Your total taxes are %lf\n", taxes);
  printf("Your net pay are %lf\n", netPay);
}
