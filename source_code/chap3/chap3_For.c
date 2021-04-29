#include <stdio.h>

int main (){
  printf("\nfor문을 이용하여 홀수단 출력\n");
  for(int i=1; i<10; i++){
    for(int j=1; j<10; j+=2){
      printf("%d X %d = %2d |", i, j, i*j);
    }
    printf("\n");
  }
  return 0;
}