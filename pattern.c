#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char input[100];
  printf("Enter input (like 3[a] 2[b]): ");
  fgets(input, sizeof(input), stdin);

  int i = 0;
  while (input[i] != '\0') {
    if (isdigit(input[i])) {
      int count = input[i] - '0';
      i++;
      if (input[i] == '[') {
        i++;
        char ch = input[i];
        for (int j = 0; j < count; j++) {
          printf("%c", ch);
        }
        i++;
      }
    }
    if (input[i] == ']' || input[i] == ' ') {
      printf(" ");
    }
    i++;
  }

  printf("\n");
  return 0;
}