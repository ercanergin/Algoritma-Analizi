#include <stdio.h>

int memo[10000]; 

int fibonacci(int n) {
  if (memo[n] != -1)
    return memo[n];

  if (n==1 || n==2)
    return 1;
  else
    return memo[n] = fibonacci(n-1) +fibonacci(n-2);
}
int main() {
  int i;
  for(i = 0; i < 10000; ++i)
    memo[i] = -1;
  printf("%d\n", fibonacci(50));
  system("PAUSE");
  return 0;
}
