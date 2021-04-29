#include <stdio.h>
#include <stdbool.h>

int main()
{
  int score = 0, grade = 0;
  int num_a, num_b, num_c;
  printf("세 개의 점수를 입력하세요\n");

  scanf("%d %d %d", &num_a, &num_b, &num_c);
  score = num_a + num_b + num_c;
  printf("%d + %d + %d = %d", num_a, num_b, num_c, score);
   
  grade = score > 100;
  
  if (grade == 1)
    printf("\n합격\n");
  else
    printf("\n불합격\n");

  return 0;
}