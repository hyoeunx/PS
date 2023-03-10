#include <stdio.h>
int main() {
  int n, m, i, j, k, num[101];
  scanf("%d %d", &n, &m);
  for(int a=1; a<=m; a++){
    scanf("%d %d %d", &i, &j, &k);
    for(int b=i; b<=j; b++){
      num[a]=k;
    }
  }
  for(int a=1; a<=n; a++){
    printf("%d ", num[a]);
  }
}