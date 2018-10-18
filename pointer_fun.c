#include <stdio.h>

void print_integers(int x, int *y) {
  printf("%d %d\n",x, *y);
}

int change_integers(int x, int *y) {
  printf("Bitte geben Sie einen Wert für x ein: \n");
  scanf("%d", &x);
  printf("Bitte geben Sie einen wert für y ein: \n");
  scanf("%d", y);

  return x;
}
int main(int argc, char const *argv[]) {

  int value = 999;
  int int_value = 666;
  int *int_pointer = &value;;
  print_integers(int_value, int_pointer);
  int_value = change_integers(int_value, int_pointer);
  print_integers(int_value, int_pointer);
  return 0;
}
