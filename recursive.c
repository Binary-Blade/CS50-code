#include <stdio.h>

void dieselTable(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("#");
    }
    printf("\n");
  }
}

void dieselRecursive(int n) {
  if (n == 0) {
    return;
  }
}

void print_multiplication_table(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      printf("%d x %d = %d\n", i, j, i * j);
    }
  }
}

void sum_even_numbers(int n) {
  int sum = 0;
  for (int i = 0; i <= n; i++) {
    sum += 2 * i;
  }
  printf("%d", sum);
}

void print_even_numbers(int n) {

  // Votre code ici
}

int main() {
  int n = 5;
  print_even_numbers(n);
  return 0;
}
