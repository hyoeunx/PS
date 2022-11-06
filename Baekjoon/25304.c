#include <stdio.h>
int main(){
  int x, n, a, b, tot=0;
  scanf("%d %d", &x, &n);
  for(int i=0; i<n; i++){
    scanf("%d %d", &a, &b);
    tot += a*b;
  }
  if(x == tot) printf("Yes");
  else if(x != tot) printf("No");
}