#include <stdio.h>

int sum(int a, int b, int c){
  int sum = a + b + c;
  return sum;
}

float average(int a, int b, int c){
  float sum = a + b + c;
  return sum / 3;
}

void method_in_method(int a, int b, int c){
  printf("%d, %d, %d의 합은 %d 입니다.\n", a, b, c, sum(a,b,c));
}

int main(){
  int num_a=1, num_b=2, num_c=3;
  printf("%d, %d, %d의 합은 %d 입니다.\n", num_a, num_b, num_c, sum(num_a,num_b,num_c));
  printf("%d, %d, %d의 평균은 %.2f 입니다.\n", num_a, num_b, num_c, average(num_a,num_b,num_c));
  method_in_method(num_a, num_b, num_c);
  return 0;
}