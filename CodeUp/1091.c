#include <stdio.h>
int main(){
  long long int a, m, d, n, num=0;
  scanf("%lld %lld %lld %lld", &a, &m, &d, &n);
  num = a;
  for(int i=1; i<n; i++){
    num *= m;
    num += d;
  }
  printf("%lld", num);
  return 0;
}