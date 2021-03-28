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
        if(i == 3){
          printf("3-1. i의 숫자가 %d이다.\n", i);
        }
        else if(i == 4){
          printf("3-2. i의 숫자가 %d이다.\n", i);
        }
        else{
          printf("3-3. i의 숫자가 %d이다.\n", i);
        }
        break;
      default:
        printf("4. i의 숫자가 %d으로 case 조건 범위 밖이다.\n", i);
        break;
    }
  }
  return 0;
}

