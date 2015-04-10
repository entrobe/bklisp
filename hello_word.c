#include <stdio.h>

int add_together(int x, int y) {
  int result = x + y;
  return result;
}

int main(int argc, char** argv) {
  int sum = add_together(3, 5);

  puts("puts something once");

  puts("something with var: " + sum);
  
  for (int i = 0; i < 5; i++) {
    printf("FOR! Hello, world! result: %d\n", sum);    
  }

  int i = 0;
  while(i < 5) {
    printf("WHILE! Hello, world! result: %d\n", sum);
    i++;
  }

  return 0;
}
