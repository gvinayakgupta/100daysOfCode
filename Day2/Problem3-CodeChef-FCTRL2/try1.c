// Wrong Answer
#include <stdio.h>

int main(void) {
  int T, n;
  scanf("%d", &T);
  while (T--) {
    scanf("%d", &n);
    unsigned long long int r = 1;
    while (n > 0) {
      r *= n;
      n--;
    }
    printf("%llu\n", r);
  }
  return 0;
}
