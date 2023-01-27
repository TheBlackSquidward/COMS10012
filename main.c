#include <stdio.h>

int first() {
  for (int i = 0; i < 10; i++) {
    printf("%i\n",i);
  }
  return 0;
}

int main() {
  puts("Hello World");
  first();
  return 0;
}
