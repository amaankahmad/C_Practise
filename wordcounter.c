/*
 * @Author: Amaan Karim Ahmad <amaankahmad>
 * @Date:   28-03-2020
 * @Filename: wordcounter.c
 * @Last modified by:   amaankahmad
 * @Last modified time: 28-03-2020
 * @Copyright: @ 2020 Imperial. All rights reserved
 */

#include <stdio.h>
#define INWORD 1 //inside a word
#define NOTINWORD 0 //not inside a word

int main(int argc, char *argv[]) {
  int c, nl, nw, nc, state;
  state = NOTINWORD;
  nl = nw = nc = 0; //new line, new word, new character
  while ((c = getchar()) !=EOF) {
    ++nc;
    if (c == '\n') {
      ++nl;
    }
    if (c == ' '|| c == '\n' || c == '\t') {
      state = NOTINWORD;
    }
    else if (state == NOTINWORD) {
      state = INWORD;
      ++nw;
    }
  }
  printf("\nlines: %d  \nwords:%d \ncharacters:%d \n", nl, nw, nc);
  return 0;
}
