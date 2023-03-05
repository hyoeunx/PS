#include <stdio.h>
int main(){
  int n, x, a[10001];
  scanf("%d %d", &n, &x);
  for(int i=1; i<=n; i++){
    scanf("%d", &a[i]);
    if(x>a[i]) printf("%d ", a[i]);
  }
}