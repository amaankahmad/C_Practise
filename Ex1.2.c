// Ex 1.2
//
// Created by Amaan Ahmad on 04.03.2020
// Copyright @ 2020 Imperial. All rights reserved

#include <stdio.h>
#include <stdlib.h>

int main() {
  int x,y;
  printf("Input 2 numbers:\nEnter first number: \n");
  scanf("%d", &x); //stores first value
  printf("Enter second number: \n");
  scanf("%d", &y); //stores second value
  if (x<y) printf("%d is greater than %d\n",y,x);
  else (x>y); printf("%d is greater than %d\n",x,y);

return 0;
}
