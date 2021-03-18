#inlclude <stdio.h>

int main() {
  char leng_1_char;
  char leng_5_char[5];

  printf("안녕하세요\n");
  printf("문자를 입력해주세요 =>");
  scanf("%c", &leng_1_char);

  printf("입력된 문자는 %c입니다.\n", leng_1_char);

  printf("\n5개의 문자를 입력해주세요 =>");
  scanf(" %s", &leng_5_char);

  printf("입력된 문자는 %s입니다.", leng_5_char);

  printf("\n\nscanf의 오류 --------------------------\n\n");
  printf("첫번째 문자를 입력해주세요: ");
  scanf(" %c", &leng_1_char);
  printf("첫번째 입력된 문자는 %c\n", leng_1_char);

  printf("두번째 숫자를 입력해주세요: ");
  scanf("%c", &leng_1_char);
  printf("두번째 입력된 문자는 %c\n", leng_1_char);

  return 0;
}