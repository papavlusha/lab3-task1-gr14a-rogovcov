/* program.c */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int len;

  len = rand() % 100;

  char string1[len];
  char string2[len];

  // generation of 2 random strings
  for (int i = 0; i < len; i++) {
    string1[i] = rand() % 26 + 'a';
  }

  for (int i = 0; i < len; i++) {
    string2[i] = rand() % 26 + 'a';
  }

  string1[len] = '\0';
  string2[len] = '\0';

  printf("String 1: %s\n", string1);
  printf("String 2: %s\n", string2);

  len = len << 1;

  char string3[len];

  // cycle of generating 3-d string
  for (int i = 0; i < len; i++) {
    string3[i * 2] = string1[i];
    string3[i * 2 + 1] = string2[i];
  }

  // output
  printf("Answer is: "
         "%s\n",
         string3);

  return 0;
}