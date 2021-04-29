#include <stdio.h>

void detect_bigger_number(int a, int b){
  if (a > b){
    printf("첫번째 인자 숫자가 더 큽니다.\n");
  }
  else{
    printf("두번째 인자 숫자가 더 큽니다.\n");
  }
}

void printf_fn(int a){
  printf("숫자 %d이(가) 입력되었습니다.\n", a);
}

int main(){
  int num_a=1, num_b=2, num_c=3;
  
  method_in_method(num_a, num_b, num_c);
  printf_fn(num_c);
  detect_bigger_number(num_a, num_c);
  return 0;
}