#inlclude <stdio.h>

int main() {
  int num_a = 23;
  int num_b = 5;
  
  printf("%d + %d = %d\n", num_a, num_b, num_a + num_b);
  printf("%d - %d = %d\n", num_a, num_b, num_a - num_b);
  printf("%d * %d = %d\n", num_a, num_b, num_a * num_b);
  printf("%d / %d = %d\n", num_a, num_b, num_a / num_b);
  printf("%d %% %d = %d\n", num_a, num_b, num_a % num_b);
  return 0;
}