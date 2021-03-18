#inlclude <stdio.h>

int main() {
  int num_a, num_b;
  
  printf("양의 정수 2개를 공백으로 구분하여 입력해주세요:");
  scanf("%d %d", &num_a, &num_b);

  printf("%d + %d = %d\n", num_a, num_b, num_a + num_b);
  printf("%d - %d = %d\n", num_a, num_b, num_a - num_b);
  printf("%d * %d = %d\n", num_a, num_b, num_a * num_b);
  printf("%d / %d = %d\n", num_a, num_b, num_a / num_b);
  printf("%d %% %d = %d\n", num_a, num_b, num_a % num_b);
  return 0;
}