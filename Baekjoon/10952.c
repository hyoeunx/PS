#include <stdio.h>
int main(){
  int a=1, b=1;
  while(a!=0&&b!=0){
    scanf("%d %d", &a, &b);
    if(a==0&&b==0) break;
    printf("%d\n", a+b);
  }
  return 0;
}

#include <stdio.h>
int main(){
  int a=1, b=1;
  while(1){
    scanf("%d %d", &a, &b);
    if(a==0&&b==0) break;
    printf("%d\n", a+b);
  }
  return 0;
}

#include <stdio.h>
int main(){
  int a=1, b=1;
  while(1){
    scanf("%d %d", &a, &b);
    if(a==0&&b==0) return 0;
    printf("%d\n", a+b);
  }
}