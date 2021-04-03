#include <stdio.h>

int main() {
  int x = 0;
  int y = 0;
  printf("OO의 숙제\n");
  while(1){
    printf("2개의 정수를 공백을 기준으로 입력해주세요 >>");
    scanf("%d %d", &x, &y);
    if(x > 0 && y > 0){
      printf("x=%d, y=%d이므로 제 1사분면에 속한다.\n", x, y);
    }
    else if( x < 0 && y > 0){
      printf("x=%d, y=%d이므로 제 2사분면에 속한다.\n", x, y);
    }
    else if (x < 0 && y < 0){
      printf("x=%d, y=%d이므로 제 3사분면에 속한다.\n", x, y);
    }
    else if (x > 0 && y < 0){
      printf("x=%d, y=%d이므로 제 4사분면에 속한다.\n", x, y);
    }
    else if (x == 0 && y == 0){
      printf("x=%d, y=%d이므로 프로그램을 종료합니다.\n", x, y);
      break;
    }
    else {
      printf("\n정수만 입력해주시기 바랍니다.");
    }
  }
  return 0;
}