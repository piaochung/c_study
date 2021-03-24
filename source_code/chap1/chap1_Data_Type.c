#inlclude <stdio.h>

int main() {
  int int_num = 10;
  float float_num = 23.2;
  double double_num = 32.212355;
  char leng_1_char = 'a';
  char err_leng_1_char = "a";
  char leng_10_char[10] = "abcdeabcde";

  printf("\n<표준 출력>\n");
  printf("int 출력: %d\n", int_num);
  printf("float 출력: %f\n", float_num);
  printf("double 출력: %f\n", double_num);
  printf("char 출력: %c\n", leng_1_char);
  printf("char[10] 출력: %s\n", leng_10_char);

  printf("\n<에러 출력>\n");
  // err_leng_1_char를 쌍따옴표로 선언함
  printf("변수 선언 error 출력: %c\n", err_leng_1_char);

  // int형을 %f를 사용하여 출력함
  printf("자료형 error 출력: %f\n", int_num);

  // float형을 %d를 사용하여 출력함
  printf("출력형 error 출력: %d\n", float_num);
  
  printf("\n<강제 형변환>\n");
  // float형을 -> int형으로 바꿈
  printf("강제 형변환 출력: %d\n", (int)float_num);
  // double형을 -> float형으로 바꿈
  printf("강제 형변환 출력: %d\n", (int)double_num);
  return 0;
}