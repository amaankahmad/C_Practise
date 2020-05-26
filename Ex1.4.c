/*
 * @Author: Amaan Ahmad
 * @Date:   2020-03-05T10:53:43+00:00
 * @Filename: Ex1.4.c
 * @Last modified by:   Amaan Ahmad
 * @Last modified time: 2020-03-05 T17:41:33+00:00
 * @Copyright: @ 2020 Imperial. All rights reserved
 */

#include <stdio.h>

int main() {
  int hours,mins;
  int upper, remainder;
  int valid;

  valid = 0;

//inputs
  while (!valid) {
    printf("\nTime of day:\nWhat hour is it? (between 0 and 23)\t");
    scanf("%d", &hours);
    printf("\nWhat minute is it? (between 1 and 59)\t");
    scanf("%d", &mins);
    if (mins>0&&mins<60&&hours>-1&&hours<24) {
      valid = 1;
    }
  }

  remainder =60-mins;

//hour cases
  if (hours>12) {upper=hours-11;}
  else if (hours<12) {upper=hours+1;}
  else {hours=12,upper=1;}

//minute cases
  if (mins>1&&mins<30) {
    printf("\nThe time is %d minutes past %d!\n\n", mins, hours);}
    else if (mins>30&&mins<59) {
        printf("\nThe time is %d minutes to %d!\n\n", remainder, upper); }
    else if (mins==1) {
      printf("\nThe time is %d minute past %d!\n\n", mins, hours); }
    else if (mins==59) {
      printf("\nThe time is %d minute to %d!\n\n", remainder, upper); }
  else {
      while(mins==30) {
        printf("\nThe time is half past %d!\n\n",hours);
        mins++;
        valid = 0;
      }
  }

  return 0;
}
