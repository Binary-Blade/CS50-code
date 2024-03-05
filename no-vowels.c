#include <stdio.h>
#include <string.h>

void replace(char let[]);

int main(int argc, char *argv[]) {
  if (argc > 1) {
    replace(argv[1]);
    return 0;

  } else {
    return 1;
  }
}

void replace(char let[]) {

  int length = strlen(let);
  for (int i = 0; i < length; i++) {
    switch (let[i]) {
    case 'a' & 'A':
      printf("6");
      break;

    case 'e' & 'E':
      printf("3");
      break;

    case 'o' & 'O':
      printf("0");
      break;

    default:
      printf("%c", let[i]);
    }
  }
}
