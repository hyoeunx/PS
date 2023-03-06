#include <stdio.h>
int main() {
  int a[10], max=0, num;
  for(int i=1; i<=9; i++){
    scanf("%d", &a[i]);
    if(max<a[i]){
      max=a[i];
      num=i;
      }
  }
  printf("%d\n%d", max, num);
}