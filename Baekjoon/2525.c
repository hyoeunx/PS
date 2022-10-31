#include <stdio.h>
int main(){
  int h, m, time;
  scanf("%d %d", &h, &m);
  scanf("%d", &time);
  if(m+time>=60){
    h += (m+time)/60;
    if(h>=24){
      h -= 24;
    }
    printf("%d %d", h, (m+time)%60);
  }
  else{
    printf("%d %d", h, m+time);
  }
  return 0;
}