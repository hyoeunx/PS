#include <stdio.h>
int main(){
  int n, num=0, count=0;
  scanf("%d", &n);
  num = n;
  while(1){
    count++;
    num = (num/10 + num%10)%10+(num%10)*10;
    if(num == n) break;
  }
  printf("%d", count);
}