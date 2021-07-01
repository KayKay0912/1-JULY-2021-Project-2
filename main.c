#include <stdio.h>

int main(void) {
  printf("[%5d] [%+05d] [%#5o] [%#7x]\n", 123, 1234, 123, 123);
  printf("[%f] [%5.2f] [%05.0f] \n", 123.456, 123.456, 123.456);

  return 0;
}