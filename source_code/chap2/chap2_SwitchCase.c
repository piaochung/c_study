#include <stdio.h>

int main() {
  for (int i = 0; i < 7; i++) {
    switch(i){
      case 0:
      case 1:
        printf("1. i의 숫자가 %d이다.\n", i);
        break;
      case 2:
        printf("2. i의 숫자가 %d이다.\n", i);
        break;
      case 3:
      case 4:
      case 5:
        printf("3. i의 숫자가 %d이다.\n", i);
        break;
      default:
        printf("4. i의 숫자가 %d으로 switch~case문의 범위 밖이다.\n", i);
        break;
    }
  }
  return 0;
}