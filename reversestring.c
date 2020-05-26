/*
 * @Author: Amaan Karim Ahmad <amaankahmad>
 * @Date:   23-03-2020
 * @Filename: reversestring.c
 * @Last modified by:   amaankahmad
 * @Last modified time: 23-03-2020
 * @Copyright: @ 2020 Imperial. All rights reserved
 */

#include <stdio.h>
#include <string.h>
#define MAXLENGTH 1000

int main() {
  	char line[MAXLENGTH]; //array holding the input sentence
    char temp; //temporary holder of letter whilst other moved in its place
  	long unsigned int i; //to hold place of letter being moved into
    long unsigned int j; //holding letter being moved

  	printf("Please enter the sentence to reverse: \n");
  	fgets(line, MAXLENGTH, stdin); //stable copying of input into array

  	j = strlen(line) - 1;

  	for (i = 0; i < strlen(line)/2; i++) {
  		temp = line[i];
  		line[i] = line[j];
  		line[j] = temp;
      j--;
  	}
  	printf("Reversed sentence: %s \n", line);
  	return 0;
}
