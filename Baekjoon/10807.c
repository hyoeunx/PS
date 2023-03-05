#include <stdio.h>
int main() {
  int n, a[101], m, num=0;
  scanf("%d", &n);
  for(int i=1; i<=n; i++){
    scanf("%d", &a[i]);
  }
  scanf("%d", &m);
  for(int i=1; i<=n; i++){
    if(a[i]==m) num++;
  }
  printf("%d", num);
}