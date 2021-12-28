#include <stdio.h>
void print_big(int i) {
    if (i > 10) {
        printf("%d is big\n", i);
    }
}
int main() {
  int array[] = { 1, 11, 2, 22, 3, 33 };
  int i;
  for (i = 0; i < 6; i++) {
    print_big(array[i]);
  }
  return 0;
}

/* write your function here */
