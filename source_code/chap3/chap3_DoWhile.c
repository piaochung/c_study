#include <stdio.h>

int main() {
  int i = 0;
  
  printf("\ndo~while문을 이용하여 0~9까지 출력\n");
  
  do{
    printf("%d\n", i);
    i++;
  }while(i < 10);

  printf("\ndo~while문의 특징\n");

  do{
    printf("%d\n", i);
    i++;
  }while(i < 0);
  
  return 0;
}