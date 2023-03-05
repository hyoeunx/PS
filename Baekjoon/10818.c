#include <stdio.h>
int main() {
  int n, a[1000001], min=1000000, max=-1000000;
  scanf("%d", &n);
  for(int i=1; i<=n; i++) {
    scanf("%d", &a[i]);
    if(max<a[i]) max=a[i];
    if(min>a[i]) min=a[i];
  }
  printf("%d %d", min, max);
}