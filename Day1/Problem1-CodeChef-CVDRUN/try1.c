// Wrong Answer
#include <stdio.h>

int sol(int n, int k, int x, int y) {
  if (y > n || y < 0 || x > n || x < 0) {
    return 0;
  }
  if (x == y)
    return 1;
  else if (k == 0 || k == n)
    return 0;
  int a, i;
  a = x > y ? y + n - x : y - x;
  for (i = 0; i < n - 1; i++) {
    if ((a + i * n) % k == 0)
      return 1;
  }
  return 0;
}
int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n, k, x, y;
    scanf("%d %d %d %d", &n, &k, &x, &y);
    if (sol(n, k, x, y)) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
}