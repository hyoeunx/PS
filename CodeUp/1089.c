#include <stdio.h>
int main(){
  int a, d, n, num=0;
  scanf("%d %d %d", &a, &d, &n);
  num = a;
  for(int i=1; i<n; i++){
    num += d;
    
  }
  printf("%d", num);
  return 0;
}