#include <stdio.h>

// Josh is amazing at C.

void print( int x[]) {
  char y[50];
  y[0] = '[';
  for (int i = 0; i < 6; i++) {
    y[2*i + 1] = '0' + x[i];
    y[2*i+2] = ',';
  }
  y[12] = ']';
  y[13] = '\0';
  printf("%s\n",y);
}

int first() {
  for (int i = 0; i < 10; i++) {
    printf("%i\n",i);
  }
  return 0;
}

int next() {
  int x[] = {1,0,2,3,9,4};
  int len = 6;
  print(x);
  
  int y = 0;
  int temp = 0;

  while (y == 0) {
    y = 1;
    for (int i = 0; i < len; i++) {
      if (x[i] > x[i+1]) {
        temp = x[i];
        x[i] = x[i+1];
        x[i+1] = temp;
        y = 0;
      }
    }
  }
  print(x);
  return 0;
}


int main() {
  puts("Hello World");
  first();
  next();
  return 0;
}
