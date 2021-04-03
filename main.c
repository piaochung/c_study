#include <stdio.h>

int main() {
  char input;
  int num;
  scanf("%c", &input);
  num = (int)input;
  if (num > 122){
    printf("Out Of Range");
  }
  else if (num < 65){
    printf("Out Of Range");
  }
  else{
    printf("%d", input);
  }
  return 0;
}

