#include <stdio.h>
int main(){
  long long int a, r, n, num=0;
  scanf("%lld %lld %lld", &a, &r, &n);
  num = a;
  for(int i=1; i<n; i++){
    num *= r;
  }
  printf("%lld", num);
  return 0;
}