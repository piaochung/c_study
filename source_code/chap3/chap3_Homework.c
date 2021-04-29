#include <stdio.h>

int main() {
  int n = 0, m = 0;
  unsigned int sum = 0, mutiply = 1;
  
  while(1){
    sum = 0, mutiply = 1;
    printf("\n두 개의 0을 제외한 양의 정수를 공백을 기준으로 입력해주세요>>");
    scanf("%d %d", &n, &m);

    if(n > m){
      int temp = n;
      n = m;
      m = temp;
    }



    
    if (n > 0 && m > 0){
      for(int i = n; i <= m; i++){
        sum += i;
        mutiply *= i;
      }
      printf("\n%d부터 %d까지의 합은 %d이다.\n", n, m, sum);
      printf("%d부터 %d까지의 곱은 %d이다.\n", n, m, mutiply);
    }
    else if(n==0 && m==0){
      printf("n=%d, m=%d이 입력되었으므로 프로그램을 종료합니다.", n, m);
      break;
    }
    else{
      printf("양의 정수만 입력해주세요.\n");
    }
    printf("0을 입력하면 프로그램은 종료됩니다.\n");
  }
  return 0;
}